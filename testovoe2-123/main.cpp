#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <stdlib.h>
#include <unistd.h>
#include <cstdio>
#include <QDebug>
#include <iostream>
#include <first.h>
#include <second.h>

QFile file("Bigdata.txt");
QByteArray bigData;
QHash<int,QString> numbers;


//Задание 2.1, работа с большими данными
void createBigData(){
    if (file.open(QIODevice::Truncate|QIODevice::WriteOnly)){
        QTextStream stream(&file);
        for (int i=0;i<2500000;i++){
            stream<<QString::number(i)<<"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum"<<endl;
        }
        stream.flush();
        file.close();
    }
    return;
}

void readBigData(){
    if (file.open(QIODevice::ReadOnly)){
        QTextStream stream(&file);
        qWarning()<<"Reading big data";
        int i=0;
        while (!stream.atEnd()){
           bigData.append(stream.readLine());
           i++;
           if (i%1000==0){
               qWarning()<<"Handled "<<QString::number(i)<<" string";
           }
        }
        qWarning()<<"Finished";
        file.close();
    } else {
        qWarning()<<"File doesnot exist";
        return;
    }
    qWarning()<<"please, check the memory using and come back later";
    qWarning()<<"waiting for char input";
    std::cin.get();
    qWarning()<<"creating copies";
    QList<QByteArray> bigDataList;
    for (int i=0;i<100;i++){
        QByteArray bigDataCopy = bigData;
        bigDataList.append(bigDataCopy);
    }
    qWarning()<<"copies created";
    qWarning()<<"please, check the memory using and come back later";
    qWarning()<<"waiting for char input";
    std::cin.get();
    return;
}

//Задание 2.2, работа с неймспейсами
void workingWithNamespaces(){
    users::Info usrInfo;
    files::Info fileInfo;

    /*
     * Some stuff
     */

    return;
}

//Задание 2.3, печать номера
void printInt(int number){
    if(numbers.value(number)==""){
       qWarning()<<"It's wrong number";
    }else {
       qWarning()<<numbers.value(number);
    }
    return;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    /*
    //Задание 2.1, большие данные
    createBigData();
    readBigData();
    */

    /*
    //Задание 2.3, печать номера
    numbers.insert(0,"0 - ноль");
    numbers.insert(1,"1 - один");
    numbers.insert(2,"2 - два");
    qWarning()<<"Please, write a number of 0,1 or 2";
    int input;
    std::cin >> input;
    printInt(input);
    */


    return 0;
}
