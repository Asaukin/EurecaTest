#ifndef ECHO_H
#define ECHO_H
#include <QString>
#include <QByteArray>
#include <QDebug>
#include <stdlib.h>

class Echo
{
public:
    explicit Echo(const QString str);
    explicit Echo(QByteArray ba);
    explicit Echo(const char* chr);
    ~Echo();
};

#endif // ECHO_H
