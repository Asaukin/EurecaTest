#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("KOI8-R"));
    /*Задание 1.25, длина строки
    QString str = "Васянчик";
    int len = strlen(str.toLocal8Bit().data());
    qWarning()<<str.size();
    qWarning()<<str.toLocal8Bit().toHex();
    qWarning()<<len;
    qWarning()<<str.toLocal8Bit().size();
    qWarning()<<sizeof(str.toLocal8Bit().data());
    */
    //Задание 1.1, форма
    MainWindow w;
    w.show();

    return a.exec();
}
