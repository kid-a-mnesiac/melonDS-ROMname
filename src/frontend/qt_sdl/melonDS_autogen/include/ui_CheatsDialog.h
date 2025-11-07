/********************************************************************************
** Form generated from reading UI file 'CheatsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEATSDIALOG_H
#define UI_CHEATSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheatsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNewCat;
    QPushButton *btnNewARCode;
    QPushButton *btnDeleteCode;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *tvCodeList;
    QPlainTextEdit *txtCode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CheatsDialog)
    {
        if (CheatsDialog->objectName().isEmpty())
            CheatsDialog->setObjectName("CheatsDialog");
        CheatsDialog->resize(609, 417);
        verticalLayout_2 = new QVBoxLayout(CheatsDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnNewCat = new QPushButton(CheatsDialog);
        btnNewCat->setObjectName("btnNewCat");

        horizontalLayout->addWidget(btnNewCat);

        btnNewARCode = new QPushButton(CheatsDialog);
        btnNewARCode->setObjectName("btnNewARCode");

        horizontalLayout->addWidget(btnNewARCode);

        btnDeleteCode = new QPushButton(CheatsDialog);
        btnDeleteCode->setObjectName("btnDeleteCode");

        horizontalLayout->addWidget(btnDeleteCode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        tvCodeList = new QTreeView(CheatsDialog);
        tvCodeList->setObjectName("tvCodeList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tvCodeList->sizePolicy().hasHeightForWidth());
        tvCodeList->setSizePolicy(sizePolicy);
        tvCodeList->setMinimumSize(QSize(200, 0));
        tvCodeList->setHeaderHidden(true);

        horizontalLayout_2->addWidget(tvCodeList);

        txtCode = new QPlainTextEdit(CheatsDialog);
        txtCode->setObjectName("txtCode");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtCode->sizePolicy().hasHeightForWidth());
        txtCode->setSizePolicy(sizePolicy1);
        txtCode->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(txtCode);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(CheatsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CheatsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CheatsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CheatsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CheatsDialog);
    } // setupUi

    void retranslateUi(QDialog *CheatsDialog)
    {
        CheatsDialog->setWindowTitle(QCoreApplication::translate("CheatsDialog", "Cheat code editor - melonDS", nullptr));
        btnNewCat->setText(QCoreApplication::translate("CheatsDialog", "New category", nullptr));
        btnNewARCode->setText(QCoreApplication::translate("CheatsDialog", "New AR code", nullptr));
        btnDeleteCode->setText(QCoreApplication::translate("CheatsDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheatsDialog: public Ui_CheatsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEATSDIALOG_H
