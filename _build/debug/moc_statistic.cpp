/****************************************************************************
** Meta object code from reading C++ file 'statistic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statistic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statistic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_statistic_t {
    QByteArrayData data[14];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statistic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statistic_t qt_meta_stringdata_statistic = {
    {
QT_MOC_LITERAL(0, 0, 9), // "statistic"
QT_MOC_LITERAL(1, 10, 8), // "finished"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "stat_finish"
QT_MOC_LITERAL(4, 32, 5), // "state"
QT_MOC_LITERAL(5, 38, 5), // "error"
QT_MOC_LITERAL(6, 44, 3), // "err"
QT_MOC_LITERAL(7, 48, 11), // "return_size"
QT_MOC_LITERAL(8, 60, 22), // "QPair<quint32,quint64>"
QT_MOC_LITERAL(9, 83, 10), // "Count_Size"
QT_MOC_LITERAL(10, 94, 7), // "process"
QT_MOC_LITERAL(11, 102, 8), // "dir_name"
QT_MOC_LITERAL(12, 111, 16), // "QVector<suffix>*"
QT_MOC_LITERAL(13, 128, 3) // "vec"

    },
    "statistic\0finished\0\0stat_finish\0state\0"
    "error\0err\0return_size\0QPair<quint32,quint64>\0"
    "Count_Size\0process\0dir_name\0"
    "QVector<suffix>*\0vec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statistic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,
       7,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,   11,   13,

       0        // eod
};

void statistic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        statistic *_t = static_cast<statistic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->stat_finish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->return_size((*reinterpret_cast< const QPair<quint32,quint64>(*)>(_a[1]))); break;
        case 4: _t->process((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVector<suffix>*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (statistic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&statistic::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (statistic::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&statistic::stat_finish)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (statistic::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&statistic::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (statistic::*_t)(const QPair<quint32,quint64> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&statistic::return_size)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject statistic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_statistic.data,
      qt_meta_data_statistic,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *statistic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statistic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_statistic.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int statistic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void statistic::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void statistic::stat_finish(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void statistic::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void statistic::return_size(const QPair<quint32,quint64> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
