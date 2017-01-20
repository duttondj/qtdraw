// Danny Dutton
// Project 2: QtDraw

#ifndef CANVAS_H
#define CANVAS_H

#include "object.h"

class Canvas : public Object
{
public:
    explicit Canvas();
    virtual void render(QPainter* painter, bool showHandles);
    virtual void snap(QPoint &point, std::string &str);

private:
    static const int height = 410;
    static const int width = 670;
    static const QPoint topLeft = QPoint(0,0);
    static const QPoint top =        QPoint(width/2, 0);
    static const QPoint topRight =   QPoint(width, 0);
    static const QPoint left =       QPoint(0, height/2);
    static const QPoint middle =     QPoint(width/2 , height/2);
    static const QPoint right =      QPoint(width, height/2);
    static const QPoint bottomLeft = QPoint(0, height);
    static const QPoint bottom =     QPoint(width/2, height);
    static const QPoint bottomRight= QPoint(width, height);
};

#endif // CANVAS_H
