// Danny Dutton
// Project 2: QtDraw

#include "qtdraw.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtdraw w;
    w.show();

    return a.exec();
}
