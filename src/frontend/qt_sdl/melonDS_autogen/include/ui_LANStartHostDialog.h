/********************************************************************************
** Form generated from reading UI file 'LANStartHostDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANSTARTHOSTDIALOG_H
#define UI_LANSTARTHOSTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LANStartHostDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPlayerName;
    QLabel *label_2;
    QSpinBox *sbNumPlayers;
    QLabel *label_3;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LANStartHostDialog)
    {
        if (LANStartHostDialog->objectName().isEmpty())
            LANStartHostDialog->setObjectName("LANStartHostDialog");
        LANStartHostDialog->resize(389, 202);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LANStartHostDialog->sizePolicy().hasHeightForWidth());
        LANStartHostDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(LANStartHostDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(LANStartHostDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        txtPlayerName = new QLineEdit(LANStartHostDialog);
        txtPlayerName->setObjectName("txtPlayerName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtPlayerName);

        label_2 = new QLabel(LANStartHostDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        sbNumPlayers = new QSpinBox(LANStartHostDialog);
        sbNumPlayers->setObjectName("sbNumPlayers");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, sbNumPlayers);

        label_3 = new QLabel(LANStartHostDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, label_3);

        label_4 = new QLabel(LANStartHostDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::ItemRole::SpanningRole, label_4);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(LANStartHostDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LANStartHostDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LANStartHostDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LANStartHostDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LANStartHostDialog);
    } // setupUi

    void retranslateUi(QDialog *LANStartHostDialog)
    {
        LANStartHostDialog->setWindowTitle(QCoreApplication::translate("LANStartHostDialog", "Host LAN game - melonDS", nullptr));
        label->setText(QCoreApplication::translate("LANStartHostDialog", "Player name:", nullptr));
        label_2->setText(QCoreApplication::translate("LANStartHostDialog", "Number of players:", nullptr));
        label_3->setText(QCoreApplication::translate("LANStartHostDialog", "<html><head/><body><p>Warning: LAN requires low network latency to work.</p><p>Do not expect it to work through a VPN or any sort of tunnel.</p></body></html>", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LANStartHostDialog: public Ui_LANStartHostDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANSTARTHOSTDIALOG_H
