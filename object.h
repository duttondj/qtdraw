#ifndef OBJECT_H
#define OBJECT_H

#include <QLine>
#include <QPainter>
#include <QPoint>

class Object
{
public:
    virtual void render(QPainter* painter, bool showHandles);
    virtual bool snap(QPoint& point , std::string& str);
    
    // Item includes Canvas=1, Circle=2, and Line=3
    int item;
};

#endif // OBJECT_H