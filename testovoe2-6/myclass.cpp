#include "myclass.h"

MyClass::MyClass()
{
    qWarning()<<"MyClass";
}

MyClass::MyClass(QString)
{
    qWarning()<<"MyQString";
}

MyClass::~MyClass()
{

}
