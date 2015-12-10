// Danny Dutton
// Project 2: QtDraw

#ifndef QTDRAW_H
#define QTDRAW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QString>
#include <QWidget>

#include "message.h"
#include "menu.h"
#include "ui_qtdraw.h"
#include "canvas.h"

class qtdraw : public QWidget
{
    Q_OBJECT

public:
    explicit qtdraw(QWidget *parent = 0);
    ~qtdraw();

private:
    
};

#endif // QTDRAW_H
