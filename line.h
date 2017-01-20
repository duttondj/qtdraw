// Danny Dutton
// Project 2: QtDraw

#ifndef LINE_H
#define LINE_H

#include "object.h"

class Line : public Object
{
public:
    Line();
    Line(QPoint newBegin, QPoint newEnd);
    virtual void render(QPainter* painter);
    virtual void snap(QPoint &point, std::string &str);

private:
    QPoint begin;
    QPoint end;
};

#endif // LINE_H
