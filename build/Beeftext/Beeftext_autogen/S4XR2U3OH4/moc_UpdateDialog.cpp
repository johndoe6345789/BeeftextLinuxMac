/****************************************************************************
** Meta object code from reading C++ file 'UpdateDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stdafx.h"
#include "../../../../Beeftext/Update/UpdateDialog.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UpdateDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_UpdateDialog_t {
    uint offsetsAndSizes[28];
    char stringdata0[13];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[9];
    char stringdata6[19];
    char stringdata7[16];
    char stringdata8[28];
    char stringdata9[6];
    char stringdata10[19];
    char stringdata11[14];
    char stringdata12[11];
    char stringdata13[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_UpdateDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_UpdateDialog_t qt_meta_stringdata_UpdateDialog = {
    {
        QT_MOC_LITERAL(0, 12),  // "UpdateDialog"
        QT_MOC_LITERAL(13, 9),  // "onInstall"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 8),  // "onNotNow"
        QT_MOC_LITERAL(33, 17),  // "onSkipThisVersion"
        QT_MOC_LITERAL(51, 8),  // "onCancel"
        QT_MOC_LITERAL(60, 18),  // "onDownloadFinished"
        QT_MOC_LITERAL(79, 15),  // "onDownloadError"
        QT_MOC_LITERAL(95, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(123, 5),  // "error"
        QT_MOC_LITERAL(129, 18),  // "onDownloadProgress"
        QT_MOC_LITERAL(148, 13),  // "bytesReceived"
        QT_MOC_LITERAL(162, 10),  // "bytesTotal"
        QT_MOC_LITERAL(173, 23)   // "onDownloadDataAvailable"
    },
    "UpdateDialog",
    "onInstall",
    "",
    "onNotNow",
    "onSkipThisVersion",
    "onCancel",
    "onDownloadFinished",
    "onDownloadError",
    "QNetworkReply::NetworkError",
    "error",
    "onDownloadProgress",
    "bytesReceived",
    "bytesTotal",
    "onDownloadDataAvailable"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_UpdateDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    6 /* Private */,
      10,    2,   70,    2, 0x108,    8 /* Private | MethodIsConst  */,
      13,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject UpdateDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_UpdateDialog.offsetsAndSizes,
    qt_meta_data_UpdateDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_UpdateDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UpdateDialog, std::true_type>,
        // method 'onInstall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNotNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSkipThisVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDownloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDownloadError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'onDownloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'onDownloadDataAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void UpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onInstall(); break;
        case 1: _t->onNotNow(); break;
        case 2: _t->onSkipThisVersion(); break;
        case 3: _t->onCancel(); break;
        case 4: _t->onDownloadFinished(); break;
        case 5: _t->onDownloadError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 6: _t->onDownloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 7: _t->onDownloadDataAvailable(); break;
        default: ;
        }
    }
}

const QMetaObject *UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
