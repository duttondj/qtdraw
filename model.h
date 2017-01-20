#ifndef MODEL_H
#define MODEL_H

#include <QAbstractTableModel>
#include <vector>
#include "canvas.h"
#include "circle.h"
#include "line.h"

class Model : public Object
{

public:
    Model();
    void render(QPainter* painter, bool showHandles);
    void newObject(QPoint newBegin, QPoint newEnd, int item);
    bool snap(QPoint& point, std::string &str);
private:
    std::vector<Object*> modelObjects;
};

#endif // MODEL_H
