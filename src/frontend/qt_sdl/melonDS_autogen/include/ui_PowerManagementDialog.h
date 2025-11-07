/********************************************************************************
** Form generated from reading UI file 'PowerManagementDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWERMANAGEMENTDIALOG_H
#define UI_POWERMANAGEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PowerManagementDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGroupBox *grpDSiBattery;
    QGridLayout *gridLayout_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbDSiBatteryCharging;
    QLabel *label_3;
    QLabel *label_1;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *sliderDSiBatteryLevel;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *grpDSBattery;
    QGridLayout *gridLayout_2;
    QRadioButton *rbDSBatteryLow;
    QLabel *label;
    QRadioButton *rbDSBatteryOkay;
    QLabel *lblInstanceNum;

    void setupUi(QDialog *PowerManagementDialog)
    {
        if (PowerManagementDialog->objectName().isEmpty())
            PowerManagementDialog->setObjectName("PowerManagementDialog");
        PowerManagementDialog->resize(562, 288);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PowerManagementDialog->sizePolicy().hasHeightForWidth());
        PowerManagementDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(PowerManagementDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        buttonBox = new QDialogButtonBox(PowerManagementDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        grpDSiBattery = new QGroupBox(PowerManagementDialog);
        grpDSiBattery->setObjectName("grpDSiBattery");
        gridLayout_6 = new QGridLayout(grpDSiBattery);
        gridLayout_6->setObjectName("gridLayout_6");
        label_2 = new QLabel(grpDSiBattery);
        label_2->setObjectName("label_2");

        gridLayout_6->addWidget(label_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 1, 1, 1, 1);

        cbDSiBatteryCharging = new QCheckBox(grpDSiBattery);
        cbDSiBatteryCharging->setObjectName("cbDSiBatteryCharging");

        gridLayout_6->addWidget(cbDSiBatteryCharging, 0, 0, 1, 5);

        label_3 = new QLabel(grpDSiBattery);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_3, 1, 8, 1, 1);

        label_1 = new QLabel(grpDSiBattery);
        label_1->setObjectName("label_1");
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_1, 1, 0, 1, 1);

        label_4 = new QLabel(grpDSiBattery);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/dsibattery/dsi_batteryalmostempty.svg")));
        label_4->setScaledContents(false);

        gridLayout_6->addWidget(label_4, 2, 3, 1, 1);

        label_5 = new QLabel(grpDSiBattery);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/dsibattery/dsi_batterylow.svg")));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_5, 2, 4, 1, 1);

        label_6 = new QLabel(grpDSiBattery);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/dsibattery/dsi_battery2.svg")));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_6, 2, 5, 1, 1);

        label_7 = new QLabel(grpDSiBattery);
        label_7->setObjectName("label_7");
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/dsibattery/dsi_battery3.svg")));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_7, 2, 6, 1, 1);

        label_8 = new QLabel(grpDSiBattery);
        label_8->setObjectName("label_8");
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/dsibattery/dsi_batteryfull.svg")));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_8, 2, 7, 1, 1);

        sliderDSiBatteryLevel = new QSlider(grpDSiBattery);
        sliderDSiBatteryLevel->setObjectName("sliderDSiBatteryLevel");
        sliderDSiBatteryLevel->setMaximum(4);
        sliderDSiBatteryLevel->setPageStep(1);
        sliderDSiBatteryLevel->setOrientation(Qt::Horizontal);
        sliderDSiBatteryLevel->setTickPosition(QSlider::TicksBothSides);
        sliderDSiBatteryLevel->setTickInterval(1);

        gridLayout_6->addWidget(sliderDSiBatteryLevel, 1, 3, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 2, 0, 1, 3);


        gridLayout->addWidget(grpDSiBattery, 3, 0, 1, 1);

        grpDSBattery = new QGroupBox(PowerManagementDialog);
        grpDSBattery->setObjectName("grpDSBattery");
        gridLayout_2 = new QGridLayout(grpDSBattery);
        gridLayout_2->setObjectName("gridLayout_2");
        rbDSBatteryLow = new QRadioButton(grpDSBattery);
        rbDSBatteryLow->setObjectName("rbDSBatteryLow");

        gridLayout_2->addWidget(rbDSBatteryLow, 1, 1, 1, 1);

        label = new QLabel(grpDSBattery);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 2, 1);

        rbDSBatteryOkay = new QRadioButton(grpDSBattery);
        rbDSBatteryOkay->setObjectName("rbDSBatteryOkay");

        gridLayout_2->addWidget(rbDSBatteryOkay, 0, 1, 1, 1);


        gridLayout->addWidget(grpDSBattery, 1, 0, 1, 1);

        lblInstanceNum = new QLabel(PowerManagementDialog);
        lblInstanceNum->setObjectName("lblInstanceNum");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblInstanceNum->sizePolicy().hasHeightForWidth());
        lblInstanceNum->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblInstanceNum, 0, 0, 1, 1);

        QWidget::setTabOrder(rbDSBatteryOkay, rbDSBatteryLow);
        QWidget::setTabOrder(rbDSBatteryLow, cbDSiBatteryCharging);
        QWidget::setTabOrder(cbDSiBatteryCharging, sliderDSiBatteryLevel);

        retranslateUi(PowerManagementDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PowerManagementDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PowerManagementDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PowerManagementDialog);
    } // setupUi

    void retranslateUi(QDialog *PowerManagementDialog)
    {
        PowerManagementDialog->setWindowTitle(QCoreApplication::translate("PowerManagementDialog", "Power management - melonDS", nullptr));
        grpDSiBattery->setTitle(QCoreApplication::translate("PowerManagementDialog", "DSi Battery", nullptr));
        label_2->setText(QCoreApplication::translate("PowerManagementDialog", "Almost Empty", nullptr));
        cbDSiBatteryCharging->setText(QCoreApplication::translate("PowerManagementDialog", "Charging", nullptr));
        label_3->setText(QCoreApplication::translate("PowerManagementDialog", "Full", nullptr));
        label_1->setText(QCoreApplication::translate("PowerManagementDialog", "Battery Level", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        grpDSBattery->setTitle(QCoreApplication::translate("PowerManagementDialog", "DS Battery", nullptr));
        rbDSBatteryLow->setText(QCoreApplication::translate("PowerManagementDialog", "Low", nullptr));
        label->setText(QCoreApplication::translate("PowerManagementDialog", "Battery Level", nullptr));
        rbDSBatteryOkay->setText(QCoreApplication::translate("PowerManagementDialog", "Okay", nullptr));
        lblInstanceNum->setText(QCoreApplication::translate("PowerManagementDialog", "Configuring settings for instance X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PowerManagementDialog: public Ui_PowerManagementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWERMANAGEMENTDIALOG_H
