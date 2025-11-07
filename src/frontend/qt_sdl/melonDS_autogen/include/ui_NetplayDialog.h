/********************************************************************************
** Form generated from reading UI file 'NetplayDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETPLAYDIALOG_H
#define UI_NETPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetplayDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *lblStatus;
    QTreeView *tvPlayerList;

    void setupUi(QDialog *NetplayDialog)
    {
        if (NetplayDialog->objectName().isEmpty())
            NetplayDialog->setObjectName("NetplayDialog");
        NetplayDialog->resize(522, 391);
        verticalLayout_2 = new QVBoxLayout(NetplayDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblStatus = new QLabel(NetplayDialog);
        lblStatus->setObjectName("lblStatus");

        verticalLayout_2->addWidget(lblStatus);

        tvPlayerList = new QTreeView(NetplayDialog);
        tvPlayerList->setObjectName("tvPlayerList");

        verticalLayout_2->addWidget(tvPlayerList);


        retranslateUi(NetplayDialog);

        QMetaObject::connectSlotsByName(NetplayDialog);
    } // setupUi

    void retranslateUi(QDialog *NetplayDialog)
    {
        NetplayDialog->setWindowTitle(QCoreApplication::translate("NetplayDialog", "NETPLAY SHITO", nullptr));
        lblStatus->setText(QCoreApplication::translate("NetplayDialog", "STATUS PLACEHOLDER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetplayDialog: public Ui_NetplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETPLAYDIALOG_H
