// Danny Dutton
// Project 2: QtDraw

#include "line.h"

Line::Line()
{
	item = 3;
}

Line::Line(QPoint newBegin, QPoint newEnd)
{
	item = 3;
	begin = newBegin;
	end = newEnd;
}

void Line::paint(QPainter *painter, bool showHandles)
{
	painter->save();
	painter->setPen(Qt::black);
	painter->drawLine(begin, end);
	if(showHandles)
	{
		painter->setBrush(QtBrush(Qt::yellow));
		painter->drawEllipse(begin.x()-3, begin.y()-3, 5, 5);
		painter->drawEllipse();
	}
	painter->restore();
}

bool Line::snap(QPoint &point, string &str)
{
	if(QLine(begin, point) < 5)
	{
		point = begin;
		str = "Line's begining";
	}

	else if(QLine(begin, end) < 5)
	{
		point = end;
		str = "Line's end";
	}

	else
	{
		return false;
	}

	return true;
}

