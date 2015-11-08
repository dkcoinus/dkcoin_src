/****************************************************************************
** Meta object code from reading C++ file 'receiverequestdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/receiverequestdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiverequestdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QRImageWidget_t {
    QByteArrayData data[4];
    char stringdata[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QRImageWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QRImageWidget_t qt_meta_stringdata_QRImageWidget = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 9),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 9)
    },
    "QRImageWidget\0saveImage\0\0copyImage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRImageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a,
       3,    0,   25,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QRImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRImageWidget *_t = static_cast<QRImageWidget *>(_o);
        switch (_id) {
        case 0: _t->saveImage(); break;
        case 1: _t->copyImage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QRImageWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QRImageWidget.data,
      qt_meta_data_QRImageWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *QRImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QRImageWidget.stringdata))
        return static_cast<void*>(const_cast< QRImageWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int QRImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_ReceiveRequestDialog_t {
    QByteArrayData data[5];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ReceiveRequestDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ReceiveRequestDialog_t qt_meta_stringdata_ReceiveRequestDialog = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 21),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 25),
QT_MOC_LITERAL(4, 70, 6)
    },
    "ReceiveRequestDialog\0on_btnCopyURI_clicked\0"
    "\0on_btnCopyAddress_clicked\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiveRequestDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08,
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReceiveRequestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReceiveRequestDialog *_t = static_cast<ReceiveRequestDialog *>(_o);
        switch (_id) {
        case 0: _t->on_btnCopyURI_clicked(); break;
        case 1: _t->on_btnCopyAddress_clicked(); break;
        case 2: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ReceiveRequestDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ReceiveRequestDialog.data,
      qt_meta_data_ReceiveRequestDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ReceiveRequestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiveRequestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveRequestDialog.stringdata))
        return static_cast<void*>(const_cast< ReceiveRequestDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ReceiveRequestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
