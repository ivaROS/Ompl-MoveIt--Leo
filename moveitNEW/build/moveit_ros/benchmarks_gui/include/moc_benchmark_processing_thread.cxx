/****************************************************************************
** Meta object code from reading C++ file 'benchmark_processing_thread.h'
**
** Created: Sat Feb 1 16:07:36 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/moveit_ros/benchmarks_gui/include/benchmark_processing_thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'benchmark_processing_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BenchmarkProcessingThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_BenchmarkProcessingThread[] = {
    "BenchmarkProcessingThread\0"
};

void BenchmarkProcessingThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BenchmarkProcessingThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BenchmarkProcessingThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_BenchmarkProcessingThread,
      qt_meta_data_BenchmarkProcessingThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BenchmarkProcessingThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BenchmarkProcessingThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BenchmarkProcessingThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BenchmarkProcessingThread))
        return static_cast<void*>(const_cast< BenchmarkProcessingThread*>(this));
    return QThread::qt_metacast(_clname);
}

int BenchmarkProcessingThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
