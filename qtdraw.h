// Danny Dutton
// Project 2: QtDraw

#ifndef QTDRAW_H
#define QTDRAW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QString>
#include <QWidget>

#include "message.h"
#include "canvasview.h"
//#include "menu.h"
#include "ui_qtdraw.h"

class qtdraw : public QWidget
{
    Q_OBJECT

public:
    explicit qtdraw(QWidget *parent = 0);
    ~qtdraw();

private:
	CanvasView mycanvas;
	Message mymessage;
    
};

#endif // QTDRAW_H
