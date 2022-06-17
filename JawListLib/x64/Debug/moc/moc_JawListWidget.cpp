/****************************************************************************
** Meta object code from reading C++ file 'JawListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../JawListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JawListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JawListWidget_t {
    QByteArrayData data[14];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JawListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JawListWidget_t qt_meta_stringdata_JawListWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "JawListWidget"
QT_MOC_LITERAL(1, 14, 8), // "openItem"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "varValue"
QT_MOC_LITERAL(4, 33, 3), // "str"
QT_MOC_LITERAL(5, 37, 10), // "updateItem"
QT_MOC_LITERAL(6, 48, 16), // "jawDoubleClicked"
QT_MOC_LITERAL(7, 65, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 82, 4), // "item"
QT_MOC_LITERAL(9, 87, 14), // "jawItemClicked"
QT_MOC_LITERAL(10, 102, 14), // "pathBtnClicked"
QT_MOC_LITERAL(11, 117, 11), // "pathPressed"
QT_MOC_LITERAL(12, 129, 28), // "on_action_openMenu_triggered"
QT_MOC_LITERAL(13, 158, 30) // "on_action_DeleteMenu_triggered"

    },
    "JawListWidget\0openItem\0\0varValue\0str\0"
    "updateItem\0jawDoubleClicked\0"
    "QListWidgetItem*\0item\0jawItemClicked\0"
    "pathBtnClicked\0pathPressed\0"
    "on_action_openMenu_triggered\0"
    "on_action_DeleteMenu_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JawListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       1,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JawListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JawListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openItem((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->openItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updateItem((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->updateItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->jawDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->jawItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->pathBtnClicked(); break;
        case 7: _t->pathPressed(); break;
        case 8: _t->on_action_openMenu_triggered(); break;
        case 9: _t->on_action_DeleteMenu_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JawListWidget::*)(const QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JawListWidget::openItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JawListWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JawListWidget::openItem)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JawListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_JawListWidget.data,
    qt_meta_data_JawListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JawListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JawListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JawListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int JawListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void JawListWidget::openItem(const QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JawListWidget::openItem(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
