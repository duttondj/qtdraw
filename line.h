// Danny Dutton
// Project 2: QtDraw

#ifndef LINE_H
#define LINE_H

#include "object.h"


class Line : public QObject
{
    Q_OBJECT
public:
    explicit Line(QObject *parent = 0);
    void drawLine();

signals:

public slots:
};

#endif // LINE_H
