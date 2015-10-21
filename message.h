#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QPoint>

QString createMessage(unsigned int mode, QPoint p1);
QString createMessage(unsigned int mode, QString p1);
QString createMessage(unsigned int mode, QPoint p1, QPoint p2);
QString createMessage(unsigned int mode, QPoint p1, QString p2);
QString createMessage(unsigned int mode, QString p1, QString p2);
QString createMessage(unsigned int mode, QString p1, QPoint p2);

#endif // MESSAGE_H
