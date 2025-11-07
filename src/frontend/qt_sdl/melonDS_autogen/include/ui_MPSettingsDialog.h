/********************************************************************************
** Form generated from reading UI file 'MPSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPSETTINGSDIALOG_H
#define UI_MPSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MPSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *rbAudioOneOnly;
    QRadioButton *rbAudioAll;
    QRadioButton *rbAudioActiveOnly;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QSpinBox *sbReceiveTimeout;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MPSettingsDialog)
    {
        if (MPSettingsDialog->objectName().isEmpty())
            MPSettingsDialog->setObjectName("MPSettingsDialog");
        MPSettingsDialog->resize(466, 202);
        verticalLayout = new QVBoxLayout(MPSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(MPSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        rbAudioOneOnly = new QRadioButton(groupBox);
        rbAudioOneOnly->setObjectName("rbAudioOneOnly");

        gridLayout_2->addWidget(rbAudioOneOnly, 1, 0, 1, 1);

        rbAudioAll = new QRadioButton(groupBox);
        rbAudioAll->setObjectName("rbAudioAll");

        gridLayout_2->addWidget(rbAudioAll, 0, 0, 1, 1);

        rbAudioActiveOnly = new QRadioButton(groupBox);
        rbAudioActiveOnly->setObjectName("rbAudioActiveOnly");

        gridLayout_2->addWidget(rbAudioActiveOnly, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MPSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        sbReceiveTimeout = new QSpinBox(groupBox_2);
        sbReceiveTimeout->setObjectName("sbReceiveTimeout");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sbReceiveTimeout->sizePolicy().hasHeightForWidth());
        sbReceiveTimeout->setSizePolicy(sizePolicy);
        sbReceiveTimeout->setMinimumSize(QSize(50, 0));
        sbReceiveTimeout->setMaximum(1000);

        gridLayout->addWidget(sbReceiveTimeout, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(MPSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(rbAudioAll, rbAudioOneOnly);
        QWidget::setTabOrder(rbAudioOneOnly, rbAudioActiveOnly);
        QWidget::setTabOrder(rbAudioActiveOnly, sbReceiveTimeout);

        retranslateUi(MPSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MPSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MPSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MPSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *MPSettingsDialog)
    {
        MPSettingsDialog->setWindowTitle(QCoreApplication::translate("MPSettingsDialog", "Multiplayer settings - melonDS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MPSettingsDialog", "Audio output", nullptr));
        rbAudioOneOnly->setText(QCoreApplication::translate("MPSettingsDialog", "Instance 1 only", nullptr));
        rbAudioAll->setText(QCoreApplication::translate("MPSettingsDialog", "All instances", nullptr));
        rbAudioActiveOnly->setText(QCoreApplication::translate("MPSettingsDialog", "Active instance only", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MPSettingsDialog", "Network", nullptr));
        label->setText(QCoreApplication::translate("MPSettingsDialog", "Data reception timeout: ", nullptr));
        label_2->setText(QCoreApplication::translate("MPSettingsDialog", "milliseconds", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MPSettingsDialog: public Ui_MPSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPSETTINGSDIALOG_H
