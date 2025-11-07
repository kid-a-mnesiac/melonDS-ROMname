/********************************************************************************
** Form generated from reading UI file 'LANStartClientDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANSTARTCLIENTDIALOG_H
#define UI_LANSTARTCLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LANStartClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txtPlayerName;
    QSpacerItem *horizontalSpacer;
    QTreeView *tvAvailableGames;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LANStartClientDialog)
    {
        if (LANStartClientDialog->objectName().isEmpty())
            LANStartClientDialog->setObjectName("LANStartClientDialog");
        LANStartClientDialog->resize(547, 407);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LANStartClientDialog->sizePolicy().hasHeightForWidth());
        LANStartClientDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(LANStartClientDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(LANStartClientDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        txtPlayerName = new QLineEdit(LANStartClientDialog);
        txtPlayerName->setObjectName("txtPlayerName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtPlayerName->sizePolicy().hasHeightForWidth());
        txtPlayerName->setSizePolicy(sizePolicy1);
        txtPlayerName->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(txtPlayerName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        tvAvailableGames = new QTreeView(LANStartClientDialog);
        tvAvailableGames->setObjectName("tvAvailableGames");
        tvAvailableGames->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);

        verticalLayout->addWidget(tvAvailableGames);

        label_2 = new QLabel(LANStartClientDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(LANStartClientDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LANStartClientDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LANStartClientDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LANStartClientDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LANStartClientDialog);
    } // setupUi

    void retranslateUi(QDialog *LANStartClientDialog)
    {
        LANStartClientDialog->setWindowTitle(QCoreApplication::translate("LANStartClientDialog", "Join LAN game - melonDS", nullptr));
        label->setText(QCoreApplication::translate("LANStartClientDialog", "Player name:", nullptr));
        label_2->setText(QCoreApplication::translate("LANStartClientDialog", "<html><head/><body><p>Warning: LAN requires low network latency to work.</p><p>Do not expect it to work through a VPN or any sort of tunnel.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LANStartClientDialog: public Ui_LANStartClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANSTARTCLIENTDIALOG_H
