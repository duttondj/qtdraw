// Danny Dutton
// Project 2: QtDraw

#include "message.h"

message::message(QWidget *parent) : QWidget(parent)
{
    setm("");
}

void message::setm(string str)
{
    dispMessage->setText(str);
}

void message::changem(string newBegin, string newEnd, int newItem)
{
    begin = newBegin;
    end = newEnd;
    item = newItem;

    update();
}

void message::paintEvent(QPaintEvent *event)
{
    QPainter * painter = new QPainter(this);
    string str = "Drawing ";
    if(item == 2)
    {
        str += "Circle ";
    }
    if(item == 3)
    {
        str += "Line ";
    }

    str += "from ";
    str += begin;
    str += "to ";
    str += end;

    painter->drawText(this->x()+250, this->y() + 15, str);
}