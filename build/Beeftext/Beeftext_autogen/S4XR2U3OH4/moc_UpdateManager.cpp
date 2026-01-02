/****************************************************************************
** Meta object code from reading C++ file 'UpdateManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/Update/UpdateManager.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_UpdateManager_t {
    uint offsetsAndSizes[34];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[18];
    char stringdata5[20];
    char stringdata6[18];
    char stringdata7[20];
    char stringdata8[18];
    char stringdata9[29];
    char stringdata10[31];
    char stringdata11[28];
    char stringdata12[8];
    char stringdata13[17];
    char stringdata14[26];
    char stringdata15[28];
    char stringdata16[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_UpdateManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_UpdateManager_t qt_meta_stringdata_UpdateManager = {
    {
        QT_MOC_LITERAL(0, 13),  // "UpdateManager"
        QT_MOC_LITERAL(14, 18),  // "startedUpdateCheck"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 19),  // "finishedUpdateCheck"
        QT_MOC_LITERAL(54, 17),  // "updateIsAvailable"
        QT_MOC_LITERAL(72, 19),  // "SpLatestVersionInfo"
        QT_MOC_LITERAL(92, 17),  // "latestVersionInfo"
        QT_MOC_LITERAL(110, 19),  // "noUpdateIsAvailable"
        QT_MOC_LITERAL(130, 17),  // "updateCheckFailed"
        QT_MOC_LITERAL(148, 28),  // "checkForUpdateWitchSkipCheck"
        QT_MOC_LITERAL(177, 30),  // "checkForUpdateWithoutSkipCheck"
        QT_MOC_LITERAL(208, 27),  // "onAutoCheckForUpdateChanged"
        QT_MOC_LITERAL(236, 7),  // "enabled"
        QT_MOC_LITERAL(244, 16),  // "onWorkerFinished"
        QT_MOC_LITERAL(261, 25),  // "onWorkerUpdateIsAvailable"
        QT_MOC_LITERAL(287, 27),  // "onWorkerNoUpdateIsAvailable"
        QT_MOC_LITERAL(315, 13)   // "onWorkerError"
    },
    "UpdateManager",
    "startedUpdateCheck",
    "",
    "finishedUpdateCheck",
    "updateIsAvailable",
    "SpLatestVersionInfo",
    "latestVersionInfo",
    "noUpdateIsAvailable",
    "updateCheckFailed",
    "checkForUpdateWitchSkipCheck",
    "checkForUpdateWithoutSkipCheck",
    "onAutoCheckForUpdateChanged",
    "enabled",
    "onWorkerFinished",
    "onWorkerUpdateIsAvailable",
    "onWorkerNoUpdateIsAvailable",
    "onWorkerError"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_UpdateManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    0,   87,    2, 0x06,    2 /* Public */,
       4,    1,   88,    2, 0x06,    3 /* Public */,
       7,    0,   91,    2, 0x06,    5 /* Public */,
       8,    0,   92,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   93,    2, 0x0a,    7 /* Public */,
      10,    0,   94,    2, 0x0a,    8 /* Public */,
      11,    1,   95,    2, 0x0a,    9 /* Public */,
      13,    0,   98,    2, 0x08,   11 /* Private */,
      14,    1,   99,    2, 0x08,   12 /* Private */,
      15,    0,  102,    2, 0x08,   14 /* Private */,
      16,    1,  103,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject UpdateManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UpdateManager.offsetsAndSizes,
    qt_meta_data_UpdateManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_UpdateManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UpdateManager, std::true_type>,
        // method 'startedUpdateCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finishedUpdateCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateIsAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SpLatestVersionInfo, std::false_type>,
        // method 'noUpdateIsAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCheckFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkForUpdateWitchSkipCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkForUpdateWithoutSkipCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAutoCheckForUpdateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onWorkerFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWorkerUpdateIsAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SpLatestVersionInfo const &, std::false_type>,
        // method 'onWorkerNoUpdateIsAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWorkerError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>
    >,
    nullptr
} };

void UpdateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startedUpdateCheck(); break;
        case 1: _t->finishedUpdateCheck(); break;
        case 2: _t->updateIsAvailable((*reinterpret_cast< std::add_pointer_t<SpLatestVersionInfo>>(_a[1]))); break;
        case 3: _t->noUpdateIsAvailable(); break;
        case 4: _t->updateCheckFailed(); break;
        case 5: _t->checkForUpdateWitchSkipCheck(); break;
        case 6: _t->checkForUpdateWithoutSkipCheck(); break;
        case 7: _t->onAutoCheckForUpdateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onWorkerFinished(); break;
        case 9: _t->onWorkerUpdateIsAvailable((*reinterpret_cast< std::add_pointer_t<SpLatestVersionInfo>>(_a[1]))); break;
        case 10: _t->onWorkerNoUpdateIsAvailable(); break;
        case 11: _t->onWorkerError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SpLatestVersionInfo >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SpLatestVersionInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateManager::*)();
            if (_t _q_method = &UpdateManager::startedUpdateCheck; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdateManager::*)();
            if (_t _q_method = &UpdateManager::finishedUpdateCheck; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UpdateManager::*)(SpLatestVersionInfo );
            if (_t _q_method = &UpdateManager::updateIsAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UpdateManager::*)();
            if (_t _q_method = &UpdateManager::noUpdateIsAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UpdateManager::*)();
            if (_t _q_method = &UpdateManager::updateCheckFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *UpdateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpdateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void UpdateManager::startedUpdateCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UpdateManager::finishedUpdateCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UpdateManager::updateIsAvailable(SpLatestVersionInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UpdateManager::noUpdateIsAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UpdateManager::updateCheckFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
