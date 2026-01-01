/****************************************************************************
** Meta object code from reading C++ file 'ThreadedOperationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdafx.h"
#include "../../ThreadedOperation/ThreadedOperationDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThreadedOperationDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto xmilib::ThreadedOperationDialog::qt_create_metaobjectdata<qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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

    QtMocHelpers::UintData qt_methods {
        // Slot 'exec'
        QtMocHelpers::SlotData<int()>(1, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'onActionCancel'
        QtMocHelpers::SlotData<void() const>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOperationFinished'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOperationCanceled'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOperationError'
        QtMocHelpers::SlotData<void(QString const &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'onOperationStatusChanged'
        QtMocHelpers::SlotData<void(QString const &) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'onOperationProgress'
        QtMocHelpers::SlotData<void(qint32) const>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ThreadedOperationDialog, qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject xmilib::ThreadedOperationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t>.metaTypes,
    nullptr
} };

void xmilib::ThreadedOperationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ThreadedOperationDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->onActionCancel(); break;
        case 2: _t->onOperationFinished(); break;
        case 3: _t->onOperationCanceled(); break;
        case 4: _t->onOperationError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onOperationStatusChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->onOperationProgress((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1]))); break;
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
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6xmilib23ThreadedOperationDialogE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
