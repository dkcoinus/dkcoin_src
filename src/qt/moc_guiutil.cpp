/****************************************************************************
** Meta object code from reading C++ file 'guiutil.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/guiutil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guiutil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter_t {
    QByteArrayData data[1];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter_t qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter = {
    {
QT_MOC_LITERAL(0, 0, 32)
    },
    "GUIUtil::ToolTipToRichTextFilter\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIUtil__ToolTipToRichTextFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GUIUtil::ToolTipToRichTextFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GUIUtil::ToolTipToRichTextFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter.data,
      qt_meta_data_GUIUtil__ToolTipToRichTextFilter,  qt_static_metacall, 0, 0}
};


const QMetaObject *GUIUtil::ToolTipToRichTextFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIUtil::ToolTipToRichTextFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter.stringdata))
        return static_cast<void*>(const_cast< ToolTipToRichTextFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int GUIUtil::ToolTipToRichTextFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer_t {
    QByteArrayData data[7];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer_t qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer = {
    {
QT_MOC_LITERAL(0, 0, 41),
QT_MOC_LITERAL(1, 42, 17),
QT_MOC_LITERAL(2, 60, 0),
QT_MOC_LITERAL(3, 61, 12),
QT_MOC_LITERAL(4, 74, 7),
QT_MOC_LITERAL(5, 82, 7),
QT_MOC_LITERAL(6, 90, 20)
    },
    "GUIUtil::TableViewLastColumnResizingFixer\0"
    "on_sectionResized\0\0logicalIndex\0oldSize\0"
    "newSize\0on_geometriesChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUIUtil__TableViewLastColumnResizingFixer[] = {

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
       1,    3,   24,    2, 0x08,
       6,    0,   31,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void GUIUtil::TableViewLastColumnResizingFixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableViewLastColumnResizingFixer *_t = static_cast<TableViewLastColumnResizingFixer *>(_o);
        switch (_id) {
        case 0: _t->on_sectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->on_geometriesChanged(); break;
        default: ;
        }
    }
}

const QMetaObject GUIUtil::TableViewLastColumnResizingFixer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer.data,
      qt_meta_data_GUIUtil__TableViewLastColumnResizingFixer,  qt_static_metacall, 0, 0}
};


const QMetaObject *GUIUtil::TableViewLastColumnResizingFixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUIUtil::TableViewLastColumnResizingFixer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer.stringdata))
        return static_cast<void*>(const_cast< TableViewLastColumnResizingFixer*>(this));
    return QObject::qt_metacast(_clname);
}

int GUIUtil::TableViewLastColumnResizingFixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
