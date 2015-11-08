/****************************************************************************
** Meta object code from reading C++ file 'coincontroldialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/coincontroldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coincontroldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CoinControlDialog_t {
    QByteArrayData data[26];
    char stringdata[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CoinControlDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CoinControlDialog_t qt_meta_stringdata_CoinControlDialog = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 8),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 10),
QT_MOC_LITERAL(4, 39, 9),
QT_MOC_LITERAL(5, 49, 11),
QT_MOC_LITERAL(6, 61, 19),
QT_MOC_LITERAL(7, 81, 8),
QT_MOC_LITERAL(8, 90, 10),
QT_MOC_LITERAL(9, 101, 17),
QT_MOC_LITERAL(10, 119, 15),
QT_MOC_LITERAL(11, 135, 12),
QT_MOC_LITERAL(12, 148, 17),
QT_MOC_LITERAL(13, 166, 14),
QT_MOC_LITERAL(14, 181, 17),
QT_MOC_LITERAL(15, 199, 18),
QT_MOC_LITERAL(16, 218, 15),
QT_MOC_LITERAL(17, 234, 13),
QT_MOC_LITERAL(18, 248, 13),
QT_MOC_LITERAL(19, 262, 15),
QT_MOC_LITERAL(20, 278, 16),
QT_MOC_LITERAL(21, 295, 20),
QT_MOC_LITERAL(22, 316, 16),
QT_MOC_LITERAL(23, 333, 16),
QT_MOC_LITERAL(24, 350, 22),
QT_MOC_LITERAL(25, 373, 17)
    },
    "CoinControlDialog\0showMenu\0\0copyAmount\0"
    "copyLabel\0copyAddress\0copyTransactionHash\0"
    "lockCoin\0unlockCoin\0clipboardQuantity\0"
    "clipboardAmount\0clipboardFee\0"
    "clipboardAfterFee\0clipboardBytes\0"
    "clipboardPriority\0clipboardLowOutput\0"
    "clipboardChange\0radioTreeMode\0"
    "radioListMode\0viewItemChanged\0"
    "QTreeWidgetItem*\0headerSectionClicked\0"
    "buttonBoxClicked\0QAbstractButton*\0"
    "buttonSelectAllClicked\0updateLabelLocked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoinControlDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x08,
       3,    0,  127,    2, 0x08,
       4,    0,  128,    2, 0x08,
       5,    0,  129,    2, 0x08,
       6,    0,  130,    2, 0x08,
       7,    0,  131,    2, 0x08,
       8,    0,  132,    2, 0x08,
       9,    0,  133,    2, 0x08,
      10,    0,  134,    2, 0x08,
      11,    0,  135,    2, 0x08,
      12,    0,  136,    2, 0x08,
      13,    0,  137,    2, 0x08,
      14,    0,  138,    2, 0x08,
      15,    0,  139,    2, 0x08,
      16,    0,  140,    2, 0x08,
      17,    1,  141,    2, 0x08,
      18,    1,  144,    2, 0x08,
      19,    2,  147,    2, 0x08,
      21,    1,  152,    2, 0x08,
      22,    1,  155,    2, 0x08,
      24,    0,  158,    2, 0x08,
      25,    0,  159,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoinControlDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoinControlDialog *_t = static_cast<CoinControlDialog *>(_o);
        switch (_id) {
        case 0: _t->showMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->copyAmount(); break;
        case 2: _t->copyLabel(); break;
        case 3: _t->copyAddress(); break;
        case 4: _t->copyTransactionHash(); break;
        case 5: _t->lockCoin(); break;
        case 6: _t->unlockCoin(); break;
        case 7: _t->clipboardQuantity(); break;
        case 8: _t->clipboardAmount(); break;
        case 9: _t->clipboardFee(); break;
        case 10: _t->clipboardAfterFee(); break;
        case 11: _t->clipboardBytes(); break;
        case 12: _t->clipboardPriority(); break;
        case 13: _t->clipboardLowOutput(); break;
        case 14: _t->clipboardChange(); break;
        case 15: _t->radioTreeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->radioListMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->viewItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->headerSectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->buttonBoxClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 20: _t->buttonSelectAllClicked(); break;
        case 21: _t->updateLabelLocked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject CoinControlDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CoinControlDialog.data,
      qt_meta_data_CoinControlDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CoinControlDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoinControlDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoinControlDialog.stringdata))
        return static_cast<void*>(const_cast< CoinControlDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CoinControlDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
