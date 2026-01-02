/****************************************************************************
** Meta object code from reading C++ file 'GroupListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/Group/GroupListWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupListWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GroupListWidget_t {
    uint offsetsAndSizes[34];
    char stringdata0[16];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[6];
    char stringdata5[17];
    char stringdata6[21];
    char stringdata7[18];
    char stringdata8[20];
    char stringdata9[27];
    char stringdata10[19];
    char stringdata11[15];
    char stringdata12[13];
    char stringdata13[9];
    char stringdata14[23];
    char stringdata15[18];
    char stringdata16[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GroupListWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GroupListWidget_t qt_meta_stringdata_GroupListWidget = {
    {
        QT_MOC_LITERAL(0, 15),  // "GroupListWidget"
        QT_MOC_LITERAL(16, 20),  // "selectedGroupChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 7),  // "SpGroup"
        QT_MOC_LITERAL(46, 5),  // "group"
        QT_MOC_LITERAL(52, 16),  // "onActionNewGroup"
        QT_MOC_LITERAL(69, 20),  // "selectAllCombosEntry"
        QT_MOC_LITERAL(90, 17),  // "onActionEditGroup"
        QT_MOC_LITERAL(108, 19),  // "onActionDeleteGroup"
        QT_MOC_LITERAL(128, 26),  // "onActionEnableDisableGroup"
        QT_MOC_LITERAL(155, 18),  // "onSelectionChanged"
        QT_MOC_LITERAL(174, 14),  // "QItemSelection"
        QT_MOC_LITERAL(189, 12),  // "onGroupMoved"
        QT_MOC_LITERAL(202, 8),  // "newIndex"
        QT_MOC_LITERAL(211, 22),  // "onContextMenuRequested"
        QT_MOC_LITERAL(234, 17),  // "onMenuAboutToShow"
        QT_MOC_LITERAL(252, 16)   // "onBackupRestored"
    },
    "GroupListWidget",
    "selectedGroupChanged",
    "",
    "SpGroup",
    "group",
    "onActionNewGroup",
    "selectAllCombosEntry",
    "onActionEditGroup",
    "onActionDeleteGroup",
    "onActionEnableDisableGroup",
    "onSelectionChanged",
    "QItemSelection",
    "onGroupMoved",
    "newIndex",
    "onContextMenuRequested",
    "onMenuAboutToShow",
    "onBackupRestored"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GroupListWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   83,    2, 0x0a,    3 /* Public */,
       6,    0,   84,    2, 0x10a,    4 /* Public | MethodIsConst  */,
       7,    0,   85,    2, 0x08,    5 /* Private */,
       8,    0,   86,    2, 0x08,    6 /* Private */,
       9,    0,   87,    2, 0x08,    7 /* Private */,
      10,    2,   88,    2, 0x08,    8 /* Private */,
      12,    2,   93,    2, 0x108,   11 /* Private | MethodIsConst  */,
      14,    0,   98,    2, 0x108,   14 /* Private | MethodIsConst  */,
      15,    0,   99,    2, 0x108,   15 /* Private | MethodIsConst  */,
      16,    0,  100,    2, 0x108,   16 /* Private | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GroupListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GroupListWidget.offsetsAndSizes,
    qt_meta_data_GroupListWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GroupListWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GroupListWidget, std::true_type>,
        // method 'selectedGroupChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SpGroup const &, std::false_type>,
        // method 'onActionNewGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAllCombosEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionEditGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionDeleteGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionEnableDisableGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelection const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QItemSelection const &, std::false_type>,
        // method 'onGroupMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SpGroup const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'onContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBackupRestored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GroupListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedGroupChanged((*reinterpret_cast< std::add_pointer_t<SpGroup>>(_a[1]))); break;
        case 1: _t->onActionNewGroup(); break;
        case 2: _t->selectAllCombosEntry(); break;
        case 3: _t->onActionEditGroup(); break;
        case 4: _t->onActionDeleteGroup(); break;
        case 5: _t->onActionEnableDisableGroup(); break;
        case 6: _t->onSelectionChanged((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 7: _t->onGroupMoved((*reinterpret_cast< std::add_pointer_t<SpGroup>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint32>>(_a[2]))); break;
        case 8: _t->onContextMenuRequested(); break;
        case 9: _t->onMenuAboutToShow(); break;
        case 10: _t->onBackupRestored(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SpGroup >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SpGroup >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GroupListWidget::*)(SpGroup const & );
            if (_t _q_method = &GroupListWidget::selectedGroupChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *GroupListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GroupListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GroupListWidget::selectedGroupChanged(SpGroup const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
