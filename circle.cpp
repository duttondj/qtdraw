// Danny Dutton
// Project 2: QtDraw

#include "circle.h"

Circle::Circle()
{
	item = 2;
}

Circle::Circle(QPoint newCenter, unsigned int newRadius)
{
	item = 2;
	radius = newRadius;
	center = newCenter;
}

void Circle::render(QPainter* painter, bool showHandles)
{
    painter->save();
    painter->setPen(Qt::black);
    painter->drawEllipse(center, radius, radius);
    if(showHandles)
    {
        // Draw yellow circles at top, bottom, center, left, right
        painter->setBrush(QBrush(Qt::yellow));
        painter->drawEllipse(center.x()-3, center.y()-radius-3,6,6);
        painter->drawEllipse(center.x()-3, center.y()+radius-3,6,6);
        painter->drawEllipse(center.x()-3, center.y()-3,6,6);
        painter->drawEllipse(center.x()-radius-3, center.y()-3,6,6);
        painter->drawEllipse(center.x()+radius-3, center.y()-3,6,6);
    }
    painter->restore();
}

void Circle::snap(QPoint &point, std::string &str)
{
	str = "Circle's ";

    if(QLine(QPoint(center.x(), center.y()-radius),point).length() < 5)
    {
        point = QPoint(center.x(), center.y()-radius);
        str += "Circle's top";
    }

    else if(QLine(QPoint(center.x(), center.y()+radius),point).length() < 5)
    {
        point = QPoint(center.x(), center.y()+radius);
        str += "Circle's bottom";
    }

	else if(QLine(center,point).length() < 5)
	{
        point = center;
        str += "center";
    }

    else if(QLine(QPoint(center.x()-radius, center.y()),point).length() < 5)
    {
        point = QPoint(center.x()-radius, center.y());
        str += "left";
    }

    else if(QLine(QPoint(center.x()+radius, center.y()),point).length() < 5)
    {
        point = QPoint(center.x()+radius, center.y());
        str += "right";
    }

    else
    {
    	return false;
    }
    
    return true;
}