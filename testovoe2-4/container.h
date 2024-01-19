#ifndef CONTAINER_H
#define CONTAINER_H
#include <QVector>

class Container
{
public:
    Container(int n);
    ~Container();
    double get(int);
    void set(int,double);
private:
    QVector<double> *arr;
    int length;
};

#endif // CONTAINER_H
