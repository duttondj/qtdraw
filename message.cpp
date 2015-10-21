#include "message.h"

// Create object starting at a point
QString createMessage(unsigned int mode, QPoint p1)
{
    QString msg = "";

    if(mode == 0)
    {
        return msg;
    }
    if(mode == 1)
    {
        return msg.sprintf("Draw line from (%i, %i) to ...", p1.x(), p1.y());
    }
    if(mode == 2)
    {
        return msg.sprintf("Draw circle centered at (%i, %i) and passing through ...", p1.x(), p1.y());
    }
}

// Create object starting at a handle
QString createMessage(unsigned int mode, QString p1)
{
    QString msg = "";

    if(mode == 0)
    {
        return msg;
    }
    if(mode == 1)
    {
        return msg.sprintf("Draw line from %s to ...", p1.toStdString());
    }
    if(mode == 2)
    {
        return msg.sprintf("Draw circle centered at %s and passing through ...", p1);
    }
}


// Start and Finish object at a point
QString createMessage(unsigned int mode, QPoint p1, QPoint p2)
{
    QString msg = "";

    if(mode == 0)
    {
        return msg;
    }
    if(mode == 1)
    {
        return msg.sprintf("Draw line from (%i, %i) to (%i, %i)", p1.x(), p1.y(), p2.x(), p2.y());
    }
    if(mode == 2)
    {
        return msg.sprintf("Draw circle centered at (%i, %i) and passing through (%i, %i)", p1.x(), p1.y(), p2.x(), p2.y());
    }
}

// Start object at point and finish at handle
QString createMessage(unsigned int mode, QPoint p1, QString p2)
{
    QString msg = "";

    if(mode == 0)
    {
        return msg;
    }
    if(mode == 1)
    {
        return msg.sprintf("Draw line from (%i, %i) to %s", p1.x(), p1.y(), p2.toStdString());
    }
    if(mode == 2)
    {
        return msg.sprintf("Draw circle centered at (%i, %i) and passing through %s", p1.x(), p1.y(), p2.toStdString());
    }
}

// Start and Finish object at handles
QString createMessage(unsigned int mode, QString p1, QString p2)
{
    QString msg = "";

    if(mode == 0)
    {
        return msg;
    }
    if(mode == 1)
    {
        return msg.sprintf("Draw line from %s to %s", p1.toStdString(), p2.toStdString());
    }
    if(mode == 2)
    {
        return msg.sprintf("Draw circle centered at (%i, %i) and passing through (%i, %i)", p1.toStdString(), p2.toStdString());
    }
}

// Start object at handle and finish at point
QString createMessage(unsigned int mode, QString p1, QPoint p2)
{
    QString msg = "";

    if(mode == 0)
    {
        return msg;
    }
    if(mode == 1)
    {
        return msg.sprintf("Draw line from %s to (%i, %i)", p1.toStdString(), p2.x(), p2.y());
    }
    if(mode == 2)
    {
        return msg.sprintf("Draw circle centered at %s and passing through (%i, %i)", p1.toStdString(), p2.x(), p2.y());
    }
}
