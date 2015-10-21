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
    QRect rect(10, 20, 80, 60);

    QPainter painter(this);

    painter.beginNativePainting();

    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawEllipse(rect);
    painter.drawPixmap(60, 60, pixmap);
    painter.restore();

    painter.setRenderHint(QPainter::Antialiasing, false);
    painter.setPen(palette().dark().color());
    painter.setBrush(Qt::NoBrush);

    update();
}
