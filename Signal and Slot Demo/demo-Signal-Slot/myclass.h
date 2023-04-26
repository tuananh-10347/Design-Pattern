#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class myClass : public QObject
{
    Q_OBJECT
public:
    explicit myClass(QObject *parent = nullptr);

signals:
    void signal_1();
    void signal_2();
    void signal_3(const int &a, const int &b);
    void signal_4(const int &a);
public slots:
    void slot_1();
    void slot_2();
    void slot_3(const int &a, const int &b);
    void slot_4(const int &a);

};

#endif // MYCLASS_H
