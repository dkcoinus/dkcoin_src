/****************************************************************************
** Meta object code from reading C++ file 'intro.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/intro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Intro_t {
    QByteArrayData data[13];
    char stringdata[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Intro_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Intro_t qt_meta_stringdata_Intro = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 12),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 10),
QT_MOC_LITERAL(4, 31, 9),
QT_MOC_LITERAL(5, 41, 6),
QT_MOC_LITERAL(6, 48, 7),
QT_MOC_LITERAL(7, 56, 14),
QT_MOC_LITERAL(8, 71, 28),
QT_MOC_LITERAL(9, 100, 4),
QT_MOC_LITERAL(10, 105, 25),
QT_MOC_LITERAL(11, 131, 25),
QT_MOC_LITERAL(12, 157, 24)
    },
    "Intro\0requestCheck\0\0stopThread\0setStatus\0"
    "status\0message\0bytesAvailable\0"
    "on_dataDirectory_textChanged\0arg1\0"
    "on_ellipsisButton_clicked\0"
    "on_dataDirDefault_clicked\0"
    "on_dataDirCustom_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Intro[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,
       3,    0,   50,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    3,   51,    2, 0x0a,
       8,    1,   58,    2, 0x08,
      10,    0,   61,    2, 0x08,
      11,    0,   62,    2, 0x08,
      12,    0,   63,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::ULongLong,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Intro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Intro *_t = static_cast<Intro *>(_o);
        switch (_id) {
        case 0: _t->requestCheck(); break;
        case 1: _t->stopThread(); break;
        case 2: _t->setStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 3: _t->on_dataDirectory_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_ellipsisButton_clicked(); break;
        case 5: _t->on_dataDirDefault_clicked(); break;
        case 6: _t->on_dataDirCustom_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Intro::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Intro::requestCheck)) {
                *result = 0;
            }
        }
        {
            typedef void (Intro::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Intro::stopThread)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Intro::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Intro.data,
      qt_meta_data_Intro,  qt_static_metacall, 0, 0}
};


const QMetaObject *Intro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Intro::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Intro.stringdata))
        return static_cast<void*>(const_cast< Intro*>(this));
    return QDialog::qt_metacast(_clname);
}

int Intro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Intro::requestCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Intro::stopThread()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
