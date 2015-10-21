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

class QCheckBox;

//namespace Ui {
//class qtdraw;
//}

class qtdraw : public QMainWindow
{
    Q_OBJECT

public:
    explicit qtdraw(QWidget *parent = 0);
    ~qtdraw();
    void keyPressEvent(QKeyEvent* e);
    void displayMessage();

private:
    Ui::qtdraw *ui;
    int drawingMode;
    Canvas* mycanvas;

    QCheckBox *antialiasingCheckBox;
};

#endif // QTDRAW_H
