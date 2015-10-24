// Danny Dutton
// Project 2: QtDraw

#include <QtGui>
#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QWidget(parent)
{
    pixmap.load(":/image.png");

    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

void Canvas::setAntialiased(bool antialiased)
{
    this->antialiased = antialiased;
    update();
}

void Canvas::paintEvent(QPaintEvent *)
{
    //QPainterPath path;

    //path.moveTo(20, 80);
    //path.lineTo(20, 30);
    //path.cubicTo(80, 0, 50, 50, 80, 80);
    //QRect rect(100, 200, 80, 60);

    QPainter painter(this);

    painter.beginNativePainting();

    //painter.setPen(pen);
    //painter.setBrush(brush);

    //painter.drawEllipse(rect);
//    painter.drawPixmap(100, 200, 300, 300, pixmap);
//    painter.restore();

//    painter.setRenderHint(QPainter::Antialiasing, false);
//    painter.setPen(palette().dark().color());

    painter.setWindow(150,150, 300, 300);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");
    painter.drawText(rect(), Qt::AlignCenter, "danny");
    painter.drawLine(100,100, 200, 200);

    painter.endNativePainting();
}
