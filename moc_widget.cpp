/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Thu Apr 12 10:34:08 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      24,    7,    7,    7, 0x0a,
      33,    7,    7,    7, 0x0a,
      43,    7,    7,    7, 0x0a,
      52,    7,    7,    7, 0x0a,
      60,    7,    7,    7, 0x0a,
      70,    7,    7,    7, 0x0a,
      77,    7,    7,    7, 0x0a,
      91,    7,    7,    7, 0x0a,
      97,    7,    7,    7, 0x0a,
     112,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0onPressNumber()\0onPlus()\0"
    "onMinus()\0onMult()\0onDiv()\0onEqual()\0"
    "onCe()\0onBackspace()\0onC()\0onChangesign()\0"
    "onComma()\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onPressNumber(); break;
        case 1: onPlus(); break;
        case 2: onMinus(); break;
        case 3: onMult(); break;
        case 4: onDiv(); break;
        case 5: onEqual(); break;
        case 6: onCe(); break;
        case 7: onBackspace(); break;
        case 8: onC(); break;
        case 9: onChangesign(); break;
        case 10: onComma(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
