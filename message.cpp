// Danny Dutton
// Project 2: QtDraw

#include "message.h"

Message::Message(QWidget *parent) : QWidget(parent)
{
    setm("");
}

void Message::setm(string str)
{
    dispMessage->setText(str);
}

void Message::changem(std::string newBegin, std::string newEnd, int newItem)
{
    begin = newBegin;
    end = newEnd;
    item = newItem;

    update();
}

void Message::paintEvent(QPaintEvent *event)
{
    QPainter * painter = new QPainter(this);
    std::string str = "Drawing ";
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