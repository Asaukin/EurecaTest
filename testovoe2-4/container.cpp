#include "container.h"
#include <QDebug>

Container::Container(int n)
{
    arr = new QVector<double>;
    length=n;
    arr->resize(length);
}

double Container::get(int i)
{
    return arr->at(i);
}

void Container::set(int i, double j)
{
    if (i>length or i<0){
        qWarning()<<"index out of range";
    }else{
        arr->replace(i,j);
    }
}

Container::~Container()
{
    delete arr;
}
