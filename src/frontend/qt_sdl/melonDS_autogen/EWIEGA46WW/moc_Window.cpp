/****************************************************************************
** Meta object code from reading C++ file 'Window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/frontend/qt_sdl/Window.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "screenLayoutChange",
        "",
        "onOpenFile",
        "onClickRecentFile",
        "onClearRecentFiles",
        "onBootFirmware",
        "onInsertCart",
        "onEjectCart",
        "onInsertGBACart",
        "onInsertGBAAddon",
        "onEjectGBACart",
        "onSaveState",
        "onLoadState",
        "onUndoStateLoad",
        "onImportSavefile",
        "onQuit",
        "onPause",
        "checked",
        "onReset",
        "onStop",
        "onFrameStep",
        "onOpenPowerManagement",
        "onOpenDateTime",
        "onEnableCheats",
        "onSetupCheats",
        "onCheatsDialogFinished",
        "res",
        "onROMInfo",
        "onRAMInfo",
        "onOpenTitleManager",
        "onMPNewInstance",
        "onLANStartHost",
        "onLANStartClient",
        "onNPStartHost",
        "onNPStartClient",
        "onNPTest",
        "onOpenEmuSettings",
        "onEmuSettingsDialogFinished",
        "onOpenInputConfig",
        "onInputConfigFinished",
        "onOpenVideoSettings",
        "onOpenCameraSettings",
        "onCameraSettingsFinished",
        "onOpenAudioSettings",
        "onUpdateAudioVolume",
        "vol",
        "dsisync",
        "onUpdateAudioSettings",
        "onAudioSettingsFinished",
        "onOpenMPSettings",
        "onMPSettingsFinished",
        "onOpenWifiSettings",
        "onWifiSettingsFinished",
        "onOpenFirmwareSettings",
        "onFirmwareSettingsFinished",
        "onOpenPathSettings",
        "onPathSettingsFinished",
        "onOpenInterfaceSettings",
        "onInterfaceSettingsFinished",
        "onUpdateInterfaceSettings",
        "onChangeSavestateSRAMReloc",
        "onChangeScreenSize",
        "onChangeScreenRotation",
        "QAction*",
        "act",
        "onChangeScreenGap",
        "onChangeScreenLayout",
        "onChangeScreenSwap",
        "onChangeScreenSizing",
        "onChangeScreenAspect",
        "onChangeIntegerScaling",
        "onOpenNewWindow",
        "onChangeScreenFiltering",
        "onChangeShowOSD",
        "onChangeLimitFramerate",
        "onChangeAudioSync",
        "onTitleUpdate",
        "title",
        "onEmuStart",
        "onEmuStop",
        "onEmuPause",
        "pause",
        "onEmuReset",
        "onUpdateVideoSettings",
        "glchange",
        "onFullscreenToggled",
        "onScreenEmphasisToggled"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'screenLayoutChange'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOpenFile'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onClickRecentFile'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onClearRecentFiles'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBootFirmware'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertCart'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEjectCart'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertGBACart'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertGBAAddon'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEjectGBACart'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveState'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLoadState'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onUndoStateLoad'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportSavefile'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onQuit'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPause'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onReset'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStop'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFrameStep'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenPowerManagement'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenDateTime'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEnableCheats'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onSetupCheats'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCheatsDialogFinished'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onROMInfo'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRAMInfo'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenTitleManager'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMPNewInstance'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLANStartHost'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLANStartClient'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNPStartHost'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNPStartClient'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNPTest'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenEmuSettings'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEmuSettingsDialogFinished'
        QtMocHelpers::SlotData<void(int)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenInputConfig'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInputConfigFinished'
        QtMocHelpers::SlotData<void(int)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenVideoSettings'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenCameraSettings'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCameraSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenAudioSettings'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onUpdateAudioVolume'
        QtMocHelpers::SlotData<void(int, int)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 46 }, { QMetaType::Int, 47 },
        }}),
        // Slot 'onUpdateAudioSettings'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAudioSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenMPSettings'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMPSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenWifiSettings'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onWifiSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenFirmwareSettings'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFirmwareSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenPathSettings'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPathSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onOpenInterfaceSettings'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInterfaceSettingsFinished'
        QtMocHelpers::SlotData<void(int)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 27 },
        }}),
        // Slot 'onUpdateInterfaceSettings'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChangeSavestateSRAMReloc'
        QtMocHelpers::SlotData<void(bool)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onChangeScreenSize'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChangeScreenRotation'
        QtMocHelpers::SlotData<void(QAction *)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'onChangeScreenGap'
        QtMocHelpers::SlotData<void(QAction *)>(66, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'onChangeScreenLayout'
        QtMocHelpers::SlotData<void(QAction *)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'onChangeScreenSwap'
        QtMocHelpers::SlotData<void(bool)>(68, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onChangeScreenSizing'
        QtMocHelpers::SlotData<void(QAction *)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'onChangeScreenAspect'
        QtMocHelpers::SlotData<void(QAction *)>(70, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'onChangeIntegerScaling'
        QtMocHelpers::SlotData<void(bool)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onOpenNewWindow'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChangeScreenFiltering'
        QtMocHelpers::SlotData<void(bool)>(73, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onChangeShowOSD'
        QtMocHelpers::SlotData<void(bool)>(74, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onChangeLimitFramerate'
        QtMocHelpers::SlotData<void(bool)>(75, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onChangeAudioSync'
        QtMocHelpers::SlotData<void(bool)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onTitleUpdate'
        QtMocHelpers::SlotData<void(QString)>(77, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 78 },
        }}),
        // Slot 'onEmuStart'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEmuStop'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEmuPause'
        QtMocHelpers::SlotData<void(bool)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 82 },
        }}),
        // Slot 'onEmuReset'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onUpdateVideoSettings'
        QtMocHelpers::SlotData<void(bool)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 85 },
        }}),
        // Slot 'onFullscreenToggled'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScreenEmphasisToggled'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->screenLayoutChange(); break;
        case 1: _t->onOpenFile(); break;
        case 2: _t->onClickRecentFile(); break;
        case 3: _t->onClearRecentFiles(); break;
        case 4: _t->onBootFirmware(); break;
        case 5: _t->onInsertCart(); break;
        case 6: _t->onEjectCart(); break;
        case 7: _t->onInsertGBACart(); break;
        case 8: _t->onInsertGBAAddon(); break;
        case 9: _t->onEjectGBACart(); break;
        case 10: _t->onSaveState(); break;
        case 11: _t->onLoadState(); break;
        case 12: _t->onUndoStateLoad(); break;
        case 13: _t->onImportSavefile(); break;
        case 14: _t->onQuit(); break;
        case 15: _t->onPause((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onReset(); break;
        case 17: _t->onStop(); break;
        case 18: _t->onFrameStep(); break;
        case 19: _t->onOpenPowerManagement(); break;
        case 20: _t->onOpenDateTime(); break;
        case 21: _t->onEnableCheats((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->onSetupCheats(); break;
        case 23: _t->onCheatsDialogFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->onROMInfo(); break;
        case 25: _t->onRAMInfo(); break;
        case 26: _t->onOpenTitleManager(); break;
        case 27: _t->onMPNewInstance(); break;
        case 28: _t->onLANStartHost(); break;
        case 29: _t->onLANStartClient(); break;
        case 30: _t->onNPStartHost(); break;
        case 31: _t->onNPStartClient(); break;
        case 32: _t->onNPTest(); break;
        case 33: _t->onOpenEmuSettings(); break;
        case 34: _t->onEmuSettingsDialogFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->onOpenInputConfig(); break;
        case 36: _t->onInputConfigFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->onOpenVideoSettings(); break;
        case 38: _t->onOpenCameraSettings(); break;
        case 39: _t->onCameraSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->onOpenAudioSettings(); break;
        case 41: _t->onUpdateAudioVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 42: _t->onUpdateAudioSettings(); break;
        case 43: _t->onAudioSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->onOpenMPSettings(); break;
        case 45: _t->onMPSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 46: _t->onOpenWifiSettings(); break;
        case 47: _t->onWifiSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->onOpenFirmwareSettings(); break;
        case 49: _t->onFirmwareSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->onOpenPathSettings(); break;
        case 51: _t->onPathSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 52: _t->onOpenInterfaceSettings(); break;
        case 53: _t->onInterfaceSettingsFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->onUpdateInterfaceSettings(); break;
        case 55: _t->onChangeSavestateSRAMReloc((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->onChangeScreenSize(); break;
        case 57: _t->onChangeScreenRotation((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 58: _t->onChangeScreenGap((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 59: _t->onChangeScreenLayout((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 60: _t->onChangeScreenSwap((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->onChangeScreenSizing((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 62: _t->onChangeScreenAspect((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 63: _t->onChangeIntegerScaling((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 64: _t->onOpenNewWindow(); break;
        case 65: _t->onChangeScreenFiltering((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 66: _t->onChangeShowOSD((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 67: _t->onChangeLimitFramerate((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 68: _t->onChangeAudioSync((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 69: _t->onTitleUpdate((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 70: _t->onEmuStart(); break;
        case 71: _t->onEmuStop(); break;
        case 72: _t->onEmuPause((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 73: _t->onEmuReset(); break;
        case 74: _t->onUpdateVideoSettings((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 75: _t->onFullscreenToggled(); break;
        case 76: _t->onScreenEmphasisToggled(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::screenLayoutChange, 0))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::screenLayoutChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
