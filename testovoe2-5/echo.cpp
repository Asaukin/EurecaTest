#include "echo.h"

Echo::Echo(QString str)
{
    qWarning()<<__func__<<__LINE__<<str;
}

Echo::Echo(QByteArray ba)
{
    qWarning()<<__func__<<__LINE__<<ba;
}

Echo::Echo(const char * chr)
{
    qWarning()<<__func__<<__LINE__<<chr;
}

Echo::~Echo(){}
