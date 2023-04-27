#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
//su dung QObjectList de tao doi tuong len QML
class myClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nameTeacher READ nameTeacher WRITE setNameTeacher NOTIFY nameTeacherChanged)
    Q_PROPERTY(QString nameClass READ nameClass WRITE setNameClass NOTIFY nameClassChanged)
    Q_PROPERTY(int numberStudent READ numberStudent WRITE setNumberStudent NOTIFY numberStudentChanged)
public:
    explicit myClass(QObject *parent = nullptr);
    myClass(QString newNameTeacher, QString mewNameClass, int newNUmberStudent);

    void setNameTeacher(const QString &newNameTeacher);
    void setNameClass(const QString &newNameClass);
    void setNumberStudent(int newNumberStudent);

    const QString &nameTeacher() const;
    const QString &nameClass() const;
    int numberStudent() const;
signals:
    void nameTeacherChanged();
    void nameClassChanged();
    void numberStudentChanged();
private:
    QString m_nameTeacher;
    QString m_nameClass;
    int m_numberStudent;
};

#endif // MYCLASS_H
