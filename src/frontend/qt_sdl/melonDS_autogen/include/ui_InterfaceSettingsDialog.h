/********************************************************************************
** Form generated from reading UI file 'InterfaceSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACESETTINGSDIALOG_H
#define UI_INTERFACESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InterfaceSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *cbxUITheme;
    QCheckBox *cbMouseHide;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinMouseHideSeconds;
    QLabel *label_2;
    QCheckBox *cbPauseLostFocus;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_3;
    QDoubleSpinBox *spinTargetFPS;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pbQuarter;
    QPushButton *pbHalf;
    QDoubleSpinBox *spinSlow;
    QDoubleSpinBox *spinFFW;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pbAccurate;
    QPushButton *pbClean;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pb2x;
    QPushButton *pb3x;
    QPushButton *pbMAX;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InterfaceSettingsDialog)
    {
        if (InterfaceSettingsDialog->objectName().isEmpty())
            InterfaceSettingsDialog->setObjectName("InterfaceSettingsDialog");
        InterfaceSettingsDialog->resize(389, 356);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InterfaceSettingsDialog->sizePolicy().hasHeightForWidth());
        InterfaceSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(InterfaceSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        groupBox = new QGroupBox(InterfaceSettingsDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        cbxUITheme = new QComboBox(groupBox);
        cbxUITheme->setObjectName("cbxUITheme");

        horizontalLayout_2->addWidget(cbxUITheme);


        verticalLayout_2->addLayout(horizontalLayout_2);

        cbMouseHide = new QCheckBox(groupBox);
        cbMouseHide->setObjectName("cbMouseHide");

        verticalLayout_2->addWidget(cbMouseHide);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(18, -1, -1, -1);
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinMouseHideSeconds = new QSpinBox(groupBox);
        spinMouseHideSeconds->setObjectName("spinMouseHideSeconds");

        horizontalLayout->addWidget(spinMouseHideSeconds);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        cbPauseLostFocus = new QCheckBox(groupBox);
        cbPauseLostFocus->setObjectName("cbPauseLostFocus");

        verticalLayout_2->addWidget(cbPauseLostFocus);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(InterfaceSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(2);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinTargetFPS = new QDoubleSpinBox(groupBox_2);
        spinTargetFPS->setObjectName("spinTargetFPS");
        spinTargetFPS->setDecimals(4);
        spinTargetFPS->setMinimum(0.000100000000000);
        spinTargetFPS->setMaximum(1000.000000000000000);
        spinTargetFPS->setValue(59.826099999999997);

        gridLayout->addWidget(spinTargetFPS, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pbQuarter = new QPushButton(groupBox_2);
        pbQuarter->setObjectName("pbQuarter");
        pbQuarter->setMaximumSize(QSize(63, 16777215));

        horizontalLayout_5->addWidget(pbQuarter);

        pbHalf = new QPushButton(groupBox_2);
        pbHalf->setObjectName("pbHalf");
        pbHalf->setMaximumSize(QSize(62, 16777215));

        horizontalLayout_5->addWidget(pbHalf);


        gridLayout->addLayout(horizontalLayout_5, 2, 2, 1, 1);

        spinSlow = new QDoubleSpinBox(groupBox_2);
        spinSlow->setObjectName("spinSlow");
        spinSlow->setDecimals(4);
        spinSlow->setMinimum(0.000100000000000);
        spinSlow->setMaximum(1000.000000000000000);
        spinSlow->setValue(29.913000000000000);

        gridLayout->addWidget(spinSlow, 2, 1, 1, 1);

        spinFFW = new QDoubleSpinBox(groupBox_2);
        spinFFW->setObjectName("spinFFW");
        spinFFW->setDecimals(4);
        spinFFW->setMinimum(0.000100000000000);
        spinFFW->setMaximum(1000.000000000000000);
        spinFFW->setValue(1000.000000000000000);

        gridLayout->addWidget(spinFFW, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pbAccurate = new QPushButton(groupBox_2);
        pbAccurate->setObjectName("pbAccurate");
        pbAccurate->setMaximumSize(QSize(63, 16777215));

        horizontalLayout_10->addWidget(pbAccurate);

        pbClean = new QPushButton(groupBox_2);
        pbClean->setObjectName("pbClean");
        pbClean->setMaximumSize(QSize(62, 16777215));

        horizontalLayout_10->addWidget(pbClean);


        gridLayout->addLayout(horizontalLayout_10, 0, 2, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pb2x = new QPushButton(groupBox_2);
        pb2x->setObjectName("pb2x");
        pb2x->setMaximumSize(QSize(41, 16777215));

        horizontalLayout_9->addWidget(pb2x);

        pb3x = new QPushButton(groupBox_2);
        pb3x->setObjectName("pb3x");
        pb3x->setMaximumSize(QSize(41, 16777215));

        horizontalLayout_9->addWidget(pb3x);

        pbMAX = new QPushButton(groupBox_2);
        pbMAX->setObjectName("pbMAX");
        pbMAX->setMaximumSize(QSize(41, 16777215));

        horizontalLayout_9->addWidget(pbMAX);


        gridLayout->addLayout(horizontalLayout_9, 1, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(InterfaceSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(cbxUITheme);
        label->setBuddy(spinMouseHideSeconds);
        label_2->setBuddy(spinMouseHideSeconds);
        label_3->setBuddy(spinFFW);
#endif // QT_CONFIG(shortcut)

        retranslateUi(InterfaceSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, InterfaceSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, InterfaceSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(InterfaceSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *InterfaceSettingsDialog)
    {
        InterfaceSettingsDialog->setWindowTitle(QCoreApplication::translate("InterfaceSettingsDialog", "Interface settings - melonDS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InterfaceSettingsDialog", "User interface", nullptr));
        label_4->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Theme", nullptr));
        cbMouseHide->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Hide mouse after inactivity", nullptr));
        label->setText(QCoreApplication::translate("InterfaceSettingsDialog", "After", nullptr));
        label_2->setText(QCoreApplication::translate("InterfaceSettingsDialog", "seconds", nullptr));
        cbPauseLostFocus->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Pause emulation when window is not in focus", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("InterfaceSettingsDialog", "Framerate ", nullptr));
        label_5->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Target FPS", nullptr));
        label_3->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Fast-Forward", nullptr));
        spinTargetFPS->setSuffix(QCoreApplication::translate("InterfaceSettingsDialog", " FPS", nullptr));
        pbQuarter->setText(QCoreApplication::translate("InterfaceSettingsDialog", "1/4", nullptr));
        pbHalf->setText(QCoreApplication::translate("InterfaceSettingsDialog", "1/2", nullptr));
        spinSlow->setSuffix(QCoreApplication::translate("InterfaceSettingsDialog", " FPS", nullptr));
        spinFFW->setSuffix(QCoreApplication::translate("InterfaceSettingsDialog", " FPS", nullptr));
        label_6->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Slow-Mo", nullptr));
        pbAccurate->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Accurate", nullptr));
        pbClean->setText(QCoreApplication::translate("InterfaceSettingsDialog", "Clean", nullptr));
        pb2x->setText(QCoreApplication::translate("InterfaceSettingsDialog", "2x", nullptr));
        pb3x->setText(QCoreApplication::translate("InterfaceSettingsDialog", "3x", nullptr));
        pbMAX->setText(QCoreApplication::translate("InterfaceSettingsDialog", "MAX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfaceSettingsDialog: public Ui_InterfaceSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACESETTINGSDIALOG_H
