#ifndef CANVASVIEW_H
#define CANVASVIEW_H

#include <QLabel>
#include <string>
#include "model.h"

class CanvasView : public QWidget
{
    Q_OBJECT
public:
    CanvasView(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent *event);
    void snap(QPainter* painter);
signals:
    void shapeChanged(int newItem);
    void messageChanged(bool show, std::string from, std::string to, int type);
private:
    bool show;
    bool canSnap;
    std::string snap1;
    std::string snap2;
    bool showHandles;
    int state;
    int item;
    QPoint begin;
    QPoint end;
    static const int height = 410;
    static const int width = 670;
    Model* mymodel;
};

#endif // CANVASVIEW_H