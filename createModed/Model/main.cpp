#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "myclass.h"
#include "mystudent.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;





    //model with QStringList
    QStringList listStudent;
    listStudent.append("HS 1");
    listStudent.append("HS 2");
    listStudent.append("HS 3");
    listStudent.append("HS 4");
    engine.rootContext()->setContextProperty("myListStudent", QVariant::fromValue(listStudent));

    //model with QObjectList
    QList<QObject*> myListClass;
    myListClass.append(new myClass("Hung","12A1", 33));
    myListClass.append(new myClass("Giang","12A2", 34));
    myListClass.append(new myClass("Nhat","12A3", 30));
    myListClass.append(new myClass("Dang","12A4", 29));
    engine.rootContext()->setContextProperty("myListClass", QVariant::fromValue(myListClass));

    //model with QAbstractListModel
    myStudentModel student;
    student.addStudent(myStudent("Tran Ngo Anh Tuan", "12A2", 8.5));
    student.addStudent(myStudent("Nguyen Van B", "12B2", 9.5));
    student.addStudent(myStudent("TRan Van C", "11B12", 10));
    student.addStudent(myStudent("Le Thi D", "10C5", 7.36));
    student.addStudent(myStudent("Le Quoc E", "12C8", 8.9));
    engine.rootContext()->setContextProperty("myStudent", &student);


    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
