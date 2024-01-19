#include <QCoreApplication>
#include <myclass.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString value;
    qWarning()<<"begin";
    MyClass class1; //class()
    qWarning()<<"1";
    class1 = value; //class(QString)
    qWarning()<<"2";
    MyClass class2(class1); //Copy
    qWarning()<<"3";
    MyClass class3 = class1; //Copy
    qWarning()<<"4";
    MyClass class4 = value; //class(QString)
    qWarning()<<"5";
    class4 = class3; //Copy
    qWarning()<<"6";
    MyClass class5(value); //class(QString)
    qWarning()<<"end";
    return 0;
}
