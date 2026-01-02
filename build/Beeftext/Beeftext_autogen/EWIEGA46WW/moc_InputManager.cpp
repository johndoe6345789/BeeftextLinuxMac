/****************************************************************************
** Meta object code from reading C++ file 'InputManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/InputManager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_InputManager_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[18];
    char stringdata6[15];
    char stringdata7[2];
    char stringdata8[15];
    char stringdata9[30];
    char stringdata10[27];
    char stringdata11[34];
    char stringdata12[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_InputManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_InputManager_t qt_meta_stringdata_InputManager = {
    {
        QT_MOC_LITERAL(0, 12),  // "InputManager"
        QT_MOC_LITERAL(13, 15),  // "shortcutPressed"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 10),  // "SpShortcut"
        QT_MOC_LITERAL(41, 8),  // "shortcut"
        QT_MOC_LITERAL(50, 17),  // "comboBreakerTyped"
        QT_MOC_LITERAL(68, 14),  // "characterTyped"
        QT_MOC_LITERAL(83, 1),  // "c"
        QT_MOC_LITERAL(85, 14),  // "backspaceTyped"
        QT_MOC_LITERAL(100, 29),  // "substitutionShortcutTriggered"
        QT_MOC_LITERAL(130, 26),  // "comboMenuShortcutTriggered"
        QT_MOC_LITERAL(157, 33),  // "appEnableDisableShortcutTrigg..."
        QT_MOC_LITERAL(191, 10)   // "onShortcut"
    },
    "InputManager",
    "shortcutPressed",
    "",
    "SpShortcut",
    "shortcut",
    "comboBreakerTyped",
    "characterTyped",
    "c",
    "backspaceTyped",
    "substitutionShortcutTriggered",
    "comboMenuShortcutTriggered",
    "appEnableDisableShortcutTriggered",
    "onShortcut"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_InputManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       5,    0,   65,    2, 0x06,    3 /* Public */,
       6,    1,   66,    2, 0x06,    4 /* Public */,
       8,    0,   69,    2, 0x06,    6 /* Public */,
       9,    0,   70,    2, 0x06,    7 /* Public */,
      10,    0,   71,    2, 0x06,    8 /* Public */,
      11,    0,   72,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QChar,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject InputManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_InputManager.offsetsAndSizes,
    qt_meta_data_InputManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_InputManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InputManager, std::true_type>,
        // method 'shortcutPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SpShortcut const &, std::false_type>,
        // method 'comboBreakerTyped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'characterTyped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QChar, std::false_type>,
        // method 'backspaceTyped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'substitutionShortcutTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'comboMenuShortcutTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appEnableDisableShortcutTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShortcut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SpShortcut const &, std::false_type>
    >,
    nullptr
} };

void InputManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InputManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortcutPressed((*reinterpret_cast< std::add_pointer_t<SpShortcut>>(_a[1]))); break;
        case 1: _t->comboBreakerTyped(); break;
        case 2: _t->characterTyped((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 3: _t->backspaceTyped(); break;
        case 4: _t->substitutionShortcutTriggered(); break;
        case 5: _t->comboMenuShortcutTriggered(); break;
        case 6: _t->appEnableDisableShortcutTriggered(); break;
        case 7: _t->onShortcut((*reinterpret_cast< std::add_pointer_t<SpShortcut>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InputManager::*)(SpShortcut const & );
            if (_t _q_method = &InputManager::shortcutPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InputManager::*)();
            if (_t _q_method = &InputManager::comboBreakerTyped; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InputManager::*)(QChar );
            if (_t _q_method = &InputManager::characterTyped; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InputManager::*)();
            if (_t _q_method = &InputManager::backspaceTyped; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InputManager::*)();
            if (_t _q_method = &InputManager::substitutionShortcutTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InputManager::*)();
            if (_t _q_method = &InputManager::comboMenuShortcutTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (InputManager::*)();
            if (_t _q_method = &InputManager::appEnableDisableShortcutTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *InputManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InputManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InputManager::shortcutPressed(SpShortcut const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputManager::comboBreakerTyped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InputManager::characterTyped(QChar _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputManager::backspaceTyped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InputManager::substitutionShortcutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void InputManager::comboMenuShortcutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void InputManager::appEnableDisableShortcutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
