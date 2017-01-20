#include "model.h"

Model::Model()
{
    modelObjects.push_back(new Canvas());

}
void Model::render(QPainter *painter, bool showHandles)
{
    for(int i=0; i < modelObjects.size(); i++)
    {
        mItems[i]->render(painter,showHandles);
    }
}
void Model::newObject(QPointF newBegin, QPointF newEnd, int newItem)
{    
    if(newItem == 1){
        modelObjects.push_back(new Cicrle(newBegin, newEnd));
    }
    else if(newItem == 2){
        modelObjects.push_back(new Line(newBegin, newEnd));
    }
}

bool Model::snap(QPoint& point, std::string& str)
{
    for(int i = 0; i < modelObjects.size(); ++i)
    {
        if(modelObjects[i]->snapper(point, str))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
