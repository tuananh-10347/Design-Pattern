#ifndef MYSTUDENT_H
#define MYSTUDENT_H

#include <QAbstractListModel>
#include <QStringList>


class myStudent
{
public:
    myStudent(const QString &name, const QString classStudent, const double &GPA);

    QString name() const;
    QString classStudent() const;
    double GPA() const;
private:
    QString m_name;
    QString m_classStudent;
    double m_GPA;

};

class myStudentModel: public QAbstractListModel{
    Q_OBJECT
public:
    enum myStudentRole{
        NameRole = Qt::UserRole + 1,
        ClassStudentRole,
        GPARole
    };
    myStudentModel(QObject *parent =nullptr);
    void addStudent(const myStudent &student);

    //override rowCount() and data()
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
protected:
    //override roleNames()
    QHash<int, QByteArray> roleNames() const override;
private:
    QList<myStudent> m_myStudent;
};

#endif // MYSTUDENT_H
