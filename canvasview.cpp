CanvasView::CanvasView(QWidget *parent) :
    QWidget(parent)
{
    showHandles = show = false;
    shape = UNDEFINED;
    mymodel = new Model;
    state = IDLE;
    this->setMouseTracking(true);
    setFixedSize(width,height);
    snap1 = snap2 = "NA";
}
void CanvasView::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter* painter = new QPainter(this);
    painter->fillRect(0,0,width, height, QBrush(Qt::white,Qt::SolidPattern));
    mymodel->draw(painter,showHandles);
    mightSnap(painter);
    if(state == START){
        if(shape == LINE)
            painter->drawLine(start,end);
        else if(shape == CIRCLE)
            painter->drawEllipse(start,QLineF(start,end).length(),QLineF(start,end).length());
    }
    else if(state == DONE){
        if(shape == LINE){
            painter->drawLine(start,end);
            mymodel->add(shape,start,end);
        }
        else if(shape == CIRCLE){
            painter->drawEllipse(start,QLineF(start,end).length(),QLineF(start,end).length());
            mymodel->add(shape,start,end);
        }
        state = IDLE;
        showHandles = snap = show = false;
        shape = UNDEFINED;
        emit shapeChanged(shape);
        update();
    }
}

void CanvasView::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_X){
        if(state==IDLE){
            state = READY;
            shape = LINE;
            showHandles = show = true;
            start = mapFromGlobal(QCursor::pos());
        }
    }
    else if(event->key() == Qt::Key_C){
        if(state==IDLE){  
            state = READY;
            shape = CIRCLE;
            showHandles = show =true;
            start = mapFromGlobal(QCursor::pos());
        }
    }
    else if(event->key() == Qt::Key_Escape){
            state = IDLE;
            showHandles = snap = show = false;
            snap1 = snap2 = "NA";
            shape = UNDEFINED;
    }
    emit shapeChanged(this->shape);
    emit messageChanged(show,toString(start),"...",shape);
    update();
}
void CanvasView::mousePressEvent(QMouseEvent *event)
{
   if(state == READY){
       if(snap){
            end = start;
       }
       else{
           start = event->pos();
           end = event->pos();
       }
       state = START;
       snap = false;
       update();
   }
   else if(state == START){
       if(snap){
           //do nothing
       }
       else{
        end = event->pos();
       }
       state = DONE;
       update();
   }
}
void CanvasView::mouseMoveEvent(QMouseEvent *event)
{
    if(event->type() == QEvent::MouseMove){
        if(state == READY)
        {
            start = event->pos();
            emit messageChanged(show,toString(start),"...",shape);
        }
        else if(state == START)
        {
            end = event->pos();
            if(snap1 != "NA") emit messageChanged(show,snap1,toString(end),shape);
            else emit messageChanged(show,toString(start),toString(end),shape);
        }
        update();
    }
}
void CanvasView::mightSnap(QPainter *painter)
{
    if(state == READY)
    {
        if(mymodel->snapper(start,snap1))
        {
            snap = true;
            painter->save();
            painter->setBrush(QBrush(Qt::red));
            painter->drawEllipse(start,10,10);
            painter->setBrush(QBrush(Qt::blue));
            painter->drawEllipse(start,5,5);
            painter->restore();
            emit messageChanged(show,snap1, "...",shape);
        }
        else snap = false;
    }
    else if(state == START)
    {
        if(mymodel->snapper(end,snap2))
        {
            snap = true;
            painter->save();
            painter->setBrush(QBrush(Qt::red));
            painter->drawEllipse(end,10,10);
            painter->setBrush(QBrush(Qt::blue));
            painter->drawEllipse(end,5,5);
            painter->restore();
            if(snap1!="NA") emit messageChanged(show,snap1,snap2,shape);
        }
        else snap = false;
    }
}