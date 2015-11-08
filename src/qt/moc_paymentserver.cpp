/****************************************************************************
** Meta object code from reading C++ file 'paymentserver.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/paymentserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paymentserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaymentServer_t {
    QByteArrayData data[23];
    char stringdata[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PaymentServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PaymentServer_t qt_meta_stringdata_PaymentServer = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 22),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 18),
QT_MOC_LITERAL(4, 57, 18),
QT_MOC_LITERAL(5, 76, 13),
QT_MOC_LITERAL(6, 90, 7),
QT_MOC_LITERAL(7, 98, 5),
QT_MOC_LITERAL(8, 104, 5),
QT_MOC_LITERAL(9, 110, 7),
QT_MOC_LITERAL(10, 118, 15),
QT_MOC_LITERAL(11, 134, 8),
QT_MOC_LITERAL(12, 143, 6),
QT_MOC_LITERAL(13, 150, 9),
QT_MOC_LITERAL(14, 160, 11),
QT_MOC_LITERAL(15, 172, 15),
QT_MOC_LITERAL(16, 188, 1),
QT_MOC_LITERAL(17, 190, 19),
QT_MOC_LITERAL(18, 210, 18),
QT_MOC_LITERAL(19, 229, 14),
QT_MOC_LITERAL(20, 244, 15),
QT_MOC_LITERAL(21, 260, 16),
QT_MOC_LITERAL(22, 277, 16)
    },
    "PaymentServer\0receivedPaymentRequest\0"
    "\0SendCoinsRecipient\0receivedPaymentACK\0"
    "paymentACKMsg\0message\0title\0style\0"
    "uiReady\0fetchPaymentACK\0CWallet*\0"
    "wallet\0recipient\0transaction\0"
    "handleURIOrFile\0s\0handleURIConnection\0"
    "netRequestFinished\0QNetworkReply*\0"
    "reportSslErrors\0QList<QSslError>\0"
    "handlePaymentACK\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaymentServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06,
       4,    1,   67,    2, 0x06,
       6,    3,   70,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   77,    2, 0x0a,
      10,    3,   78,    2, 0x0a,
      15,    1,   85,    2, 0x0a,
      17,    0,   88,    2, 0x08,
      18,    1,   89,    2, 0x08,
      20,    2,   92,    2, 0x08,
      22,    1,   97,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    7,    6,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 3, QMetaType::QByteArray,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21,    2,    2,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void PaymentServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaymentServer *_t = static_cast<PaymentServer *>(_o);
        switch (_id) {
        case 0: _t->receivedPaymentRequest((*reinterpret_cast< SendCoinsRecipient(*)>(_a[1]))); break;
        case 1: _t->receivedPaymentACK((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 3: _t->uiReady(); break;
        case 4: _t->fetchPaymentACK((*reinterpret_cast< CWallet*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->handleURIOrFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->handleURIConnection(); break;
        case 7: _t->netRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->reportSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 9: _t->handlePaymentACK((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PaymentServer::*_t)(SendCoinsRecipient );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaymentServer::receivedPaymentRequest)) {
                *result = 0;
            }
        }
        {
            typedef void (PaymentServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaymentServer::receivedPaymentACK)) {
                *result = 1;
            }
        }
        {
            typedef void (PaymentServer::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaymentServer::message)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject PaymentServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PaymentServer.data,
      qt_meta_data_PaymentServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *PaymentServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaymentServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaymentServer.stringdata))
        return static_cast<void*>(const_cast< PaymentServer*>(this));
    return QObject::qt_metacast(_clname);
}

int PaymentServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PaymentServer::receivedPaymentRequest(SendCoinsRecipient _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PaymentServer::receivedPaymentACK(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PaymentServer::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
