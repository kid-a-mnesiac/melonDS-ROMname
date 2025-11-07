/********************************************************************************
** Form generated from reading UI file 'NetplayStartHostDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETPLAYSTARTHOSTDIALOG_H
#define UI_NETPLAYSTARTHOSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetplayStartHostDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtPlayerName;
    QLineEdit *txtPort;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NetplayStartHostDialog)
    {
        if (NetplayStartHostDialog->objectName().isEmpty())
            NetplayStartHostDialog->setObjectName("NetplayStartHostDialog");
        NetplayStartHostDialog->resize(400, 229);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NetplayStartHostDialog->sizePolicy().hasHeightForWidth());
        NetplayStartHostDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NetplayStartHostDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(NetplayStartHostDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(NetplayStartHostDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        txtPlayerName = new QLineEdit(NetplayStartHostDialog);
        txtPlayerName->setObjectName("txtPlayerName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtPlayerName);

        txtPort = new QLineEdit(NetplayStartHostDialog);
        txtPort->setObjectName("txtPort");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtPort);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(NetplayStartHostDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NetplayStartHostDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NetplayStartHostDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NetplayStartHostDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NetplayStartHostDialog);
    } // setupUi

    void retranslateUi(QDialog *NetplayStartHostDialog)
    {
        NetplayStartHostDialog->setWindowTitle(QCoreApplication::translate("NetplayStartHostDialog", "NETPLAY HOST", nullptr));
        label->setText(QCoreApplication::translate("NetplayStartHostDialog", "Player name:", nullptr));
        label_2->setText(QCoreApplication::translate("NetplayStartHostDialog", "Port:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetplayStartHostDialog: public Ui_NetplayStartHostDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETPLAYSTARTHOSTDIALOG_H
