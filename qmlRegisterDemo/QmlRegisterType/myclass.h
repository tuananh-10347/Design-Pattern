#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class myClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nameClass READ nameClass WRITE setNameClassnameClass)
    Q_PROPERTY(QString teacher READ teacher WRITE setTeacher)
    Q_PROPERTY(int numberStudent READ numberStudent WRITE setNumberStudent )
public:
    explicit myClass(QObject *parent = nullptr);

    const QString &nameClass() const;
    const QString &teacher() const;
    int numberStudent() const;

    void setNameClassnameClass(const QString &newNameClass);
    void setTeacher(const QString &newTeacher);
    void setNumberStudent(int newNumberStudent);
private:
    QString m_nameClass;
    QString m_teacher;
    int m_numberStudent;
};

#endif // MYCLASS_H
