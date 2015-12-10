// Danny Dutton
// Project 2: QtDraw

#ifndef CIRCLE_H
#define CIRCLE_H

#include "object.h"

class Circle : public Object
{
public:
    // Two contructors, default is used before center is placed, second is used after center is placed
    Circle();
    Circle(QPoint newCenter, unsigned int radius);
    virtual void render(QPainter* painter, bool showHandles);
    virtual void snap(QPoint &point, string &str);

private:
    QPoint center;
    unsigned int radius;
};

#endif // CIRCLE_H
