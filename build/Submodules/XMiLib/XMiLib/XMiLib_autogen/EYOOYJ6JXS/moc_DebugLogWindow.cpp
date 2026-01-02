/****************************************************************************
** Meta object code from reading C++ file 'DebugLogWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../../../Submodules/XMiLib/XMiLib/DebugLog/DebugLogWindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugLogWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_xmilib__DebugLogWindow_t {
    uint offsetsAndSizes[20];
    char stringdata0[23];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[15];
    char stringdata5[6];
    char stringdata6[5];
    char stringdata7[16];
    char stringdata8[14];
    char stringdata9[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_xmilib__DebugLogWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_xmilib__DebugLogWindow_t qt_meta_stringdata_xmilib__DebugLogWindow = {
    {
        QT_MOC_LITERAL(0, 22),  // "xmilib::DebugLogWindow"
        QT_MOC_LITERAL(23, 23),  // "onRowsAboutToBeInserted"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 11),  // "QModelIndex"
        QT_MOC_LITERAL(60, 14),  // "onRowsInserted"
        QT_MOC_LITERAL(75, 5),  // "first"
        QT_MOC_LITERAL(81, 4),  // "last"
        QT_MOC_LITERAL(86, 15),  // "onFilterChanged"
        QT_MOC_LITERAL(102, 13),  // "onActionClose"
        QT_MOC_LITERAL(116, 16)   // "onActionClearLog"
    },
    "xmilib::DebugLogWindow",
    "onRowsAboutToBeInserted",
    "",
    "QModelIndex",
    "onRowsInserted",
    "first",
    "last",
    "onFilterChanged",
    "onActionClose",
    "onActionClearLog"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_xmilib__DebugLogWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   44,    2, 0x08,    1 /* Private */,
       4,    3,   51,    2, 0x108,    5 /* Private | MethodIsConst  */,
       7,    0,   58,    2, 0x108,    9 /* Private | MethodIsConst  */,
       8,    0,   59,    2, 0x08,   10 /* Private */,
       9,    0,   60,    2, 0x108,   11 /* Private | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject xmilib::DebugLogWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_xmilib__DebugLogWindow.offsetsAndSizes,
    qt_meta_data_xmilib__DebugLogWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_xmilib__DebugLogWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DebugLogWindow, std::true_type>,
        // method 'onRowsAboutToBeInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionClearLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void xmilib::DebugLogWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DebugLogWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onRowsAboutToBeInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->onRowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->onFilterChanged(); break;
        case 3: _t->onActionClose(); break;
        case 4: _t->onActionClearLog(); break;
        default: ;
        }
    }
}

const QMetaObject *xmilib::DebugLogWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xmilib::DebugLogWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xmilib__DebugLogWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int xmilib::DebugLogWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
