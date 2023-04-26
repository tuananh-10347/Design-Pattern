#include <QCoreApplication>
#include "myclass.h"
#include "QDebug"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    myClass obj1,obj2;

    //1 signal and 1 slot
    /*QObject::connect(&obj1, &myClass::signal_1, &obj2, &myClass::slot_1); //string based
    QObject::connect(&obj1, SIGNAL(signal_1()),&obj2, SLOT(slot_1())); //functor based

    QObject::connect(&obj1, &myClass::signal_1, []() //lambda expression
    {
        qDebug() << "Connected successed!";
    });*/

    //1 signal and 2 slot
    //QObject::connect(&obj1, &myClass::signal_1, &obj2, &myClass::slot_1); //string based
    //QObject::connect(&obj1, &myClass::signal_1, &obj2, &myClass::slot_2);

    //2 signal and 1 slot
    //QObject::connect(&obj1, &myClass::signal_1, &obj2, &myClass::slot_1); //string based
    //QObject::connect(&obj1, &myClass::signal_2, &obj2, &myClass::slot_1);

    //1 signal 1 slot co 2 tham so
    //QObject::connect(&obj1, &myClass::signal_3, &obj2, &myClass::slot_3); //string based, khong can quan tam toi so luong tham so
    //QObject::connect(&obj1, SIGNAL(signal_3(int, int)),&obj2, SLOT(slot_3(int, int))); //functor based

    //1 signal 1 tham so and 1 slot co 2 tham so
    //QObject::connect(&obj1, &myClass::signal_4, &obj2, &myClass::slot_3);
    QObject::connect(&obj1, SIGNAL(signal_4(int)),&obj2, SLOT(slot_3(int, int))); //functor based
    emit obj1.signal_4(30);
    return a.exec();
}
