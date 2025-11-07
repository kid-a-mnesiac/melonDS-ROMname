/********************************************************************************
** Form generated from reading UI file 'NetplayStartClientDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETPLAYSTARTCLIENTDIALOG_H
#define UI_NETPLAYSTARTCLIENTDIALOG_H

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

class Ui_NetplayStartClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtPlayerName;
    QLineEdit *txtPort;
    QLabel *label_3;
    QLineEdit *txtIPAddress;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NetplayStartClientDialog)
    {
        if (NetplayStartClientDialog->objectName().isEmpty())
            NetplayStartClientDialog->setObjectName("NetplayStartClientDialog");
        NetplayStartClientDialog->resize(400, 229);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NetplayStartClientDialog->sizePolicy().hasHeightForWidth());
        NetplayStartClientDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NetplayStartClientDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(NetplayStartClientDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        label_2 = new QLabel(NetplayStartClientDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        txtPlayerName = new QLineEdit(NetplayStartClientDialog);
        txtPlayerName->setObjectName("txtPlayerName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtPlayerName);

        txtPort = new QLineEdit(NetplayStartClientDialog);
        txtPort->setObjectName("txtPort");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, txtPort);

        label_3 = new QLabel(NetplayStartClientDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        txtIPAddress = new QLineEdit(NetplayStartClientDialog);
        txtIPAddress->setObjectName("txtIPAddress");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtIPAddress);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(NetplayStartClientDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(NetplayStartClientDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NetplayStartClientDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NetplayStartClientDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NetplayStartClientDialog);
    } // setupUi

    void retranslateUi(QDialog *NetplayStartClientDialog)
    {
        NetplayStartClientDialog->setWindowTitle(QCoreApplication::translate("NetplayStartClientDialog", "NETPLAY CLIENT", nullptr));
        label->setText(QCoreApplication::translate("NetplayStartClientDialog", "Player name:", nullptr));
        label_2->setText(QCoreApplication::translate("NetplayStartClientDialog", "Host port:", nullptr));
        label_3->setText(QCoreApplication::translate("NetplayStartClientDialog", "Host address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetplayStartClientDialog: public Ui_NetplayStartClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETPLAYSTARTCLIENTDIALOG_H
