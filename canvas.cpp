// Danny Dutton
// Project 2: QtDraw

#include <QtGui>
#include "canvas.h"

Canvas::Canvas()
{
    item = 1;
}

void Canvas::render(QPainter* painter, bool showHandles)
{
    painter->save();
    painter->setPen(Qt::black);
    painter->drawRect(3, 3, width-6, height-6);
    if(showHandles)
    {
        painter->setBrush(QBrush(Qt::yellow));
        painter->drawEllipse(topLeft.x()-3, topLeft.y()-3,6,6);
        painter->drawEllipse(top.x()-3, top.y()-3,6,6);
        painter->drawEllipse(topRight.x()-3, topRight.y()-3,6,6);
        painter->drawEllipse(left.x()-3, left.y()-3,6,6);
        painter->drawEllipse(center.x()-3, center.y()-3,6,6);
        painter->drawEllipse(right.x()-3, right.y()-3,6,6);
        painter->drawEllipse(bottomLeft.x()-3, bottomLeft.y()-3,6,6);
        painter->drawEllipse(bottom.x()-3, bottom.y()-3,6,6);
        painter->drawEllipse(bottomRight.x()-3, bottomRight.y()-3,6,6);
    }
    painter->restore();
}

bool Canvas::snap(QPoint &point, std::string &str)
{
    str = "Canvas's ";

    if (QLine(topLeft, point).length() < 5)
    {
        point = topLeft;
        str += "top left corner";
    }

    else if (QLine(top, point).length() < 5)
    {
        point = top;
        str += "top edge";
    }

    else if (QLine(topRight, point).length() < 5)
    {
        point = topRight;
        str += "top right corner";
    }

    else if (QLine(left, point).length() < 5)
    {
        point = left;
        str += "left edge";
    }

    else if (QLine(center, point).length() < 5)
    {
        point = center;
        str += "center";
    }

    else if (QLine(right, point).length() < 5)
    {
        point = right;
        str += "right edge";
    }

    else if (QLine(bottomLeft, point).length() < 5)
    {
        point = bottomLeft;
        str += "bottom left corner";
    }

    else if (QLine(bottom, point).length() < 5)
    {
        point = bottom;
        str += "bottom edge";
    }

    else if (QLine(bottomRight, point).length() < 5)
    {
        point = bottomRight;
        str += "bottom right corner";
    }

    else
    {
        return false;
    }

    return true;
}