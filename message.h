// Danny Dutton
// Project 2: QtDraw

#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QPoint>
#include <QtGui>
#include <string>
#include "model.h"

class Message : public QWidget
{
	Q_OBJECT
public:
	Message(QWidget *parent = 0);
	void setm(std::string str);
	void paintEvent(QPaintEvent* event);
public slots:
	void changem(std::string newBegin, std::string newEnd, int newItem);
private:
	QLabel* dispMessage;
	std::string begin;
	std::string end;
	int item;
};

#endif // MESSAGE_H
