/****************************************************************************
** Meta object code from reading C++ file 'PrefPaneEmojis.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/Preferences/Panes/PrefPaneEmojis.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrefPaneEmojis.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PrefPaneEmojis_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[29];
    char stringdata4[8];
    char stringdata5[32];
    char stringdata6[28];
    char stringdata7[6];
    char stringdata8[29];
    char stringdata9[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PrefPaneEmojis_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PrefPaneEmojis_t qt_meta_stringdata_PrefPaneEmojis = {
    {
        QT_MOC_LITERAL(0, 14),  // "PrefPaneEmojis"
        QT_MOC_LITERAL(15, 9),  // "updateGui"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 28),  // "onCheckEnableEmojiShortcodes"
        QT_MOC_LITERAL(55, 7),  // "checked"
        QT_MOC_LITERAL(63, 31),  // "onEditEmojiExcludedApplications"
        QT_MOC_LITERAL(95, 27),  // "onEmojiLeftDelimiterChanged"
        QT_MOC_LITERAL(123, 5),  // "value"
        QT_MOC_LITERAL(129, 28),  // "onEmojiRightDelimiterChanged"
        QT_MOC_LITERAL(158, 31)   // "onCheckShowEmojisInPickerWindow"
    },
    "PrefPaneEmojis",
    "updateGui",
    "",
    "onCheckEnableEmojiShortcodes",
    "checked",
    "onEditEmojiExcludedApplications",
    "onEmojiLeftDelimiterChanged",
    "value",
    "onEmojiRightDelimiterChanged",
    "onCheckShowEmojisInPickerWindow"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PrefPaneEmojis[] = {

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
       9,    1,   61,    2, 0x108,    9 /* Private | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject PrefPaneEmojis::staticMetaObject = { {
    QMetaObject::SuperData::link<PrefPane::staticMetaObject>(),
    qt_meta_stringdata_PrefPaneEmojis.offsetsAndSizes,
    qt_meta_data_PrefPaneEmojis,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PrefPaneEmojis_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PrefPaneEmojis, std::true_type>,
        // method 'updateGui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckEnableEmojiShortcodes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onEditEmojiExcludedApplications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEmojiLeftDelimiterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'onEmojiRightDelimiterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'onCheckShowEmojisInPickerWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void PrefPaneEmojis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrefPaneEmojis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGui(); break;
        case 1: _t->onCheckEnableEmojiShortcodes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->onEditEmojiExcludedApplications(); break;
        case 3: _t->onEmojiLeftDelimiterChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onEmojiRightDelimiterChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onCheckShowEmojisInPickerWindow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *PrefPaneEmojis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrefPaneEmojis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrefPaneEmojis.stringdata0))
        return static_cast<void*>(this);
    return PrefPane::qt_metacast(_clname);
}

int PrefPaneEmojis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
