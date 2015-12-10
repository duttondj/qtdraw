// Danny Dutton
// Project 2: QtDraw

#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QPoint>
#include <QtGui>
#include <string>
#include "object.h"

class message : public QWidget
{
	Q_OBJECT
public:
	message(QWidget *parent = 0);
	void setm(string str);
	void paintEvent(QPaintEvent* event);
public slots:
	void changem(string newBegin, string newEnd, int newItem);
private:
	QLabel* dispMessage;
	string begin;
	string end;
	int item;
};

#endif // MESSAGE_H
