#include "myclass.h"

myClass::myClass(QObject *parent)
    : QObject{parent}, m_nameTeacher(""), m_nameClass(""), m_numberStudent(0)
{

}

myClass::myClass(QString newNameTeacher, QString mewNameClass, int newNUmberStudent)
    : m_nameTeacher(newNameTeacher), m_nameClass(mewNameClass), m_numberStudent(newNUmberStudent)
{

}

const QString &myClass::nameTeacher() const
{
    return m_nameTeacher;
}

void myClass::setNameTeacher(const QString &newNameTecher)
{
    if (m_nameTeacher == newNameTecher)
        return;
    m_nameTeacher = newNameTecher;
    emit nameTeacherChanged();
}

const QString &myClass::nameClass() const
{
    return m_nameClass;
}

void myClass::setNameClass(const QString &newNameClass)
{
    if (m_nameClass == newNameClass)
        return;
    m_nameClass = newNameClass;
    emit nameClassChanged();
}

int myClass::numberStudent() const
{
    return m_numberStudent;
}

void myClass::setNumberStudent(int newNumberStudent)
{
    if (m_numberStudent == newNumberStudent)
        return;
    m_numberStudent = newNumberStudent;
    emit numberStudentChanged();
}
