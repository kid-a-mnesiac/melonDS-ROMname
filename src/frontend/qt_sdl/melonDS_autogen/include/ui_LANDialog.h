/********************************************************************************
** Form generated from reading UI file 'LANDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDIALOG_H
#define UI_LANDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LANDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLeaveGame;
    QSpacerItem *horizontalSpacer;
    QTreeView *tvPlayerList;

    void setupUi(QDialog *LANDialog)
    {
        if (LANDialog->objectName().isEmpty())
            LANDialog->setObjectName("LANDialog");
        LANDialog->resize(522, 391);
        verticalLayout = new QVBoxLayout(LANDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        btnLeaveGame = new QPushButton(LANDialog);
        btnLeaveGame->setObjectName("btnLeaveGame");

        horizontalLayout->addWidget(btnLeaveGame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tvPlayerList = new QTreeView(LANDialog);
        tvPlayerList->setObjectName("tvPlayerList");

        verticalLayout->addWidget(tvPlayerList);


        retranslateUi(LANDialog);

        QMetaObject::connectSlotsByName(LANDialog);
    } // setupUi

    void retranslateUi(QDialog *LANDialog)
    {
        LANDialog->setWindowTitle(QCoreApplication::translate("LANDialog", "LAN game - melonDS", nullptr));
        btnLeaveGame->setText(QCoreApplication::translate("LANDialog", "Leave game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LANDialog: public Ui_LANDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDIALOG_H
