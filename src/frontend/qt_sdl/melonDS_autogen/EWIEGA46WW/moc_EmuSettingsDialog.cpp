/****************************************************************************
** Meta object code from reading C++ file 'EmuSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/frontend/qt_sdl/EmuSettingsDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EmuSettingsDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17EmuSettingsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto EmuSettingsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN17EmuSettingsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EmuSettingsDialog",
        "done",
        "",
        "r",
        "on_btnBIOS9Browse_clicked",
        "on_btnBIOS7Browse_clicked",
        "on_btnFirmwareBrowse_clicked",
        "on_cbDLDIEnable_toggled",
        "on_btnDLDISDBrowse_clicked",
        "on_cbDLDIFolder_toggled",
        "on_btnDLDIFolderBrowse_clicked",
        "on_btnDSiBIOS9Browse_clicked",
        "on_btnDSiBIOS7Browse_clicked",
        "on_btnDSiFirmwareBrowse_clicked",
        "on_btnDSiNANDBrowse_clicked",
        "on_cbDSiSDEnable_toggled",
        "on_btnDSiSDBrowse_clicked",
        "on_cbDSiSDFolder_toggled",
        "on_btnDSiSDFolderBrowse_clicked",
        "on_chkEnableJIT_toggled",
        "on_chkExternalBIOS_toggled",
        "on_cbGdbEnabled_toggled"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'done'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_btnBIOS9Browse_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnBIOS7Browse_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnFirmwareBrowse_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbDLDIEnable_toggled'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDLDISDBrowse_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbDLDIFolder_toggled'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDLDIFolderBrowse_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDSiBIOS9Browse_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDSiBIOS7Browse_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDSiFirmwareBrowse_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDSiNANDBrowse_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbDSiSDEnable_toggled'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDSiSDBrowse_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbDSiSDFolder_toggled'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnDSiSDFolderBrowse_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkEnableJIT_toggled'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkExternalBIOS_toggled'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbGdbEnabled_toggled'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EmuSettingsDialog, qt_meta_tag_ZN17EmuSettingsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EmuSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17EmuSettingsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17EmuSettingsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17EmuSettingsDialogE_t>.metaTypes,
    nullptr
} };

void EmuSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EmuSettingsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->done((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_btnBIOS9Browse_clicked(); break;
        case 2: _t->on_btnBIOS7Browse_clicked(); break;
        case 3: _t->on_btnFirmwareBrowse_clicked(); break;
        case 4: _t->on_cbDLDIEnable_toggled(); break;
        case 5: _t->on_btnDLDISDBrowse_clicked(); break;
        case 6: _t->on_cbDLDIFolder_toggled(); break;
        case 7: _t->on_btnDLDIFolderBrowse_clicked(); break;
        case 8: _t->on_btnDSiBIOS9Browse_clicked(); break;
        case 9: _t->on_btnDSiBIOS7Browse_clicked(); break;
        case 10: _t->on_btnDSiFirmwareBrowse_clicked(); break;
        case 11: _t->on_btnDSiNANDBrowse_clicked(); break;
        case 12: _t->on_cbDSiSDEnable_toggled(); break;
        case 13: _t->on_btnDSiSDBrowse_clicked(); break;
        case 14: _t->on_cbDSiSDFolder_toggled(); break;
        case 15: _t->on_btnDSiSDFolderBrowse_clicked(); break;
        case 16: _t->on_chkEnableJIT_toggled(); break;
        case 17: _t->on_chkExternalBIOS_toggled(); break;
        case 18: _t->on_cbGdbEnabled_toggled(); break;
        default: ;
        }
    }
}

const QMetaObject *EmuSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmuSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17EmuSettingsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EmuSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
