/****************************************************************************
** Meta object code from reading C++ file 'receivecoinsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/receivecoinsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receivecoinsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReceiveCoinsDialog_t {
    QByteArrayData data[20];
    char stringdata[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ReceiveCoinsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ReceiveCoinsDialog_t qt_meta_stringdata_ReceiveCoinsDialog = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 5),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 6),
QT_MOC_LITERAL(5, 40, 24),
QT_MOC_LITERAL(6, 65, 28),
QT_MOC_LITERAL(7, 94, 30),
QT_MOC_LITERAL(8, 125, 35),
QT_MOC_LITERAL(9, 161, 5),
QT_MOC_LITERAL(10, 167, 35),
QT_MOC_LITERAL(11, 203, 14),
QT_MOC_LITERAL(12, 218, 8),
QT_MOC_LITERAL(13, 227, 10),
QT_MOC_LITERAL(14, 238, 17),
QT_MOC_LITERAL(15, 256, 8),
QT_MOC_LITERAL(16, 265, 5),
QT_MOC_LITERAL(17, 271, 9),
QT_MOC_LITERAL(18, 281, 11),
QT_MOC_LITERAL(19, 293, 10)
    },
    "ReceiveCoinsDialog\0clear\0\0reject\0"
    "accept\0on_receiveButton_clicked\0"
    "on_showRequestButton_clicked\0"
    "on_removeRequestButton_clicked\0"
    "on_recentRequestsView_doubleClicked\0"
    "index\0recentRequestsView_selectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "updateDisplayUnit\0showMenu\0point\0"
    "copyLabel\0copyMessage\0copyAmount\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiveCoinsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a,
       3,    0,   80,    2, 0x0a,
       4,    0,   81,    2, 0x0a,
       5,    0,   82,    2, 0x08,
       6,    0,   83,    2, 0x08,
       7,    0,   84,    2, 0x08,
       8,    1,   85,    2, 0x08,
      10,    2,   88,    2, 0x08,
      14,    0,   93,    2, 0x08,
      15,    1,   94,    2, 0x08,
      17,    0,   97,    2, 0x08,
      18,    0,   98,    2, 0x08,
      19,    0,   99,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReceiveCoinsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReceiveCoinsDialog *_t = static_cast<ReceiveCoinsDialog *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->reject(); break;
        case 2: _t->accept(); break;
        case 3: _t->on_receiveButton_clicked(); break;
        case 4: _t->on_showRequestButton_clicked(); break;
        case 5: _t->on_removeRequestButton_clicked(); break;
        case 6: _t->on_recentRequestsView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->recentRequestsView_selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 8: _t->updateDisplayUnit(); break;
        case 9: _t->showMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->copyLabel(); break;
        case 11: _t->copyMessage(); break;
        case 12: _t->copyAmount(); break;
        default: ;
        }
    }
}

const QMetaObject ReceiveCoinsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ReceiveCoinsDialog.data,
      qt_meta_data_ReceiveCoinsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ReceiveCoinsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiveCoinsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveCoinsDialog.stringdata))
        return static_cast<void*>(const_cast< ReceiveCoinsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ReceiveCoinsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
