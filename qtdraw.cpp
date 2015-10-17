#include "qtdraw.h"
#include "ui_qtdraw.h"

qtdraw::qtdraw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qtdraw)
{
    ui->setupUi(this);
}

qtdraw::~qtdraw()
{
    delete ui;
}

