/****************************************************************************
** Meta object code from reading C++ file 'emploidutemps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../emploidutemps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emploidutemps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChoixSemaine_t {
    QByteArrayData data[3];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChoixSemaine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChoixSemaine_t qt_meta_stringdata_ChoixSemaine = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChoixSemaine"
QT_MOC_LITERAL(1, 13, 8), // "accesEdT"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "ChoixSemaine\0accesEdT\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChoixSemaine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ChoixSemaine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChoixSemaine *_t = static_cast<ChoixSemaine *>(_o);
        switch (_id) {
        case 0: _t->accesEdT(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ChoixSemaine::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChoixSemaine.data,
      qt_meta_data_ChoixSemaine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChoixSemaine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChoixSemaine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChoixSemaine.stringdata))
        return static_cast<void*>(const_cast< ChoixSemaine*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChoixSemaine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_EmploiDuTemps_t {
    QByteArrayData data[6];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmploiDuTemps_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmploiDuTemps_t qt_meta_stringdata_EmploiDuTemps = {
    {
QT_MOC_LITERAL(0, 0, 13), // "EmploiDuTemps"
QT_MOC_LITERAL(1, 14, 8), // "editItem"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(4, 42, 4), // "item"
QT_MOC_LITERAL(5, 47, 7) // "newProg"

    },
    "EmploiDuTemps\0editItem\0\0QTableWidgetItem*\0"
    "item\0newProg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmploiDuTemps[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void EmploiDuTemps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmploiDuTemps *_t = static_cast<EmploiDuTemps *>(_o);
        switch (_id) {
        case 0: _t->editItem((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->newProg(); break;
        default: ;
        }
    }
}

const QMetaObject EmploiDuTemps::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmploiDuTemps.data,
      qt_meta_data_EmploiDuTemps,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmploiDuTemps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmploiDuTemps::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmploiDuTemps.stringdata))
        return static_cast<void*>(const_cast< EmploiDuTemps*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmploiDuTemps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
