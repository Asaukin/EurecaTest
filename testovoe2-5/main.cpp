#include <QCoreApplication>
#include <echo.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Echo(static_cast<QByteArray>("test"));
    return 0;
}
