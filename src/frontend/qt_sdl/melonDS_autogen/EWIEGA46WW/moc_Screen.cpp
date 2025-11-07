/****************************************************************************
** Meta object code from reading C++ file 'Screen.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/frontend/qt_sdl/Screen.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Screen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11ScreenPanelE_t {};
} // unnamed namespace

template <> constexpr inline auto ScreenPanel::qt_create_metaobjectdata<qt_meta_tag_ZN11ScreenPanelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScreenPanel",
        "onScreenLayoutChanged",
        "",
        "onAutoScreenSizingChanged",
        "sizing"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onScreenLayoutChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAutoScreenSizingChanged'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenPanel, qt_meta_tag_ZN11ScreenPanelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScreenPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ScreenPanelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ScreenPanelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ScreenPanelE_t>.metaTypes,
    nullptr
} };

void ScreenPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenPanel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onScreenLayoutChanged(); break;
        case 1: _t->onAutoScreenSizingChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ScreenPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ScreenPanelE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScreenPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN17ScreenPanelNativeE_t {};
} // unnamed namespace

template <> constexpr inline auto ScreenPanelNative::qt_create_metaobjectdata<qt_meta_tag_ZN17ScreenPanelNativeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScreenPanelNative"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenPanelNative, qt_meta_tag_ZN17ScreenPanelNativeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScreenPanelNative::staticMetaObject = { {
    QMetaObject::SuperData::link<ScreenPanel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenPanelNativeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenPanelNativeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17ScreenPanelNativeE_t>.metaTypes,
    nullptr
} };

void ScreenPanelNative::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenPanelNative *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ScreenPanelNative::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenPanelNative::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17ScreenPanelNativeE_t>.strings))
        return static_cast<void*>(this);
    return ScreenPanel::qt_metacast(_clname);
}

int ScreenPanelNative::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScreenPanel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13ScreenPanelGLE_t {};
} // unnamed namespace

template <> constexpr inline auto ScreenPanelGL::qt_create_metaobjectdata<qt_meta_tag_ZN13ScreenPanelGLE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScreenPanelGL"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScreenPanelGL, qt_meta_tag_ZN13ScreenPanelGLE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScreenPanelGL::staticMetaObject = { {
    QMetaObject::SuperData::link<ScreenPanel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ScreenPanelGLE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ScreenPanelGLE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ScreenPanelGLE_t>.metaTypes,
    nullptr
} };

void ScreenPanelGL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScreenPanelGL *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *ScreenPanelGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenPanelGL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ScreenPanelGLE_t>.strings))
        return static_cast<void*>(this);
    return ScreenPanel::qt_metacast(_clname);
}

int ScreenPanelGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScreenPanel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
