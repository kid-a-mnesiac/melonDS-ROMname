/********************************************************************************
** Form generated from reading UI file 'FirmwareSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRMWARESETTINGSDIALOG_H
#define UI_FIRMWARESETTINGSDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirmwareSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblInstanceNum;
    QGroupBox *grpGeneral;
    QGridLayout *gridLayout_3;
    QCheckBox *overrideFirmwareBox;
    QGroupBox *grpUserSettings;
    QGridLayout *gridLayout;
    QComboBox *cbxBirthdayDay;
    QComboBox *cbxBirthdayMonth;
    QLineEdit *usernameEdit;
    QLabel *usernameLabel;
    QLabel *label_3;
    QComboBox *colorsEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *messageEdit;
    QComboBox *languageBox;
    QGroupBox *grpWifiSettings;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *txtMAC;
    QLabel *label_6;
    QDialogButtonBox *dialogButtons;

    void setupUi(QDialog *FirmwareSettingsDialog)
    {
        if (FirmwareSettingsDialog->objectName().isEmpty())
            FirmwareSettingsDialog->setObjectName("FirmwareSettingsDialog");
        FirmwareSettingsDialog->resize(511, 357);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FirmwareSettingsDialog->sizePolicy().hasHeightForWidth());
        FirmwareSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(FirmwareSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        lblInstanceNum = new QLabel(FirmwareSettingsDialog);
        lblInstanceNum->setObjectName("lblInstanceNum");

        verticalLayout->addWidget(lblInstanceNum);

        grpGeneral = new QGroupBox(FirmwareSettingsDialog);
        grpGeneral->setObjectName("grpGeneral");
        gridLayout_3 = new QGridLayout(grpGeneral);
        gridLayout_3->setObjectName("gridLayout_3");
        overrideFirmwareBox = new QCheckBox(grpGeneral);
        overrideFirmwareBox->setObjectName("overrideFirmwareBox");

        gridLayout_3->addWidget(overrideFirmwareBox, 0, 0, 1, 1);


        verticalLayout->addWidget(grpGeneral);

        grpUserSettings = new QGroupBox(FirmwareSettingsDialog);
        grpUserSettings->setObjectName("grpUserSettings");
        gridLayout = new QGridLayout(grpUserSettings);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, 9, 9);
        cbxBirthdayDay = new QComboBox(grpUserSettings);
        cbxBirthdayDay->setObjectName("cbxBirthdayDay");

        gridLayout->addWidget(cbxBirthdayDay, 2, 1, 1, 1);

        cbxBirthdayMonth = new QComboBox(grpUserSettings);
        cbxBirthdayMonth->setObjectName("cbxBirthdayMonth");

        gridLayout->addWidget(cbxBirthdayMonth, 2, 2, 1, 1);

        usernameEdit = new QLineEdit(grpUserSettings);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setMaxLength(10);
        usernameEdit->setClearButtonEnabled(false);

        gridLayout->addWidget(usernameEdit, 0, 1, 1, 2);

        usernameLabel = new QLabel(grpUserSettings);
        usernameLabel->setObjectName("usernameLabel");

        gridLayout->addWidget(usernameLabel, 0, 0, 1, 1);

        label_3 = new QLabel(grpUserSettings);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        colorsEdit = new QComboBox(grpUserSettings);
        colorsEdit->setObjectName("colorsEdit");

        gridLayout->addWidget(colorsEdit, 3, 1, 1, 2);

        label_2 = new QLabel(grpUserSettings);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(grpUserSettings);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(grpUserSettings);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        messageEdit = new QLineEdit(grpUserSettings);
        messageEdit->setObjectName("messageEdit");

        gridLayout->addWidget(messageEdit, 4, 1, 1, 2);

        languageBox = new QComboBox(grpUserSettings);
        languageBox->setObjectName("languageBox");

        gridLayout->addWidget(languageBox, 1, 1, 1, 2);


        verticalLayout->addWidget(grpUserSettings);

        grpWifiSettings = new QGroupBox(FirmwareSettingsDialog);
        grpWifiSettings->setObjectName("grpWifiSettings");
        gridLayout_2 = new QGridLayout(grpWifiSettings);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(grpWifiSettings);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        txtMAC = new QLineEdit(grpWifiSettings);
        txtMAC->setObjectName("txtMAC");
        txtMAC->setMaxLength(17);

        gridLayout_2->addWidget(txtMAC, 0, 1, 1, 1);

        label_6 = new QLabel(grpWifiSettings);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 1, 1, 1, 1);


        verticalLayout->addWidget(grpWifiSettings);

        dialogButtons = new QDialogButtonBox(FirmwareSettingsDialog);
        dialogButtons->setObjectName("dialogButtons");
        dialogButtons->setOrientation(Qt::Horizontal);
        dialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(dialogButtons);

        QWidget::setTabOrder(overrideFirmwareBox, usernameEdit);
        QWidget::setTabOrder(usernameEdit, languageBox);
        QWidget::setTabOrder(languageBox, cbxBirthdayDay);
        QWidget::setTabOrder(cbxBirthdayDay, cbxBirthdayMonth);
        QWidget::setTabOrder(cbxBirthdayMonth, colorsEdit);
        QWidget::setTabOrder(colorsEdit, messageEdit);
        QWidget::setTabOrder(messageEdit, txtMAC);

        retranslateUi(FirmwareSettingsDialog);
        QObject::connect(dialogButtons, &QDialogButtonBox::accepted, FirmwareSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(dialogButtons, &QDialogButtonBox::rejected, FirmwareSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FirmwareSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *FirmwareSettingsDialog)
    {
        FirmwareSettingsDialog->setWindowTitle(QCoreApplication::translate("FirmwareSettingsDialog", "Firmware settings - melonDS", nullptr));
        lblInstanceNum->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Configuring settings for instance X", nullptr));
        grpGeneral->setTitle(QCoreApplication::translate("FirmwareSettingsDialog", "General", nullptr));
        overrideFirmwareBox->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Override settings from external firmware", nullptr));
        grpUserSettings->setTitle(QCoreApplication::translate("FirmwareSettingsDialog", "User settings", nullptr));
        usernameEdit->setText(QCoreApplication::translate("FirmwareSettingsDialog", "melonDS", nullptr));
        usernameLabel->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Message:", nullptr));
        label_2->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Color:", nullptr));
        label->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Language:", nullptr));
        label_4->setText(QCoreApplication::translate("FirmwareSettingsDialog", "Birthday:", nullptr));
        grpWifiSettings->setTitle(QCoreApplication::translate("FirmwareSettingsDialog", "Network settings", nullptr));
        label_5->setText(QCoreApplication::translate("FirmwareSettingsDialog", "MAC address:", nullptr));
        label_6->setText(QCoreApplication::translate("FirmwareSettingsDialog", "(leave empty to use default MAC)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirmwareSettingsDialog: public Ui_FirmwareSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRMWARESETTINGSDIALOG_H
