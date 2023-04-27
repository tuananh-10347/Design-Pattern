#include "mystudent.h"

myStudent::myStudent(const QString &name, const QString classStudent, const double &GPA)
    : m_name(name), m_classStudent(classStudent), m_GPA(GPA)
{

}

QString myStudent::name() const
{
    return m_name;
}

QString myStudent::classStudent() const
{
    return m_classStudent;
}

double myStudent::GPA() const
{
    return m_GPA;
}

myStudentModel::myStudentModel(QObject *parent)
    : QAbstractListModel(parent)
{

}

void myStudentModel::addStudent(const myStudent &student)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_myStudent<<student;
    endInsertRows();
}

int myStudentModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_myStudent.count();

}

QVariant myStudentModel::data(const QModelIndex &index, int role) const
{
    if(index.row()<0 ||index.row()>m_myStudent.count())
        return QVariant();
    const myStudent &myStudent = m_myStudent[index.row()];
    if(role == NameRole)
        return myStudent.name();
    else if(role == ClassStudentRole)
        return myStudent.classStudent();
    else if(role == GPARole)
        return myStudent.GPA();
    return QVariant();
}

QHash<int, QByteArray> myStudentModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[ClassStudentRole] = "class";
    roles[GPARole] = "GPA";
    return roles;
}
