#ifndef QTDRAW_H
#define QTDRAW_H

#include <QMainWindow>

namespace Ui {
class qtdraw;
}

class qtdraw : public QMainWindow
{
    Q_OBJECT

public:
    explicit qtdraw(QWidget *parent = 0);
    ~qtdraw();

private:
    Ui::qtdraw *ui;
};

#endif // QTDRAW_H
