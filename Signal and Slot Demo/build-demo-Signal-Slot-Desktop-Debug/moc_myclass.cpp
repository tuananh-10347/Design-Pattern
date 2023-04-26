/****************************************************************************
** Meta object code from reading C++ file 'myclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../demo-Signal-Slot/myclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myClass_t {
    QByteArrayData data[12];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myClass_t qt_meta_stringdata_myClass = {
    {
QT_MOC_LITERAL(0, 0, 7), // "myClass"
QT_MOC_LITERAL(1, 8, 8), // "signal_1"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "signal_2"
QT_MOC_LITERAL(4, 27, 8), // "signal_3"
QT_MOC_LITERAL(5, 36, 1), // "a"
QT_MOC_LITERAL(6, 38, 1), // "b"
QT_MOC_LITERAL(7, 40, 8), // "signal_4"
QT_MOC_LITERAL(8, 49, 6), // "slot_1"
QT_MOC_LITERAL(9, 56, 6), // "slot_2"
QT_MOC_LITERAL(10, 63, 6), // "slot_3"
QT_MOC_LITERAL(11, 70, 6) // "slot_4"

    },
    "myClass\0signal_1\0\0signal_2\0signal_3\0"
    "a\0b\0signal_4\0slot_1\0slot_2\0slot_3\0"
    "slot_4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myClass[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    2,   56,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   64,    2, 0x0a /* Public */,
       9,    0,   65,    2, 0x0a /* Public */,
      10,    2,   66,    2, 0x0a /* Public */,
      11,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void myClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myClass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_1(); break;
        case 1: _t->signal_2(); break;
        case 2: _t->signal_3((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->signal_4((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->slot_1(); break;
        case 5: _t->slot_2(); break;
        case 6: _t->slot_3((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->slot_4((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myClass::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myClass::signal_1)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (myClass::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myClass::signal_2)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (myClass::*)(const int & , const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myClass::signal_3)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (myClass::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myClass::signal_4)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myClass.data,
    qt_meta_data_myClass,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void myClass::signal_1()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void myClass::signal_2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void myClass::signal_3(const int & _t1, const int & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void myClass::signal_4(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
