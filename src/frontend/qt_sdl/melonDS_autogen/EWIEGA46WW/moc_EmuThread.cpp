/****************************************************************************
** Meta object code from reading C++ file 'EmuThread.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/frontend/qt_sdl/EmuThread.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmuThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.0. It"
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
struct qt_meta_tag_ZN9EmuThreadE_t {};
} // unnamed namespace

template <> constexpr inline auto EmuThread::qt_create_metaobjectdata<qt_meta_tag_ZN9EmuThreadE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EmuThread",
        "windowUpdate",
        "",
        "windowTitleChange",
        "title",
        "windowEmuStart",
        "windowEmuStop",
        "windowEmuPause",
        "pause",
        "windowEmuReset",
        "windowLimitFPSChange",
        "autoScreenSizingChange",
        "sizing",
        "windowFullscreenToggle",
        "swapScreensToggle",
        "screenEmphasisToggle",
        "syncVolumeLevel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowUpdate'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowTitleChange'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'windowEmuStart'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowEmuStop'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowEmuPause'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'windowEmuReset'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowLimitFPSChange'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'autoScreenSizingChange'
        QtMocHelpers::SignalData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Signal 'windowFullscreenToggle'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'swapScreensToggle'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'screenEmphasisToggle'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'syncVolumeLevel'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EmuThread, qt_meta_tag_ZN9EmuThreadE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EmuThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EmuThreadE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EmuThreadE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9EmuThreadE_t>.metaTypes,
    nullptr
} };

void EmuThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EmuThread *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowUpdate(); break;
        case 1: _t->windowTitleChange((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->windowEmuStart(); break;
        case 3: _t->windowEmuStop(); break;
        case 4: _t->windowEmuPause((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->windowEmuReset(); break;
        case 6: _t->windowLimitFPSChange(); break;
        case 7: _t->autoScreenSizingChange((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->windowFullscreenToggle(); break;
        case 9: _t->swapScreensToggle(); break;
        case 10: _t->screenEmphasisToggle(); break;
        case 11: _t->syncVolumeLevel(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::windowUpdate, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)(QString )>(_a, &EmuThread::windowTitleChange, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::windowEmuStart, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::windowEmuStop, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)(bool )>(_a, &EmuThread::windowEmuPause, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::windowEmuReset, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::windowLimitFPSChange, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)(int )>(_a, &EmuThread::autoScreenSizingChange, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::windowFullscreenToggle, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::swapScreensToggle, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::screenEmphasisToggle, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::syncVolumeLevel, 11))
            return;
    }
}

const QMetaObject *EmuThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmuThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EmuThreadE_t>.strings))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int EmuThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EmuThread::windowUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EmuThread::windowTitleChange(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void EmuThread::windowEmuStart()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void EmuThread::windowEmuStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void EmuThread::windowEmuPause(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void EmuThread::windowEmuReset()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void EmuThread::windowLimitFPSChange()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void EmuThread::autoScreenSizingChange(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void EmuThread::windowFullscreenToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void EmuThread::swapScreensToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void EmuThread::screenEmphasisToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void EmuThread::syncVolumeLevel()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
