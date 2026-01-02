/****************************************************************************
** Meta object code from reading C++ file 'ComboManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/Combo/ComboManager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComboManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ComboManager_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[18];
    char stringdata5[20];
    char stringdata6[17];
    char stringdata7[2];
    char stringdata8[17];
    char stringdata9[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ComboManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ComboManager_t qt_meta_stringdata_ComboManager = {
    {
        QT_MOC_LITERAL(0, 12),  // "ComboManager"
        QT_MOC_LITERAL(13, 18),  // "comboListWasLoaded"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 17),  // "comboListWasSaved"
        QT_MOC_LITERAL(51, 17),  // "backupWasRestored"
        QT_MOC_LITERAL(69, 19),  // "onComboBreakerTyped"
        QT_MOC_LITERAL(89, 16),  // "onCharacterTyped"
        QT_MOC_LITERAL(106, 1),  // "c"
        QT_MOC_LITERAL(108, 16),  // "onBackspaceTyped"
        QT_MOC_LITERAL(125, 29)   // "onSubstitutionTriggerShortcut"
    },
    "ComboManager",
    "comboListWasLoaded",
    "",
    "comboListWasSaved",
    "backupWasRestored",
    "onComboBreakerTyped",
    "onCharacterTyped",
    "c",
    "onBackspaceTyped",
    "onSubstitutionTriggerShortcut"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ComboManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x106,    1 /* Public | MethodIsConst  */,
       3,    0,   57,    2, 0x106,    2 /* Public | MethodIsConst  */,
       4,    0,   58,    2, 0x106,    3 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       8,    0,   63,    2, 0x08,    7 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ComboManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComboManager.offsetsAndSizes,
    qt_meta_data_ComboManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ComboManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ComboManager, std::true_type>,
        // method 'comboListWasLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'comboListWasSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backupWasRestored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onComboBreakerTyped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCharacterTyped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChar, std::false_type>,
        // method 'onBackspaceTyped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSubstitutionTriggerShortcut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ComboManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComboManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->comboListWasLoaded(); break;
        case 1: _t->comboListWasSaved(); break;
        case 2: _t->backupWasRestored(); break;
        case 3: _t->onComboBreakerTyped(); break;
        case 4: _t->onCharacterTyped((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 5: _t->onBackspaceTyped(); break;
        case 6: _t->onSubstitutionTriggerShortcut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComboManager::*)() const;
            if (_t _q_method = &ComboManager::comboListWasLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComboManager::*)() const;
            if (_t _q_method = &ComboManager::comboListWasSaved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComboManager::*)() const;
            if (_t _q_method = &ComboManager::backupWasRestored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *ComboManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComboManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComboManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComboManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ComboManager::comboListWasLoaded()const
{
    QMetaObject::activate(const_cast< ComboManager *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComboManager::comboListWasSaved()const
{
    QMetaObject::activate(const_cast< ComboManager *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComboManager::backupWasRestored()const
{
    QMetaObject::activate(const_cast< ComboManager *>(this), &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
