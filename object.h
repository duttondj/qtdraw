// Danny Dutton
// Project 2: QtDraw

#ifndef OBJECT_H
#define OBJECT_H

#include <QPoint>

class Object : public QObject
{
    Q_OBJECT
public:
   explicit Object(QObject *parent = 0);
   QPoint getp1();
   QPoint getp2();
private:
   QPoint p1;
   QPoint p2;
signals:

public slots:
};

#endif // OBJECT_H
