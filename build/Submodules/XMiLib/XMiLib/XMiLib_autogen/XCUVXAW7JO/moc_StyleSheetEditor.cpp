/****************************************************************************
** Meta object code from reading C++ file 'StyleSheetEditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../../../Submodules/XMiLib/XMiLib/StyleSheetEditor/StyleSheetEditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StyleSheetEditor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_xmilib__StyleSheetEditor_t {
    uint offsetsAndSizes[10];
    char stringdata0[25];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_xmilib__StyleSheetEditor_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_xmilib__StyleSheetEditor_t qt_meta_stringdata_xmilib__StyleSheetEditor = {
    {
        QT_MOC_LITERAL(0, 24),  // "xmilib::StyleSheetEditor"
        QT_MOC_LITERAL(25, 13),  // "onActionApply"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 10),  // "onActionOk"
        QT_MOC_LITERAL(51, 14)   // "onActionCancel"
    },
    "xmilib::StyleSheetEditor",
    "onActionApply",
    "",
    "onActionOk",
    "onActionCancel"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_xmilib__StyleSheetEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x108,    1 /* Private | MethodIsConst  */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject xmilib::StyleSheetEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_xmilib__StyleSheetEditor.offsetsAndSizes,
    qt_meta_data_xmilib__StyleSheetEditor,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_xmilib__StyleSheetEditor_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StyleSheetEditor, std::true_type>,
        // method 'onActionApply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionOk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void xmilib::StyleSheetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StyleSheetEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onActionApply(); break;
        case 1: _t->onActionOk(); break;
        case 2: _t->onActionCancel(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *xmilib::StyleSheetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xmilib::StyleSheetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xmilib__StyleSheetEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int xmilib::StyleSheetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
