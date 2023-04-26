#include "myclass.h"

myClass::myClass(QObject *parent)
    : QObject{parent}
{

}

const QString &myClass::nameClass() const
{
    return m_nameClass;
}

void myClass::setNameClassnameClass(const QString &newNameClass)
{
    m_nameClass = newNameClass;
}

const QString &myClass::teacher() const
{
    return m_teacher;
}

void myClass::setTeacher(const QString &newTeacher)
{
    m_teacher = newTeacher;
}

int myClass::numberStudent() const
{
    return m_numberStudent;
}

void myClass::setNumberStudent(int newNumberStudent)
{
    m_numberStudent = newNumberStudent;
}
