/****************************************************************************
** Meta object code from reading C++ file 'ThreadedOperationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../../../Submodules/XMiLib/XMiLib/ThreadedOperation/ThreadedOperationDialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadedOperationDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_xmilib__ThreadedOperationDialog_t {
    uint offsetsAndSizes[24];
    char stringdata0[32];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[17];
    char stringdata7[8];
    char stringdata8[25];
    char stringdata9[7];
    char stringdata10[20];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_xmilib__ThreadedOperationDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_xmilib__ThreadedOperationDialog_t qt_meta_stringdata_xmilib__ThreadedOperationDialog = {
    {
        QT_MOC_LITERAL(0, 31),  // "xmilib::ThreadedOperationDialog"
        QT_MOC_LITERAL(32, 4),  // "exec"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 14),  // "onActionCancel"
        QT_MOC_LITERAL(53, 19),  // "onOperationFinished"
        QT_MOC_LITERAL(73, 19),  // "onOperationCanceled"
        QT_MOC_LITERAL(93, 16),  // "onOperationError"
        QT_MOC_LITERAL(110, 7),  // "message"
        QT_MOC_LITERAL(118, 24),  // "onOperationStatusChanged"
        QT_MOC_LITERAL(143, 6),  // "status"
        QT_MOC_LITERAL(150, 19),  // "onOperationProgress"
        QT_MOC_LITERAL(170, 8)   // "progress"
    },
    "xmilib::ThreadedOperationDialog",
    "exec",
    "",
    "onActionCancel",
    "onOperationFinished",
    "onOperationCanceled",
    "onOperationError",
    "message",
    "onOperationStatusChanged",
    "status",
    "onOperationProgress",
    "progress"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_xmilib__ThreadedOperationDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x10a,    2 /* Public | MethodIsConst  */,
       4,    0,   58,    2, 0x0a,    3 /* Public */,
       5,    0,   59,    2, 0x0a,    4 /* Public */,
       6,    1,   60,    2, 0x0a,    5 /* Public */,
       8,    1,   63,    2, 0x10a,    7 /* Public | MethodIsConst  */,
      10,    1,   66,    2, 0x10a,    9 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject xmilib::ThreadedOperationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_xmilib__ThreadedOperationDialog.offsetsAndSizes,
    qt_meta_data_xmilib__ThreadedOperationDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_xmilib__ThreadedOperationDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ThreadedOperationDialog, std::true_type>,
        // method 'exec'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onActionCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOperationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOperationCanceled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOperationError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'onOperationStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'onOperationProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>
    >,
    nullptr
} };

void xmilib::ThreadedOperationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadedOperationDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->onActionCancel(); break;
        case 2: _t->onOperationFinished(); break;
        case 3: _t->onOperationCanceled(); break;
        case 4: _t->onOperationError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onOperationStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->onOperationProgress((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *xmilib::ThreadedOperationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xmilib::ThreadedOperationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xmilib__ThreadedOperationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int xmilib::ThreadedOperationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
