// Danny Dutton
// Project 2: QtDraw

#include "object.h"

Object::Object(QObject *parent) : QObject(parent)
{

}

QPoint Object::getp1()
{
    return p1;
}

QPoint Object::getp2()
{
    return p2;
}
