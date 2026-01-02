/****************************************************************************
** Meta object code from reading C++ file 'PrefPaneAppearance.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/Preferences/Panes/PrefPaneAppearance.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrefPaneAppearance.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PrefPaneAppearance_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[6];
    char stringdata5[24];
    char stringdata6[22];
    char stringdata7[8];
    char stringdata8[25];
    char stringdata9[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PrefPaneAppearance_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PrefPaneAppearance_t qt_meta_stringdata_PrefPaneAppearance = {
    {
        QT_MOC_LITERAL(0, 18),  // "PrefPaneAppearance"
        QT_MOC_LITERAL(19, 21),  // "onRefreshLanguageList"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 27),  // "onComboLanguageValueChanged"
        QT_MOC_LITERAL(70, 5),  // "index"
        QT_MOC_LITERAL(76, 23),  // "onOpenTranslationFolder"
        QT_MOC_LITERAL(100, 21),  // "onCheckUseCustomTheme"
        QT_MOC_LITERAL(122, 7),  // "checked"
        QT_MOC_LITERAL(130, 24),  // "onComboThemeValueChanged"
        QT_MOC_LITERAL(155, 9)   // "updateGui"
    },
    "PrefPaneAppearance",
    "onRefreshLanguageList",
    "",
    "onComboLanguageValueChanged",
    "index",
    "onOpenTranslationFolder",
    "onCheckUseCustomTheme",
    "checked",
    "onComboThemeValueChanged",
    "updateGui"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PrefPaneAppearance[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x108,    1 /* Private | MethodIsConst  */,
       3,    1,   51,    2, 0x108,    2 /* Private | MethodIsConst  */,
       5,    0,   54,    2, 0x08,    4 /* Private */,
       6,    1,   55,    2, 0x108,    5 /* Private | MethodIsConst  */,
       8,    1,   58,    2, 0x108,    7 /* Private | MethodIsConst  */,
       9,    0,   61,    2, 0x108,    9 /* Private | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PrefPaneAppearance::staticMetaObject = { {
    QMetaObject::SuperData::link<PrefPane::staticMetaObject>(),
    qt_meta_stringdata_PrefPaneAppearance.offsetsAndSizes,
    qt_meta_data_PrefPaneAppearance,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PrefPaneAppearance_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefPaneAppearance, std::true_type>,
        // method 'onRefreshLanguageList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onComboLanguageValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onOpenTranslationFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckUseCustomTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onComboThemeValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateGui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PrefPaneAppearance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrefPaneAppearance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onRefreshLanguageList(); break;
        case 1: _t->onComboLanguageValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onOpenTranslationFolder(); break;
        case 3: _t->onCheckUseCustomTheme((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->onComboThemeValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->updateGui(); break;
        default: ;
        }
    }
}

const QMetaObject *PrefPaneAppearance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrefPaneAppearance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrefPaneAppearance.stringdata0))
        return static_cast<void*>(this);
    return PrefPane::qt_metacast(_clname);
}

int PrefPaneAppearance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PrefPane::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
