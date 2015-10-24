// Danny Dutton
// Project 2: QtDraw

#ifndef CANVAS_H
#define CANVAS_H

#include <QBrush>
#include <QPen>
#include <QPixmap>
#include <QWidget>

//#include "circle.h"
//#include "line.h"

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QPixmap pixmap;
    QPen pen;
    QBrush brush;
    bool antialiased;
    //add in vector of circles
    //add in vector of lines

signals:

public slots:
    void setAntialiased(bool antialiased);
};

#endif // CANVAS_H
