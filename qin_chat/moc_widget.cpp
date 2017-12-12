/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Wed Jun 21 13:50:17 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,    8,    7,    7, 0x08,
      47,    7,    7,    7, 0x08,
      66,    7,    7,    7, 0x08,
      84,    7,    7,    7, 0x08,
     107,    8,    7,    7, 0x08,
     135,    8,    7,    7, 0x08,
     163,  161,    7,    7, 0x08,
     205,    7,    7,    7, 0x08,
     254,    7,    7,    7, 0x08,
     273,    7,    7,    7, 0x08,
     295,    7,    7,    7, 0x08,
     313,    7,    7,    7, 0x08,
     339,    7,    7,    7, 0x08,
     368,  361,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0checked\0on_textUnderline_clicked(bool)\0"
    "on_clear_clicked()\0on_save_clicked()\0"
    "on_textcolor_clicked()\0"
    "on_textitalic_clicked(bool)\0"
    "on_textbold_clicked(bool)\0f\0"
    "on_fontComboBox_currentFontChanged(QFont)\0"
    "on_fontsizecomboBox_currentIndexChanged(QString)\0"
    "on_close_clicked()\0on_sendfile_clicked()\0"
    "on_send_clicked()\0processPendingDatagrams()\0"
    "sentFileName(QString)\0format\0"
    "currentFormatChanged(QTextCharFormat)\0"
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
        case 0: on_textUnderline_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_clear_clicked(); break;
        case 2: on_save_clicked(); break;
        case 3: on_textcolor_clicked(); break;
        case 4: on_textitalic_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_textbold_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: on_fontComboBox_currentFontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 7: on_fontsizecomboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: on_close_clicked(); break;
        case 9: on_sendfile_clicked(); break;
        case 10: on_send_clicked(); break;
        case 11: processPendingDatagrams(); break;
        case 12: sentFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: currentFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
