/****************************************************************************
** Meta object code from reading C++ file 'walletframe.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/walletframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletFrame_t {
    QByteArrayData data[16];
    char stringdata[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WalletFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WalletFrame_t qt_meta_stringdata_WalletFrame = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 16),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 15),
QT_MOC_LITERAL(4, 46, 20),
QT_MOC_LITERAL(5, 67, 17),
QT_MOC_LITERAL(6, 85, 4),
QT_MOC_LITERAL(7, 90, 18),
QT_MOC_LITERAL(8, 109, 20),
QT_MOC_LITERAL(9, 130, 13),
QT_MOC_LITERAL(10, 144, 6),
QT_MOC_LITERAL(11, 151, 12),
QT_MOC_LITERAL(12, 164, 16),
QT_MOC_LITERAL(13, 181, 12),
QT_MOC_LITERAL(14, 194, 20),
QT_MOC_LITERAL(15, 215, 22)
    },
    "WalletFrame\0gotoOverviewPage\0\0"
    "gotoHistoryPage\0gotoReceiveCoinsPage\0"
    "gotoSendCoinsPage\0addr\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0encryptWallet\0"
    "status\0backupWallet\0changePassphrase\0"
    "unlockWallet\0usedSendingAddresses\0"
    "usedReceivingAddresses\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a,
       3,    0,   90,    2, 0x0a,
       4,    0,   91,    2, 0x0a,
       5,    1,   92,    2, 0x0a,
       5,    0,   95,    2, 0x2a,
       7,    1,   96,    2, 0x0a,
       7,    0,   99,    2, 0x2a,
       8,    1,  100,    2, 0x0a,
       8,    0,  103,    2, 0x2a,
       9,    1,  104,    2, 0x0a,
      11,    0,  107,    2, 0x0a,
      12,    0,  108,    2, 0x0a,
      13,    0,  109,    2, 0x0a,
      14,    0,  110,    2, 0x0a,
      15,    0,  111,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletFrame *_t = static_cast<WalletFrame *>(_o);
        switch (_id) {
        case 0: _t->gotoOverviewPage(); break;
        case 1: _t->gotoHistoryPage(); break;
        case 2: _t->gotoReceiveCoinsPage(); break;
        case 3: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->gotoSendCoinsPage(); break;
        case 5: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoSignMessageTab(); break;
        case 7: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->gotoVerifyMessageTab(); break;
        case 9: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->backupWallet(); break;
        case 11: _t->changePassphrase(); break;
        case 12: _t->unlockWallet(); break;
        case 13: _t->usedSendingAddresses(); break;
        case 14: _t->usedReceivingAddresses(); break;
        default: ;
        }
    }
}

const QMetaObject WalletFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletFrame.data,
      qt_meta_data_WalletFrame,  qt_static_metacall, 0, 0}
};


const QMetaObject *WalletFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletFrame.stringdata))
        return static_cast<void*>(const_cast< WalletFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
