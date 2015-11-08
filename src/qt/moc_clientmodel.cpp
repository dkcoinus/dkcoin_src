/****************************************************************************
** Meta object code from reading C++ file 'clientmodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/clientmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientModel_t {
    QByteArrayData data[22];
    char stringdata[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ClientModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ClientModel_t qt_meta_stringdata_ClientModel = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 21),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 5),
QT_MOC_LITERAL(4, 41, 16),
QT_MOC_LITERAL(5, 58, 9),
QT_MOC_LITERAL(6, 68, 13),
QT_MOC_LITERAL(7, 82, 8),
QT_MOC_LITERAL(8, 91, 12),
QT_MOC_LITERAL(9, 104, 12),
QT_MOC_LITERAL(10, 117, 13),
QT_MOC_LITERAL(11, 131, 7),
QT_MOC_LITERAL(12, 139, 5),
QT_MOC_LITERAL(13, 145, 5),
QT_MOC_LITERAL(14, 151, 12),
QT_MOC_LITERAL(15, 164, 9),
QT_MOC_LITERAL(16, 174, 11),
QT_MOC_LITERAL(17, 186, 20),
QT_MOC_LITERAL(18, 207, 14),
QT_MOC_LITERAL(19, 222, 11),
QT_MOC_LITERAL(20, 234, 4),
QT_MOC_LITERAL(21, 239, 6)
    },
    "ClientModel\0numConnectionsChanged\0\0"
    "count\0numBlocksChanged\0blockDate\0"
    "alertsChanged\0warnings\0bytesChanged\0"
    "totalBytesIn\0totalBytesOut\0message\0"
    "title\0style\0showProgress\0nProgress\0"
    "updateTimer\0updateNumConnections\0"
    "numConnections\0updateAlert\0hash\0status\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    2,   62,    2, 0x06,
       6,    1,   67,    2, 0x06,
       8,    2,   70,    2, 0x06,
      11,    3,   75,    2, 0x06,
      14,    2,   82,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      16,    0,   87,    2, 0x0a,
      17,    1,   88,    2, 0x0a,
      19,    2,   91,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   12,   11,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   20,   21,

       0        // eod
};

void ClientModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientModel *_t = static_cast<ClientModel *>(_o);
        switch (_id) {
        case 0: _t->numConnectionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->numBlocksChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 2: _t->alertsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->bytesChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 4: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateTimer(); break;
        case 7: _t->updateNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateAlert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::numConnectionsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ClientModel::*_t)(int , const QDateTime & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::numBlocksChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::alertsChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (ClientModel::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::bytesChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::message)) {
                *result = 4;
            }
        }
        {
            typedef void (ClientModel::*_t)(const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientModel::showProgress)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject ClientModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientModel.data,
      qt_meta_data_ClientModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *ClientModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientModel.stringdata))
        return static_cast<void*>(const_cast< ClientModel*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ClientModel::numConnectionsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientModel::numBlocksChanged(int _t1, const QDateTime & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientModel::alertsChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientModel::bytesChanged(quint64 _t1, quint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ClientModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ClientModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
