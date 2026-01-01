/****************************************************************************
** Meta object code from reading C++ file 'ThreadedOperation.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../ThreadedOperation/ThreadedOperation.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadedOperation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6xmilib17ThreadedOperationE_t {};
} // unnamed namespace

template <> constexpr inline auto xmilib::ThreadedOperation::qt_create_metaobjectdata<qt_meta_tag_ZN6xmilib17ThreadedOperationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "xmilib::ThreadedOperation",
        "progress",
        "",
        "percentage",
        "started",
        "finished",
        "error",
        "message",
        "canceled",
        "statusChanged",
        "status",
        "run",
        "cancel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'progress'
        QtMocHelpers::SignalData<void(qint32)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'started'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'error'
        QtMocHelpers::SignalData<void(QString const &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'canceled'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void(QString const &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'cancel'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ThreadedOperation, qt_meta_tag_ZN6xmilib17ThreadedOperationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject xmilib::ThreadedOperation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6xmilib17ThreadedOperationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6xmilib17ThreadedOperationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6xmilib17ThreadedOperationE_t>.metaTypes,
    nullptr
} };

void xmilib::ThreadedOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ThreadedOperation *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1]))); break;
        case 1: _t->started(); break;
        case 2: _t->finished(); break;
        case 3: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->canceled(); break;
        case 5: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->run(); break;
        case 7: { bool _r = _t->cancel();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ThreadedOperation::*)(qint32 )>(_a, &ThreadedOperation::progress, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ThreadedOperation::*)()>(_a, &ThreadedOperation::started, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ThreadedOperation::*)()>(_a, &ThreadedOperation::finished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ThreadedOperation::*)(QString const & )>(_a, &ThreadedOperation::error, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ThreadedOperation::*)()>(_a, &ThreadedOperation::canceled, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ThreadedOperation::*)(QString const & )>(_a, &ThreadedOperation::statusChanged, 5))
            return;
    }
}

const QMetaObject *xmilib::ThreadedOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xmilib::ThreadedOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6xmilib17ThreadedOperationE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int xmilib::ThreadedOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void xmilib::ThreadedOperation::progress(qint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void xmilib::ThreadedOperation::started()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void xmilib::ThreadedOperation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void xmilib::ThreadedOperation::error(QString const & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void xmilib::ThreadedOperation::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void xmilib::ThreadedOperation::statusChanged(QString const & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}
QT_WARNING_POP
