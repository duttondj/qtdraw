/********************************************************************************
** Form generated from reading UI file 'qtdraw.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDRAW_H
#define UI_QTDRAW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtdraw
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *message;
    QWidget *canvas;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *lineLabel;
    QLabel *circleLabel;
    QLabel *abortLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *qtdraw)
    {
        if (qtdraw->objectName().isEmpty())
            qtdraw->setObjectName(QString::fromUtf8("qtdraw"));
        qtdraw->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qtdraw->sizePolicy().hasHeightForWidth());
        qtdraw->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(247, 247, 247, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(245, 245, 245, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        qtdraw->setPalette(palette);
        qtdraw->setMouseTracking(false);
        qtdraw->setAutoFillBackground(false);
        centralWidget = new QWidget(qtdraw);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 811, 486));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalFrame = new QFrame(gridLayoutWidget);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setMinimumSize(QSize(675, 0));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        message = new QLabel(horizontalFrame);
        message->setObjectName(QString::fromUtf8("message"));
        sizePolicy.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy);
        message->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(message);


        gridLayout->addWidget(horizontalFrame, 0, 1, 1, 1);

        canvas = new QWidget(gridLayoutWidget);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        canvas->setEnabled(true);
        sizePolicy.setHeightForWidth(canvas->sizePolicy().hasHeightForWidth());
        canvas->setSizePolicy(sizePolicy);
        canvas->setMinimumSize(QSize(670, 410));
        canvas->setMaximumSize(QSize(400, 400));
        QPalette palette1;
        QBrush brush2(QColor(231, 231, 231, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        canvas->setPalette(palette1);
        canvas->setMouseTracking(true);
        canvas->setAutoFillBackground(true);

        gridLayout->addWidget(canvas, 1, 1, 1, 1);

        verticalFrame = new QFrame(gridLayoutWidget);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setMaximumSize(QSize(100, 16777215));
        verticalLayout_2 = new QVBoxLayout(verticalFrame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineLabel = new QLabel(verticalFrame);
        lineLabel->setObjectName(QString::fromUtf8("lineLabel"));
        sizePolicy.setHeightForWidth(lineLabel->sizePolicy().hasHeightForWidth());
        lineLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lineLabel);

        circleLabel = new QLabel(verticalFrame);
        circleLabel->setObjectName(QString::fromUtf8("circleLabel"));
        sizePolicy.setHeightForWidth(circleLabel->sizePolicy().hasHeightForWidth());
        circleLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(circleLabel);

        abortLabel = new QLabel(verticalFrame);
        abortLabel->setObjectName(QString::fromUtf8("abortLabel"));
        sizePolicy.setHeightForWidth(abortLabel->sizePolicy().hasHeightForWidth());
        abortLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(abortLabel);

        verticalSpacer = new QSpacerItem(1, 387, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addWidget(verticalFrame, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        qtdraw->setCentralWidget(centralWidget);

        retranslateUi(qtdraw);

        QMetaObject::connectSlotsByName(qtdraw);
    } // setupUi

    void retranslateUi(QMainWindow *qtdraw)
    {
        qtdraw->setWindowTitle(QApplication::translate("qtdraw", "qtdraw", 0, QApplication::UnicodeUTF8));
        message->setText(QString());
        lineLabel->setText(QApplication::translate("qtdraw", "Line        x", 0, QApplication::UnicodeUTF8));
        circleLabel->setText(QApplication::translate("qtdraw", "Circle      c", 0, QApplication::UnicodeUTF8));
        abortLabel->setText(QApplication::translate("qtdraw", "Abort      esc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qtdraw: public Ui_qtdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDRAW_H
