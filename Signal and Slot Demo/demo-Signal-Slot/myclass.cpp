#include "myclass.h"
#include "QDebug"

myClass::myClass(QObject *parent)
    : QObject{parent}
{

}

void myClass::slot_1()
{
    qDebug()<<"My slot 1 called";
}

void myClass::slot_2()
{
    qDebug()<<"My slot 2 called";
}

void myClass::slot_3(const int &a, const int &b)
{
    qDebug()<<"My slot 3 called with a = "<< a <<" b = "<<b;
}

void myClass::slot_4(const int &a)
{
    qDebug()<<"My slot 3 called with a = "<< a;
}
