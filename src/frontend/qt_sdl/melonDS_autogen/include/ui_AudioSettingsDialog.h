/********************************************************************************
** Form generated from reading UI file 'AudioSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOSETTINGSDIALOG_H
#define UI_AUDIOSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include "QPathInput.h"

QT_BEGIN_NAMESPACE

class Ui_AudioSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblInstanceNum;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *slVolume;
    QCheckBox *chkSyncDSiVolume;
    QLabel *label_2;
    QComboBox *cbInterpolation;
    QLabel *label_3;
    QComboBox *cbBitDepth;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPathInput *txtMicWavPath;
    QRadioButton *rbMicWav;
    QPushButton *btnMicWavBrowse;
    QRadioButton *rbMicExternal;
    QComboBox *cbMic;
    QRadioButton *rbMicNoise;
    QRadioButton *rbMicNone;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AudioSettingsDialog)
    {
        if (AudioSettingsDialog->objectName().isEmpty())
            AudioSettingsDialog->setObjectName("AudioSettingsDialog");
        AudioSettingsDialog->resize(482, 301);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AudioSettingsDialog->sizePolicy().hasHeightForWidth());
        AudioSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AudioSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        lblInstanceNum = new QLabel(AudioSettingsDialog);
        lblInstanceNum->setObjectName("lblInstanceNum");

        verticalLayout->addWidget(lblInstanceNum);

        groupBox = new QGroupBox(AudioSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        slVolume = new QSlider(groupBox);
        slVolume->setObjectName("slVolume");
        slVolume->setMaximum(256);
        slVolume->setPageStep(16);
        slVolume->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(slVolume, 2, 1, 1, 1);

        chkSyncDSiVolume = new QCheckBox(groupBox);
        chkSyncDSiVolume->setObjectName("chkSyncDSiVolume");

        gridLayout_2->addWidget(chkSyncDSiVolume, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        cbInterpolation = new QComboBox(groupBox);
        cbInterpolation->setObjectName("cbInterpolation");

        gridLayout_2->addWidget(cbInterpolation, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        cbBitDepth = new QComboBox(groupBox);
        cbBitDepth->setObjectName("cbBitDepth");

        gridLayout_2->addWidget(cbBitDepth, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AudioSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        txtMicWavPath = new QPathInput(groupBox_2);
        txtMicWavPath->setObjectName("txtMicWavPath");
        txtMicWavPath->setMinimumSize(QSize(290, 0));

        gridLayout->addWidget(txtMicWavPath, 3, 1, 1, 1);

        rbMicWav = new QRadioButton(groupBox_2);
        rbMicWav->setObjectName("rbMicWav");

        gridLayout->addWidget(rbMicWav, 3, 0, 1, 1);

        btnMicWavBrowse = new QPushButton(groupBox_2);
        btnMicWavBrowse->setObjectName("btnMicWavBrowse");

        gridLayout->addWidget(btnMicWavBrowse, 3, 2, 1, 1);

        rbMicExternal = new QRadioButton(groupBox_2);
        rbMicExternal->setObjectName("rbMicExternal");

        gridLayout->addWidget(rbMicExternal, 1, 0, 1, 1);

        cbMic = new QComboBox(groupBox_2);
        cbMic->setObjectName("cbMic");

        gridLayout->addWidget(cbMic, 1, 1, 1, 2);

        rbMicNoise = new QRadioButton(groupBox_2);
        rbMicNoise->setObjectName("rbMicNoise");

        gridLayout->addWidget(rbMicNoise, 2, 0, 1, 3);

        rbMicNone = new QRadioButton(groupBox_2);
        rbMicNone->setObjectName("rbMicNone");

        gridLayout->addWidget(rbMicNone, 0, 0, 1, 3);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(AudioSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cbInterpolation, cbBitDepth);
        QWidget::setTabOrder(cbBitDepth, slVolume);
        QWidget::setTabOrder(slVolume, chkSyncDSiVolume);
        QWidget::setTabOrder(chkSyncDSiVolume, rbMicNone);
        QWidget::setTabOrder(rbMicNone, rbMicExternal);
        QWidget::setTabOrder(rbMicExternal, rbMicNoise);
        QWidget::setTabOrder(rbMicNoise, rbMicWav);
        QWidget::setTabOrder(rbMicWav, txtMicWavPath);
        QWidget::setTabOrder(txtMicWavPath, btnMicWavBrowse);

        retranslateUi(AudioSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AudioSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AudioSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AudioSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *AudioSettingsDialog)
    {
        AudioSettingsDialog->setWindowTitle(QCoreApplication::translate("AudioSettingsDialog", "Audio settings - melonDS", nullptr));
        lblInstanceNum->setText(QCoreApplication::translate("AudioSettingsDialog", "Configuring settings for instance X", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AudioSettingsDialog", "Audio output", nullptr));
        label->setText(QCoreApplication::translate("AudioSettingsDialog", "Volume:", nullptr));
#if QT_CONFIG(whatsthis)
        slVolume->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Controls the volume of the audio output.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        chkSyncDSiVolume->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Synchronizes the output volume with the DSi hardware volume.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        chkSyncDSiVolume->setText(QCoreApplication::translate("AudioSettingsDialog", "Sync with DSi volume", nullptr));
        label_2->setText(QCoreApplication::translate("AudioSettingsDialog", "Interpolation:", nullptr));
#if QT_CONFIG(whatsthis)
        cbInterpolation->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Applies interpolation to audio samples for better quality. Option &quot;None&quot; is accurate to DS hardware.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_3->setText(QCoreApplication::translate("AudioSettingsDialog", "Bit depth:", nullptr));
#if QT_CONFIG(whatsthis)
        cbBitDepth->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>The bit depth of audio playback. If set to \"Automatic\" this will be 10-bit for DS mode and 16-bit for DSi mode.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        groupBox_2->setTitle(QCoreApplication::translate("AudioSettingsDialog", "Microphone input", nullptr));
#if QT_CONFIG(whatsthis)
        txtMicWavPath->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Forward a WAV file to the emulated microphone.</p><p>This input mode is activated by holding the microphone hotkey (see Input and Hotkeys).</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        rbMicWav->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Forward a WAV file to the emulated microphone.</p><p>This input mode is activated by holding the microphone hotkey (see Input and Hotkeys).</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbMicWav->setText(QCoreApplication::translate("AudioSettingsDialog", "WAV file:", nullptr));
        btnMicWavBrowse->setText(QCoreApplication::translate("AudioSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        rbMicExternal->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Input from an external microphone, if available, will be forwarded to the emulated microphone.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbMicExternal->setText(QCoreApplication::translate("AudioSettingsDialog", "External microphone", nullptr));
#if QT_CONFIG(whatsthis)
        cbMic->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>The selected microphone to be used.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        rbMicNoise->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>Noise will be forwarded to the emulated microphone, simulating blowing into the microphone.</p><p>This input mode is activated by holding the microphone hotkey (see Input and Hotkeys).</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbMicNoise->setText(QCoreApplication::translate("AudioSettingsDialog", "Blow noise", nullptr));
#if QT_CONFIG(whatsthis)
        rbMicNone->setWhatsThis(QCoreApplication::translate("AudioSettingsDialog", "<html><head/><body><p>No microphone input.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbMicNone->setText(QCoreApplication::translate("AudioSettingsDialog", "None", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioSettingsDialog: public Ui_AudioSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOSETTINGSDIALOG_H
