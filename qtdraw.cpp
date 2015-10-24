// Danny Dutton
// Project 2: QtDraw

#include <QtGui>

#include "qtdraw.h"
#include "canvas.h"
#include "ui_qtdraw.h"

qtdraw::qtdraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qtdraw)
{
    ui->setupUi(this);
    drawingMode = 0;
    mycanvas = new Canvas(ui->canvas);
}

qtdraw::~qtdraw()
{
    delete ui;
}

// This function listens for keys being pressed, listens for C-o (open) and C-s (save)
// Input: QKeyEvent* e
// Output: Sends opened file to textEdit, saves converted HTML to file
void qtdraw::keyPressEvent(QKeyEvent* e)
{
    QString str;

    if (drawingMode == 0)
    {
        // Check if x was pressed and we are idle
        if (e->key() == Qt::Key_X)
        {
            mycanvas->setAntialiased(true);

            // Goto line state
            drawingMode = 1;

            // Bold line label
            str = ui->lineLabel->text();
            ui->lineLabel->setText(toggleLabel(str));
        }

        // Check if c was pressed and we are idle
        else if (e->key() == Qt::Key_C)
        {
            mycanvas->setAntialiased(false);

            // Goto circle state
            drawingMode = 2;

            // Bold circle label
            str = ui->circleLabel->text();
            ui->circleLabel->setText(toggleLabel(str));
        }
    }
    // Check if Esc was pressed
    else if (e->key() == Qt::Key_Escape)
    {
        // Goto idle state
        drawingMode = 0;

        // Unbold all labels
        str = ui->lineLabel->text();
        ui->lineLabel->setText(toggleLabel(str, 1));
        str = ui->circleLabel->text();
        ui->circleLabel->setText(toggleLabel(str, 1));
    }

    update();
}
