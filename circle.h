// Danny Dutton
// Project 2: QtDraw

#ifndef CIRCLE_H
#define CIRCLE_H

#include <QPoint>

class Circle : public QObject
{
    Q_OBJECT
public:
    explicit Circle(QObject *parent = 0);


private:
    QPoint center;
    unsigned int radius;

signals:

public slots:
};

#endif // CIRCLE_H
