/********************************************************************************
** Form generated from reading UI file 'DateTimeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEDIALOG_H
#define UI_DATETIMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DateTimeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *lblCustomTime;
    QLabel *label_2;
    QCheckBox *chkChangeTime;
    QDateTimeEdit *txtNewCustomTime;
    QCheckBox *chkResetTime;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DateTimeDialog)
    {
        if (DateTimeDialog->objectName().isEmpty())
            DateTimeDialog->setObjectName("DateTimeDialog");
        DateTimeDialog->resize(357, 161);
        verticalLayout = new QVBoxLayout(DateTimeDialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(DateTimeDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lblCustomTime = new QLabel(groupBox_2);
        lblCustomTime->setObjectName("lblCustomTime");

        gridLayout_2->addWidget(lblCustomTime, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        chkChangeTime = new QCheckBox(groupBox_2);
        chkChangeTime->setObjectName("chkChangeTime");

        gridLayout_2->addWidget(chkChangeTime, 2, 0, 1, 1);

        txtNewCustomTime = new QDateTimeEdit(groupBox_2);
        txtNewCustomTime->setObjectName("txtNewCustomTime");
        txtNewCustomTime->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        txtNewCustomTime->setMaximumDateTime(QDateTime(QDate(2099, 12, 31), QTime(23, 59, 59)));
        txtNewCustomTime->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        txtNewCustomTime->setCalendarPopup(true);

        gridLayout_2->addWidget(txtNewCustomTime, 2, 1, 1, 1);

        chkResetTime = new QCheckBox(groupBox_2);
        chkResetTime->setObjectName("chkResetTime");

        gridLayout_2->addWidget(chkResetTime, 3, 0, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(DateTimeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DateTimeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DateTimeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DateTimeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DateTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *DateTimeDialog)
    {
        DateTimeDialog->setWindowTitle(QCoreApplication::translate("DateTimeDialog", "Date and time - melonDS", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DateTimeDialog", "Date and time", nullptr));
        label->setText(QCoreApplication::translate("DateTimeDialog", "Current value:", nullptr));
        lblCustomTime->setText(QCoreApplication::translate("DateTimeDialog", "[placeholder]", nullptr));
        label_2->setText(QString());
        chkChangeTime->setText(QCoreApplication::translate("DateTimeDialog", "Change to:", nullptr));
        txtNewCustomTime->setDisplayFormat(QCoreApplication::translate("DateTimeDialog", "dd/MM/yyyy HH:mm:ss", nullptr));
        chkResetTime->setText(QCoreApplication::translate("DateTimeDialog", "Reset to system date and time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTimeDialog: public Ui_DateTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEDIALOG_H
