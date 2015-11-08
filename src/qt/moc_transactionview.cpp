/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/transactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransactionView_t {
    QByteArrayData data[28];
    char stringdata[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TransactionView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TransactionView_t qt_meta_stringdata_TransactionView = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 13),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 7),
QT_MOC_LITERAL(4, 39, 5),
QT_MOC_LITERAL(5, 45, 5),
QT_MOC_LITERAL(6, 51, 14),
QT_MOC_LITERAL(7, 66, 16),
QT_MOC_LITERAL(8, 83, 11),
QT_MOC_LITERAL(9, 95, 11),
QT_MOC_LITERAL(10, 107, 9),
QT_MOC_LITERAL(11, 117, 9),
QT_MOC_LITERAL(12, 127, 10),
QT_MOC_LITERAL(13, 138, 8),
QT_MOC_LITERAL(14, 147, 19),
QT_MOC_LITERAL(15, 167, 3),
QT_MOC_LITERAL(16, 171, 21),
QT_MOC_LITERAL(17, 193, 14),
QT_MOC_LITERAL(18, 208, 10),
QT_MOC_LITERAL(19, 219, 3),
QT_MOC_LITERAL(20, 223, 10),
QT_MOC_LITERAL(21, 234, 15),
QT_MOC_LITERAL(22, 250, 13),
QT_MOC_LITERAL(23, 264, 6),
QT_MOC_LITERAL(24, 271, 13),
QT_MOC_LITERAL(25, 285, 6),
QT_MOC_LITERAL(26, 292, 13),
QT_MOC_LITERAL(27, 306, 16)
    },
    "TransactionView\0doubleClicked\0\0message\0"
    "title\0style\0contextualMenu\0dateRangeChanged\0"
    "showDetails\0copyAddress\0editLabel\0"
    "copyLabel\0copyAmount\0copyTxID\0"
    "openThirdPartyTxUrl\0url\0updateWatchOnlyColumn\0"
    "fHaveWatchOnly\0chooseDate\0idx\0chooseType\0"
    "chooseWatchonly\0changedPrefix\0prefix\0"
    "changedAmount\0amount\0exportClicked\0"
    "focusTransaction\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06,
       3,    3,  112,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,  119,    2, 0x08,
       7,    0,  122,    2, 0x08,
       8,    0,  123,    2, 0x08,
       9,    0,  124,    2, 0x08,
      10,    0,  125,    2, 0x08,
      11,    0,  126,    2, 0x08,
      12,    0,  127,    2, 0x08,
      13,    0,  128,    2, 0x08,
      14,    1,  129,    2, 0x08,
      16,    1,  132,    2, 0x08,
      18,    1,  135,    2, 0x0a,
      20,    1,  138,    2, 0x0a,
      21,    1,  141,    2, 0x0a,
      22,    1,  144,    2, 0x0a,
      24,    1,  147,    2, 0x0a,
      26,    0,  150,    2, 0x0a,
      27,    1,  151,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionView *_t = static_cast<TransactionView *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->dateRangeChanged(); break;
        case 4: _t->showDetails(); break;
        case 5: _t->copyAddress(); break;
        case 6: _t->editLabel(); break;
        case 7: _t->copyLabel(); break;
        case 8: _t->copyAmount(); break;
        case 9: _t->copyTxID(); break;
        case 10: _t->openThirdPartyTxUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->updateWatchOnlyColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->chooseWatchonly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->changedAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->exportClicked(); break;
        case 18: _t->focusTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TransactionView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::doubleClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (TransactionView::*_t)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TransactionView::message)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TransactionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransactionView.data,
      qt_meta_data_TransactionView,  qt_static_metacall, 0, 0}
};


const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionView.stringdata))
        return static_cast<void*>(const_cast< TransactionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
