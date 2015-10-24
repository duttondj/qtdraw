// Danny Dutton
// Project 2: QtDraw

#include "menu.h"

QString toggleLabel(QString str, bool isBold)
{
    // If QString has HTML tags or if 'isBold' is true, then its probably bolded
    if(str.startsWith("<html>") or isBold)
    {
        return str.remove("<html><head/><body><p><span style=\" font-weight:600;\">").remove("</span></p></body></html>");
    }
    // If no tags, then probably not bolded
    else
    {
        return str.prepend("<html><head/><body><p><span style=\" font-weight:600;\">").append("</span></p></body></html>");
    }
}

//QString unboldLabel(QString str)
//{
//    return str.remove("<html><head/><body><p><span style=\" font-weight:600;\">").remove("</span></p></body></html>");
//}
