/********************************************************************************
** Form generated from reading UI file 'WifiSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIFISETTINGSDIALOG_H
#define UI_WIFISETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WifiSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *rbIndirectMode;
    QRadioButton *rbDirectMode;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *lblAdapterIP;
    QLabel *label_2;
    QComboBox *cbxDirectAdapter;
    QLabel *label;
    QLabel *lblAdapterMAC;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WifiSettingsDialog)
    {
        if (WifiSettingsDialog->objectName().isEmpty())
            WifiSettingsDialog->setObjectName("WifiSettingsDialog");
        WifiSettingsDialog->resize(570, 341);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WifiSettingsDialog->sizePolicy().hasHeightForWidth());
        WifiSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(WifiSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_4 = new QLabel(WifiSettingsDialog);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    margin-bottom: 12px;\n"
"}"));
        label_4->setWordWrap(true);
        label_4->setMargin(0);

        verticalLayout->addWidget(label_4);

        groupBox = new QGroupBox(WifiSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        rbIndirectMode = new QRadioButton(groupBox);
        rbIndirectMode->setObjectName("rbIndirectMode");

        gridLayout->addWidget(rbIndirectMode, 1, 0, 1, 1);

        rbDirectMode = new QRadioButton(groupBox);
        rbDirectMode->setObjectName("rbDirectMode");

        gridLayout->addWidget(rbDirectMode, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(WifiSettingsDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        lblAdapterIP = new QLabel(groupBox_3);
        lblAdapterIP->setObjectName("lblAdapterIP");

        gridLayout_3->addWidget(lblAdapterIP, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        cbxDirectAdapter = new QComboBox(groupBox_3);
        cbxDirectAdapter->setObjectName("cbxDirectAdapter");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbxDirectAdapter->sizePolicy().hasHeightForWidth());
        cbxDirectAdapter->setSizePolicy(sizePolicy1);
        cbxDirectAdapter->setMinimumSize(QSize(300, 0));

        gridLayout_3->addWidget(cbxDirectAdapter, 1, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        lblAdapterMAC = new QLabel(groupBox_3);
        lblAdapterMAC->setObjectName("lblAdapterMAC");

        gridLayout_3->addWidget(lblAdapterMAC, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(WifiSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WifiSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, WifiSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, WifiSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(WifiSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *WifiSettingsDialog)
    {
        WifiSettingsDialog->setWindowTitle(QCoreApplication::translate("WifiSettingsDialog", "Wifi settings - melonDS", nullptr));
        label_4->setText(QCoreApplication::translate("WifiSettingsDialog", "<html><head/><body><p>These settings control how melonDS connects to the internet for online features (typically called &quot;Nintendo Wi-Fi Connection&quot;) in games. </p><p>Local multiplayer features do not use the same network protocols as online play, so the settings here will have no effect on them.</p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WifiSettingsDialog", "Network mode", nullptr));
#if QT_CONFIG(whatsthis)
        rbIndirectMode->setWhatsThis(QCoreApplication::translate("WifiSettingsDialog", "<html><head/><body><p>Indirect mode uses libslirp. It requires no extra setup and is easy to use.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbIndirectMode->setText(QCoreApplication::translate("WifiSettingsDialog", "Indirect mode (uses libslirp, recommended)", nullptr));
#if QT_CONFIG(whatsthis)
        rbDirectMode->setWhatsThis(QCoreApplication::translate("WifiSettingsDialog", "<html><head/><body><p>Direct mode directly routes network traffic to the host network. It is the most reliable, but requires an ethernet connection.</p><p><br/></p><p>Non-direct mode uses a layer of emulation to get around this, but is more prone to problems.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbDirectMode->setText(QCoreApplication::translate("WifiSettingsDialog", "Direct mode [TEXT PLACEHOLDER]", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("WifiSettingsDialog", "Direct mode settings", nullptr));
        lblAdapterIP->setText(QCoreApplication::translate("WifiSettingsDialog", "[PLACEHOLDER]", nullptr));
        label_2->setText(QCoreApplication::translate("WifiSettingsDialog", "MAC address:", nullptr));
#if QT_CONFIG(whatsthis)
        cbxDirectAdapter->setWhatsThis(QCoreApplication::translate("WifiSettingsDialog", "<html><head/><body><p>Selects the network adapter through which to route network traffic under direct mode.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("WifiSettingsDialog", "Network adapter:", nullptr));
        lblAdapterMAC->setText(QCoreApplication::translate("WifiSettingsDialog", "[PLACEHOLDER]", nullptr));
        label_3->setText(QCoreApplication::translate("WifiSettingsDialog", "IP address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WifiSettingsDialog: public Ui_WifiSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIFISETTINGSDIALOG_H
