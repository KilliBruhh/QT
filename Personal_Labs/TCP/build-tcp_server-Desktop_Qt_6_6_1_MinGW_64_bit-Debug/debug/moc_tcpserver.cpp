/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcp_server/tcpserver.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASStcpServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASStcpServerENDCLASS = QtMocHelpers::stringData(
    "tcpServer",
    "startServer",
    "",
    "newConnection",
    "readData",
    "on_PB_connect_clicked",
    "on_PB_disconnect_clicked",
    "on_PB_ClearResults_clicked",
    "on_PB_connectClient_clicked",
    "AddMessage",
    "msg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASStcpServerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[9];
    char stringdata5[22];
    char stringdata6[25];
    char stringdata7[27];
    char stringdata8[28];
    char stringdata9[11];
    char stringdata10[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASStcpServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASStcpServerENDCLASS_t qt_meta_stringdata_CLASStcpServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "tcpServer"
        QT_MOC_LITERAL(10, 11),  // "startServer"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 13),  // "newConnection"
        QT_MOC_LITERAL(37, 8),  // "readData"
        QT_MOC_LITERAL(46, 21),  // "on_PB_connect_clicked"
        QT_MOC_LITERAL(68, 24),  // "on_PB_disconnect_clicked"
        QT_MOC_LITERAL(93, 26),  // "on_PB_ClearResults_clicked"
        QT_MOC_LITERAL(120, 27),  // "on_PB_connectClient_clicked"
        QT_MOC_LITERAL(148, 10),  // "AddMessage"
        QT_MOC_LITERAL(159, 3)   // "msg"
    },
    "tcpServer",
    "startServer",
    "",
    "newConnection",
    "readData",
    "on_PB_connect_clicked",
    "on_PB_disconnect_clicked",
    "on_PB_ClearResults_clicked",
    "on_PB_connectClient_clicked",
    "AddMessage",
    "msg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASStcpServerENDCLASS[] = {

 // content:
      12,       // revision
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
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    1,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject tcpServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASStcpServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASStcpServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASStcpServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<tcpServer, std::true_type>,
        // method 'startServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_disconnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_ClearResults_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PB_connectClient_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void tcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tcpServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startServer(); break;
        case 1: _t->newConnection(); break;
        case 2: _t->readData(); break;
        case 3: _t->on_PB_connect_clicked(); break;
        case 4: _t->on_PB_disconnect_clicked(); break;
        case 5: _t->on_PB_ClearResults_clicked(); break;
        case 6: _t->on_PB_connectClient_clicked(); break;
        case 7: _t->AddMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *tcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASStcpServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int tcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
