/********************************************************************************
** Form generated from reading UI file 'EmuSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMUSETTINGSDIALOG_H
#define UI_EMUSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QPathInput.h"

QT_BEGIN_NAMESPACE

class Ui_EmuSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout_4;
    QComboBox *cbxConsoleType;
    QCheckBox *chkDirectBoot;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QPushButton *btnFirmwareBrowse;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QPushButton *btnBIOS7Browse;
    QPathInput *txtBIOS9Path;
    QLabel *label_2;
    QPathInput *txtBIOS7Path;
    QPathInput *txtFirmwarePath;
    QLabel *label;
    QPushButton *btnBIOS9Browse;
    QCheckBox *chkExternalBIOS;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QPathInput *txtDSiBIOS9Path;
    QLineEdit *txtDSiSDFolder;
    QCheckBox *cbDSiSDFolder;
    QLabel *label_14;
    QLabel *label_5;
    QPushButton *btnDSiBIOS9Browse;
    QPathInput *txtDSiBIOS7Path;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_6;
    QPushButton *btnDSiBIOS7Browse;
    QPushButton *btnDSiSDBrowse;
    QLabel *label_7;
    QCheckBox *cbDSiSDReadOnly;
    QCheckBox *cbDSiSDEnable;
    QPushButton *btnDSiFirmwareBrowse;
    QPushButton *btnDSiNANDBrowse;
    QPathInput *txtDSiSDPath;
    QPathInput *txtDSiFirmwarePath;
    QPathInput *txtDSiNANDPath;
    QComboBox *cbxDSiSDSize;
    QLabel *label_10;
    QPushButton *btnDSiSDFolderBrowse;
    QCheckBox *cbDSiFullBIOSBoot;
    QWidget *tab_3;
    QFormLayout *formLayout_5;
    QCheckBox *chkEnableJIT;
    QLabel *label_9;
    QSpinBox *spnJITMaximumBlockSize;
    QCheckBox *chkJITBranchOptimisations;
    QCheckBox *chkJITLiteralOptimisations;
    QCheckBox *chkJITFastMemory;
    QSpacerItem *verticalSpacer;
    QWidget *tab_5;
    QGridLayout *gridLayout_4;
    QPushButton *btnDLDISDBrowse;
    QPushButton *btnDLDIFolderBrowse;
    QLineEdit *txtDLDIFolder;
    QLabel *label_12;
    QCheckBox *cbDLDIFolder;
    QComboBox *cbxDLDISize;
    QCheckBox *cbDLDIEnable;
    QPathInput *txtDLDISDPath;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_11;
    QCheckBox *cbDLDIReadOnly;
    QWidget *tab_6;
    QGridLayout *gridLayout_3;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_17;
    QCheckBox *cbGdbEnabled;
    QLabel *label_18;
    QLabel *label_19;
    QCheckBox *cbGdbBOSA9;
    QSpinBox *intGdbPortA9;
    QSpinBox *intGdbPortA7;
    QCheckBox *cbGdbBOSA7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EmuSettingsDialog)
    {
        if (EmuSettingsDialog->objectName().isEmpty())
            EmuSettingsDialog->setObjectName("EmuSettingsDialog");
        EmuSettingsDialog->resize(575, 416);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EmuSettingsDialog->sizePolicy().hasHeightForWidth());
        EmuSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(EmuSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        tabWidget = new QTabWidget(EmuSettingsDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        formLayout_4 = new QFormLayout(tab);
        formLayout_4->setObjectName("formLayout_4");
        cbxConsoleType = new QComboBox(tab);
        cbxConsoleType->setObjectName("cbxConsoleType");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbxConsoleType->sizePolicy().hasHeightForWidth());
        cbxConsoleType->setSizePolicy(sizePolicy1);

        formLayout_4->setWidget(1, QFormLayout::ItemRole::FieldRole, cbxConsoleType);

        chkDirectBoot = new QCheckBox(tab);
        chkDirectBoot->setObjectName("chkDirectBoot");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, chkDirectBoot);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_4->setItem(3, QFormLayout::ItemRole::LabelRole, verticalSpacer_2);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        btnFirmwareBrowse = new QPushButton(tab_2);
        btnFirmwareBrowse->setObjectName("btnFirmwareBrowse");

        gridLayout->addWidget(btnFirmwareBrowse, 3, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 0, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        btnBIOS7Browse = new QPushButton(tab_2);
        btnBIOS7Browse->setObjectName("btnBIOS7Browse");

        gridLayout->addWidget(btnBIOS7Browse, 2, 2, 1, 1);

        txtBIOS9Path = new QPathInput(tab_2);
        txtBIOS9Path->setObjectName("txtBIOS9Path");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(txtBIOS9Path->sizePolicy().hasHeightForWidth());
        txtBIOS9Path->setSizePolicy(sizePolicy3);
        txtBIOS9Path->setMinimumSize(QSize(290, 0));

        gridLayout->addWidget(txtBIOS9Path, 1, 1, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        txtBIOS7Path = new QPathInput(tab_2);
        txtBIOS7Path->setObjectName("txtBIOS7Path");

        gridLayout->addWidget(txtBIOS7Path, 2, 1, 1, 1);

        txtFirmwarePath = new QPathInput(tab_2);
        txtFirmwarePath->setObjectName("txtFirmwarePath");

        gridLayout->addWidget(txtFirmwarePath, 3, 1, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        btnBIOS9Browse = new QPushButton(tab_2);
        btnBIOS9Browse->setObjectName("btnBIOS9Browse");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnBIOS9Browse->sizePolicy().hasHeightForWidth());
        btnBIOS9Browse->setSizePolicy(sizePolicy4);
        btnBIOS9Browse->setAutoDefault(true);

        gridLayout->addWidget(btnBIOS9Browse, 1, 2, 1, 1);

        chkExternalBIOS = new QCheckBox(tab_2);
        chkExternalBIOS->setObjectName("chkExternalBIOS");

        gridLayout->addWidget(chkExternalBIOS, 0, 0, 1, 3);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setObjectName("gridLayout_2");
        label_8 = new QLabel(tab_4);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        txtDSiBIOS9Path = new QPathInput(tab_4);
        txtDSiBIOS9Path->setObjectName("txtDSiBIOS9Path");
        sizePolicy3.setHeightForWidth(txtDSiBIOS9Path->sizePolicy().hasHeightForWidth());
        txtDSiBIOS9Path->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(txtDSiBIOS9Path, 1, 1, 1, 1);

        txtDSiSDFolder = new QLineEdit(tab_4);
        txtDSiSDFolder->setObjectName("txtDSiSDFolder");

        gridLayout_2->addWidget(txtDSiSDFolder, 12, 1, 1, 1);

        cbDSiSDFolder = new QCheckBox(tab_4);
        cbDSiSDFolder->setObjectName("cbDSiSDFolder");

        gridLayout_2->addWidget(cbDSiSDFolder, 12, 0, 1, 1);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName("label_14");

        gridLayout_2->addWidget(label_14, 7, 0, 1, 3);

        label_5 = new QLabel(tab_4);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        btnDSiBIOS9Browse = new QPushButton(tab_4);
        btnDSiBIOS9Browse->setObjectName("btnDSiBIOS9Browse");

        gridLayout_2->addWidget(btnDSiBIOS9Browse, 1, 2, 1, 1);

        txtDSiBIOS7Path = new QPathInput(tab_4);
        txtDSiBIOS7Path->setObjectName("txtDSiBIOS7Path");

        gridLayout_2->addWidget(txtDSiBIOS7Path, 2, 1, 1, 1);

        label_15 = new QLabel(tab_4);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 0, 0, 1, 3);

        label_13 = new QLabel(tab_4);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 10, 0, 1, 1);

        label_6 = new QLabel(tab_4);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        btnDSiBIOS7Browse = new QPushButton(tab_4);
        btnDSiBIOS7Browse->setObjectName("btnDSiBIOS7Browse");

        gridLayout_2->addWidget(btnDSiBIOS7Browse, 2, 2, 1, 1);

        btnDSiSDBrowse = new QPushButton(tab_4);
        btnDSiSDBrowse->setObjectName("btnDSiSDBrowse");

        gridLayout_2->addWidget(btnDSiSDBrowse, 9, 2, 1, 1);

        label_7 = new QLabel(tab_4);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 3, 0, 1, 1);

        cbDSiSDReadOnly = new QCheckBox(tab_4);
        cbDSiSDReadOnly->setObjectName("cbDSiSDReadOnly");

        gridLayout_2->addWidget(cbDSiSDReadOnly, 11, 0, 1, 1);

        cbDSiSDEnable = new QCheckBox(tab_4);
        cbDSiSDEnable->setObjectName("cbDSiSDEnable");

        gridLayout_2->addWidget(cbDSiSDEnable, 8, 0, 1, 3);

        btnDSiFirmwareBrowse = new QPushButton(tab_4);
        btnDSiFirmwareBrowse->setObjectName("btnDSiFirmwareBrowse");

        gridLayout_2->addWidget(btnDSiFirmwareBrowse, 3, 2, 1, 1);

        btnDSiNANDBrowse = new QPushButton(tab_4);
        btnDSiNANDBrowse->setObjectName("btnDSiNANDBrowse");

        gridLayout_2->addWidget(btnDSiNANDBrowse, 4, 2, 1, 1);

        txtDSiSDPath = new QPathInput(tab_4);
        txtDSiSDPath->setObjectName("txtDSiSDPath");

        gridLayout_2->addWidget(txtDSiSDPath, 9, 1, 1, 1);

        txtDSiFirmwarePath = new QPathInput(tab_4);
        txtDSiFirmwarePath->setObjectName("txtDSiFirmwarePath");

        gridLayout_2->addWidget(txtDSiFirmwarePath, 3, 1, 1, 1);

        txtDSiNANDPath = new QPathInput(tab_4);
        txtDSiNANDPath->setObjectName("txtDSiNANDPath");

        gridLayout_2->addWidget(txtDSiNANDPath, 4, 1, 1, 1);

        cbxDSiSDSize = new QComboBox(tab_4);
        cbxDSiSDSize->setObjectName("cbxDSiSDSize");

        gridLayout_2->addWidget(cbxDSiSDSize, 10, 1, 1, 1);

        label_10 = new QLabel(tab_4);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 9, 0, 1, 1);

        btnDSiSDFolderBrowse = new QPushButton(tab_4);
        btnDSiSDFolderBrowse->setObjectName("btnDSiSDFolderBrowse");

        gridLayout_2->addWidget(btnDSiSDFolderBrowse, 12, 2, 1, 1);

        cbDSiFullBIOSBoot = new QCheckBox(tab_4);
        cbDSiFullBIOSBoot->setObjectName("cbDSiFullBIOSBoot");

        gridLayout_2->addWidget(cbDSiFullBIOSBoot, 5, 0, 1, 3);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        formLayout_5 = new QFormLayout(tab_3);
        formLayout_5->setObjectName("formLayout_5");
        chkEnableJIT = new QCheckBox(tab_3);
        chkEnableJIT->setObjectName("chkEnableJIT");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::LabelRole, chkEnableJIT);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName("label_9");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::LabelRole, label_9);

        spnJITMaximumBlockSize = new QSpinBox(tab_3);
        spnJITMaximumBlockSize->setObjectName("spnJITMaximumBlockSize");
        spnJITMaximumBlockSize->setMinimum(1);
        spnJITMaximumBlockSize->setMaximum(32);
        spnJITMaximumBlockSize->setValue(32);

        formLayout_5->setWidget(1, QFormLayout::ItemRole::FieldRole, spnJITMaximumBlockSize);

        chkJITBranchOptimisations = new QCheckBox(tab_3);
        chkJITBranchOptimisations->setObjectName("chkJITBranchOptimisations");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::LabelRole, chkJITBranchOptimisations);

        chkJITLiteralOptimisations = new QCheckBox(tab_3);
        chkJITLiteralOptimisations->setObjectName("chkJITLiteralOptimisations");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::LabelRole, chkJITLiteralOptimisations);

        chkJITFastMemory = new QCheckBox(tab_3);
        chkJITFastMemory->setObjectName("chkJITFastMemory");

        formLayout_5->setWidget(4, QFormLayout::ItemRole::LabelRole, chkJITFastMemory);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_5->setItem(5, QFormLayout::ItemRole::LabelRole, verticalSpacer);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        gridLayout_4 = new QGridLayout(tab_5);
        gridLayout_4->setObjectName("gridLayout_4");
        btnDLDISDBrowse = new QPushButton(tab_5);
        btnDLDISDBrowse->setObjectName("btnDLDISDBrowse");

        gridLayout_4->addWidget(btnDLDISDBrowse, 1, 2, 1, 1);

        btnDLDIFolderBrowse = new QPushButton(tab_5);
        btnDLDIFolderBrowse->setObjectName("btnDLDIFolderBrowse");

        gridLayout_4->addWidget(btnDLDIFolderBrowse, 4, 2, 1, 1);

        txtDLDIFolder = new QLineEdit(tab_5);
        txtDLDIFolder->setObjectName("txtDLDIFolder");

        gridLayout_4->addWidget(txtDLDIFolder, 4, 1, 1, 1);

        label_12 = new QLabel(tab_5);
        label_12->setObjectName("label_12");

        gridLayout_4->addWidget(label_12, 2, 0, 1, 1);

        cbDLDIFolder = new QCheckBox(tab_5);
        cbDLDIFolder->setObjectName("cbDLDIFolder");

        gridLayout_4->addWidget(cbDLDIFolder, 4, 0, 1, 1);

        cbxDLDISize = new QComboBox(tab_5);
        cbxDLDISize->setObjectName("cbxDLDISize");

        gridLayout_4->addWidget(cbxDLDISize, 2, 1, 1, 1);

        cbDLDIEnable = new QCheckBox(tab_5);
        cbDLDIEnable->setObjectName("cbDLDIEnable");

        gridLayout_4->addWidget(cbDLDIEnable, 0, 0, 1, 3);

        txtDLDISDPath = new QPathInput(tab_5);
        txtDLDISDPath->setObjectName("txtDLDISDPath");

        gridLayout_4->addWidget(txtDLDISDPath, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 5, 0, 1, 1);

        label_11 = new QLabel(tab_5);
        label_11->setObjectName("label_11");

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        cbDLDIReadOnly = new QCheckBox(tab_5);
        cbDLDIReadOnly->setObjectName("cbDLDIReadOnly");

        gridLayout_4->addWidget(cbDLDIReadOnly, 3, 0, 1, 3);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        gridLayout_3 = new QGridLayout(tab_6);
        gridLayout_3->setObjectName("gridLayout_3");
        label_16 = new QLabel(tab_6);
        label_16->setObjectName("label_16");

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 5, 0, 1, 1);

        label_17 = new QLabel(tab_6);
        label_17->setObjectName("label_17");

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        cbGdbEnabled = new QCheckBox(tab_6);
        cbGdbEnabled->setObjectName("cbGdbEnabled");

        gridLayout_3->addWidget(cbGdbEnabled, 0, 0, 1, 3);

        label_18 = new QLabel(tab_6);
        label_18->setObjectName("label_18");

        gridLayout_3->addWidget(label_18, 4, 0, 1, 7);

        label_19 = new QLabel(tab_6);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 3, 0, 1, 7);

        cbGdbBOSA9 = new QCheckBox(tab_6);
        cbGdbBOSA9->setObjectName("cbGdbBOSA9");

        gridLayout_3->addWidget(cbGdbBOSA9, 1, 6, 1, 1);

        intGdbPortA9 = new QSpinBox(tab_6);
        intGdbPortA9->setObjectName("intGdbPortA9");
        intGdbPortA9->setMinimum(1000);
        intGdbPortA9->setMaximum(65535);
        intGdbPortA9->setValue(3333);

        gridLayout_3->addWidget(intGdbPortA9, 1, 1, 1, 5);

        intGdbPortA7 = new QSpinBox(tab_6);
        intGdbPortA7->setObjectName("intGdbPortA7");
        intGdbPortA7->setMinimum(1000);
        intGdbPortA7->setMaximum(65535);
        intGdbPortA7->setValue(3334);

        gridLayout_3->addWidget(intGdbPortA7, 2, 1, 1, 5);

        cbGdbBOSA7 = new QCheckBox(tab_6);
        cbGdbBOSA7->setObjectName("cbGdbBOSA7");

        gridLayout_3->addWidget(cbGdbBOSA7, 2, 6, 1, 1);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(EmuSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cbxConsoleType, chkDirectBoot);
        QWidget::setTabOrder(chkDirectBoot, chkExternalBIOS);
        QWidget::setTabOrder(chkExternalBIOS, txtBIOS9Path);
        QWidget::setTabOrder(txtBIOS9Path, btnBIOS9Browse);
        QWidget::setTabOrder(btnBIOS9Browse, txtBIOS7Path);
        QWidget::setTabOrder(txtBIOS7Path, btnBIOS7Browse);
        QWidget::setTabOrder(btnBIOS7Browse, txtFirmwarePath);
        QWidget::setTabOrder(txtFirmwarePath, btnFirmwareBrowse);
        QWidget::setTabOrder(btnFirmwareBrowse, txtDSiBIOS9Path);
        QWidget::setTabOrder(txtDSiBIOS9Path, btnDSiBIOS9Browse);
        QWidget::setTabOrder(btnDSiBIOS9Browse, txtDSiBIOS7Path);
        QWidget::setTabOrder(txtDSiBIOS7Path, btnDSiBIOS7Browse);
        QWidget::setTabOrder(btnDSiBIOS7Browse, txtDSiFirmwarePath);
        QWidget::setTabOrder(txtDSiFirmwarePath, btnDSiFirmwareBrowse);
        QWidget::setTabOrder(btnDSiFirmwareBrowse, txtDSiNANDPath);
        QWidget::setTabOrder(txtDSiNANDPath, btnDSiNANDBrowse);
        QWidget::setTabOrder(btnDSiNANDBrowse, cbDSiSDEnable);
        QWidget::setTabOrder(cbDSiSDEnable, txtDSiSDPath);
        QWidget::setTabOrder(txtDSiSDPath, btnDSiSDBrowse);
        QWidget::setTabOrder(btnDSiSDBrowse, cbxDSiSDSize);
        QWidget::setTabOrder(cbxDSiSDSize, cbDSiSDReadOnly);
        QWidget::setTabOrder(cbDSiSDReadOnly, cbDSiSDFolder);
        QWidget::setTabOrder(cbDSiSDFolder, txtDSiSDFolder);
        QWidget::setTabOrder(txtDSiSDFolder, btnDSiSDFolderBrowse);
        QWidget::setTabOrder(btnDSiSDFolderBrowse, chkEnableJIT);
        QWidget::setTabOrder(chkEnableJIT, spnJITMaximumBlockSize);
        QWidget::setTabOrder(spnJITMaximumBlockSize, chkJITBranchOptimisations);
        QWidget::setTabOrder(chkJITBranchOptimisations, chkJITLiteralOptimisations);
        QWidget::setTabOrder(chkJITLiteralOptimisations, chkJITFastMemory);
        QWidget::setTabOrder(chkJITFastMemory, cbDLDIEnable);
        QWidget::setTabOrder(cbDLDIEnable, txtDLDISDPath);
        QWidget::setTabOrder(txtDLDISDPath, btnDLDISDBrowse);
        QWidget::setTabOrder(btnDLDISDBrowse, cbxDLDISize);
        QWidget::setTabOrder(cbxDLDISize, cbDLDIReadOnly);
        QWidget::setTabOrder(cbDLDIReadOnly, cbDLDIFolder);
        QWidget::setTabOrder(cbDLDIFolder, txtDLDIFolder);
        QWidget::setTabOrder(txtDLDIFolder, btnDLDIFolderBrowse);

        retranslateUi(EmuSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EmuSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EmuSettingsDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EmuSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *EmuSettingsDialog)
    {
        EmuSettingsDialog->setWindowTitle(QCoreApplication::translate("EmuSettingsDialog", "Emu settings - melonDS", nullptr));
#if QT_CONFIG(whatsthis)
        cbxConsoleType->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>The type of console to emulate</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        chkDirectBoot->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>When loading a ROM, completely skip the regular boot process (&quot;Nintendo DS&quot; screen) to boot the ROM directly.</p><p><br/></p><p>Note: if your firmware dump isn't bootable, the ROM will be booted directly regardless of this setting.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        chkDirectBoot->setText(QCoreApplication::translate("EmuSettingsDialog", "Boot game directly", nullptr));
        label_4->setText(QCoreApplication::translate("EmuSettingsDialog", "Console type:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("EmuSettingsDialog", "General", nullptr));
        btnFirmwareBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
        label_3->setText(QCoreApplication::translate("EmuSettingsDialog", "DS firmware:", nullptr));
        btnBIOS7Browse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(statustip)
        txtBIOS9Path->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        txtBIOS9Path->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DS-mode ARM9 BIOS</p><p>Size should be 4 KB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("EmuSettingsDialog", "DS ARM7 BIOS:", nullptr));
#if QT_CONFIG(whatsthis)
        txtBIOS7Path->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DS-mode ARM7 BIOS</p><p>Size should be 16 KB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        txtFirmwarePath->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DS-mode firmware</p><p><br/></p><p>Possible firmwares:</p><p>* 128 KB: DS-mode firmware from a DSi or 3DS. Not bootable.</p><p>* 256 KB: regular DS firmware.</p><p>* 512 KB: iQue DS firmware.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("EmuSettingsDialog", "DS ARM9 BIOS:", nullptr));
        btnBIOS9Browse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        chkExternalBIOS->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Allows using external user-provided BIOS and firmware dumps.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        chkExternalBIOS->setText(QCoreApplication::translate("EmuSettingsDialog", "Use external BIOS/firmware files", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("EmuSettingsDialog", "DS-mode", nullptr));
        label_8->setText(QCoreApplication::translate("EmuSettingsDialog", "DSi NAND:", nullptr));
#if QT_CONFIG(whatsthis)
        txtDSiBIOS9Path->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DSi-mode ARM9 BIOS</p><p><br/></p><p>Size should be 64 KB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        txtDSiSDFolder->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Sync the emulated SD card to the given folder. The folder's contents will be copied to the SD image, and any change made to the SD image will be reflected to the folder.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        cbDSiSDFolder->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Sync the emulated SD card to the given folder. The folder's contents will be copied to the SD image, and any change made to the SD image will be reflected to the folder.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDSiSDFolder->setText(QCoreApplication::translate("EmuSettingsDialog", "Sync SD to folder:", nullptr));
        label_14->setText(QString());
        label_5->setText(QCoreApplication::translate("EmuSettingsDialog", "DSi ARM9 BIOS:", nullptr));
        btnDSiBIOS9Browse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        txtDSiBIOS7Path->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DSi-mode ARM7 BIOS</p><p><br/></p><p>Size should be 64 KB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_15->setText(QCoreApplication::translate("EmuSettingsDialog", "DSi mode requires external DSi BIOS/firmware/NAND", nullptr));
        label_13->setText(QCoreApplication::translate("EmuSettingsDialog", "Image size:", nullptr));
        label_6->setText(QCoreApplication::translate("EmuSettingsDialog", "DSi ARM7 BIOS:", nullptr));
        btnDSiBIOS7Browse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
        btnDSiSDBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
        label_7->setText(QCoreApplication::translate("EmuSettingsDialog", "DSi firmware:", nullptr));
#if QT_CONFIG(whatsthis)
        cbDSiSDReadOnly->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Make the emulated SD card read-only.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDSiSDReadOnly->setText(QCoreApplication::translate("EmuSettingsDialog", "Read-only SD", nullptr));
#if QT_CONFIG(whatsthis)
        cbDSiSDEnable->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Simulate a SD card being inserted in the DSi's SD slot.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDSiSDEnable->setText(QCoreApplication::translate("EmuSettingsDialog", "Enable DSi SD card", nullptr));
        btnDSiFirmwareBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
        btnDSiNANDBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        txtDSiSDPath->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>SD image file for emulating the DSi's SD card. A blank image file will be created if it doesn't already exist.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        txtDSiFirmwarePath->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DSi-mode firmware (used for DS-mode backwards compatibility)</p><p><br/></p><p>Size should be 128 KB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        txtDSiNANDPath->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>DSi NAND dump</p><p><br/></p><p>Should have 'nocash footer' at the end</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        cbxDSiSDSize->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Size of the SD image.</p><p><br/></p><p>If set to Auto:</p><p>* if an image file exists, the volume size will be that of the image file</p><p>* if no image file exists and folder sync is enabled, the volume size will be determined from the synced folder's contents</p><p>* otherwise, the volume size will default to 512 MB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_10->setText(QCoreApplication::translate("EmuSettingsDialog", "SD card image:", nullptr));
        btnDSiSDFolderBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        cbDSiFullBIOSBoot->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Boot the system from scratch by running the full boot ROMs, instead of starting with the second-stage loader. Requires a full BIOS/bootROM dump.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDSiFullBIOSBoot->setText(QCoreApplication::translate("EmuSettingsDialog", "Full BIOS boot", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("EmuSettingsDialog", "DSi-mode", nullptr));
        chkEnableJIT->setText(QCoreApplication::translate("EmuSettingsDialog", "Enable JIT recompiler", nullptr));
        label_9->setText(QCoreApplication::translate("EmuSettingsDialog", "Maximum JIT block size:", nullptr));
        chkJITBranchOptimisations->setText(QCoreApplication::translate("EmuSettingsDialog", "Branch optimisations", nullptr));
        chkJITLiteralOptimisations->setText(QCoreApplication::translate("EmuSettingsDialog", "Literal optimisations", nullptr));
        chkJITFastMemory->setText(QCoreApplication::translate("EmuSettingsDialog", "Fast memory", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("EmuSettingsDialog", "CPU emulation", nullptr));
        btnDLDISDBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
        btnDLDIFolderBrowse->setText(QCoreApplication::translate("EmuSettingsDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        txtDLDIFolder->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Sync the emulated SD card to the given folder. The folder's contents will be copied to the SD image, and any change made to the SD image will be reflected to the folder.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_12->setText(QCoreApplication::translate("EmuSettingsDialog", "Image size:", nullptr));
#if QT_CONFIG(whatsthis)
        cbDLDIFolder->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Sync the emulated SD card to the given folder. The folder's contents will be copied to the SD image, and any change made to the SD image will be reflected to the folder.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDLDIFolder->setText(QCoreApplication::translate("EmuSettingsDialog", "Sync SD to folder:", nullptr));
#if QT_CONFIG(whatsthis)
        cbxDLDISize->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Size of the SD image.</p><p><br/></p><p>If set to Auto:</p><p>* if an image file exists, the volume size will be that of the image file</p><p>* if no image file exists and folder sync is enabled, the volume size will be determined from the synced folder's contents</p><p>* otherwise, the volume size will default to 512 MB</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        cbDLDIEnable->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Enable the built-in DLDI driver, to let homebrew access files from an emulated SD card.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDLDIEnable->setText(QCoreApplication::translate("EmuSettingsDialog", "Enable DLDI (for homebrew)", nullptr));
#if QT_CONFIG(whatsthis)
        txtDLDISDPath->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>SD card image file to be used for DLDI. A blank image file will be created if it doesn't already exist.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("EmuSettingsDialog", "SD card image:", nullptr));
#if QT_CONFIG(whatsthis)
        cbDLDIReadOnly->setWhatsThis(QCoreApplication::translate("EmuSettingsDialog", "<html><head/><body><p>Make the emulated SD card read-only.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbDLDIReadOnly->setText(QCoreApplication::translate("EmuSettingsDialog", "Read-only SD", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("EmuSettingsDialog", "DLDI", nullptr));
        label_16->setText(QCoreApplication::translate("EmuSettingsDialog", "ARM9 port", nullptr));
        label_17->setText(QCoreApplication::translate("EmuSettingsDialog", "ARM7 port", nullptr));
        cbGdbEnabled->setText(QCoreApplication::translate("EmuSettingsDialog", "Enable GDB stub", nullptr));
        label_18->setText(QCoreApplication::translate("EmuSettingsDialog", "Note: melonDS must be restarted in order for these changes to have effect", nullptr));
        label_19->setText(QCoreApplication::translate("EmuSettingsDialog", "Note: GDB stub cannot be used together with the JIT recompiler", nullptr));
        cbGdbBOSA9->setText(QCoreApplication::translate("EmuSettingsDialog", "Break on startup", nullptr));
        cbGdbBOSA7->setText(QCoreApplication::translate("EmuSettingsDialog", "Break on startup", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("EmuSettingsDialog", "Devtools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmuSettingsDialog: public Ui_EmuSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMUSETTINGSDIALOG_H
