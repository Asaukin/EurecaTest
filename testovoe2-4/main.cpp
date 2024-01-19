#include <QCoreApplication>
#include <container.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<Container> list;
    Container c = Container(100);
    for (int i=0;i<100;i++){
        list.append(c);
    }
    return 0;
}
