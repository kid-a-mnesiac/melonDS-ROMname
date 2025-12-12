/********************************************************************************
** Form generated from reading UI file 'CheatsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEATSDIALOG_H
#define UI_CHEATSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheatsDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNewCat;
    QPushButton *btnNewARCode;
    QPushButton *btnImportCheats;
    QSpacerItem *horizontalSpacer;
    QTreeView *tvCodeList;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEditCode;
    QPushButton *btnSaveCode;
    QPushButton *btnCancelEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnDeleteCode;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtItemName;
    QLabel *label_2;
    QLineEdit *txtItemDesc;
    QLabel *label_3;
    QCheckBox *chkItemOption;
    QLabel *lblCode;
    QPlainTextEdit *txtCode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CheatsDialog)
    {
        if (CheatsDialog->objectName().isEmpty())
            CheatsDialog->setObjectName("CheatsDialog");
        CheatsDialog->resize(711, 511);
        verticalLayout_5 = new QVBoxLayout(CheatsDialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        splitter = new QSplitter(CheatsDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(2);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 4, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        btnNewCat = new QPushButton(verticalLayoutWidget);
        btnNewCat->setObjectName("btnNewCat");

        horizontalLayout->addWidget(btnNewCat);

        btnNewARCode = new QPushButton(verticalLayoutWidget);
        btnNewARCode->setObjectName("btnNewARCode");

        horizontalLayout->addWidget(btnNewARCode);

        btnImportCheats = new QPushButton(verticalLayoutWidget);
        btnImportCheats->setObjectName("btnImportCheats");

        horizontalLayout->addWidget(btnImportCheats);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tvCodeList = new QTreeView(verticalLayoutWidget);
        tvCodeList->setObjectName("tvCodeList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tvCodeList->sizePolicy().hasHeightForWidth());
        tvCodeList->setSizePolicy(sizePolicy);
        tvCodeList->setMinimumSize(QSize(200, 0));
        tvCodeList->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tvCodeList->setDragEnabled(true);
        tvCodeList->setDragDropMode(QAbstractItemView::DragDropMode::InternalMove);
        tvCodeList->setDefaultDropAction(Qt::DropAction::IgnoreAction);
        tvCodeList->setHeaderHidden(true);

        verticalLayout_2->addWidget(tvCodeList);

        splitter->addWidget(verticalLayoutWidget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnEditCode = new QPushButton(layoutWidget);
        btnEditCode->setObjectName("btnEditCode");

        horizontalLayout_2->addWidget(btnEditCode);

        btnSaveCode = new QPushButton(layoutWidget);
        btnSaveCode->setObjectName("btnSaveCode");

        horizontalLayout_2->addWidget(btnSaveCode);

        btnCancelEdit = new QPushButton(layoutWidget);
        btnCancelEdit->setObjectName("btnCancelEdit");

        horizontalLayout_2->addWidget(btnCancelEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnDeleteCode = new QPushButton(layoutWidget);
        btnDeleteCode->setObjectName("btnDeleteCode");

        horizontalLayout_2->addWidget(btnDeleteCode);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        txtItemName = new QLineEdit(layoutWidget);
        txtItemName->setObjectName("txtItemName");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, txtItemName);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        txtItemDesc = new QLineEdit(layoutWidget);
        txtItemDesc->setObjectName("txtItemDesc");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, txtItemDesc);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        chkItemOption = new QCheckBox(layoutWidget);
        chkItemOption->setObjectName("chkItemOption");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, chkItemOption);

        lblCode = new QLabel(layoutWidget);
        lblCode->setObjectName("lblCode");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblCode->sizePolicy().hasHeightForWidth());
        lblCode->setSizePolicy(sizePolicy1);
        lblCode->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, lblCode);

        txtCode = new QPlainTextEdit(layoutWidget);
        txtCode->setObjectName("txtCode");
        sizePolicy.setHeightForWidth(txtCode->sizePolicy().hasHeightForWidth());
        txtCode->setSizePolicy(sizePolicy);
        txtCode->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans Mono")});
        txtCode->setFont(font);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, txtCode);


        verticalLayout->addLayout(formLayout);

        splitter->addWidget(layoutWidget);

        verticalLayout_5->addWidget(splitter);

        buttonBox = new QDialogButtonBox(CheatsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close);

        verticalLayout_5->addWidget(buttonBox);


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
        btnImportCheats->setText(QCoreApplication::translate("CheatsDialog", "Import...", nullptr));
        btnEditCode->setText(QCoreApplication::translate("CheatsDialog", "Edit", nullptr));
        btnSaveCode->setText(QCoreApplication::translate("CheatsDialog", "Save", nullptr));
        btnCancelEdit->setText(QCoreApplication::translate("CheatsDialog", "Cancel edit", nullptr));
        btnDeleteCode->setText(QCoreApplication::translate("CheatsDialog", "Delete", nullptr));
        label->setText(QCoreApplication::translate("CheatsDialog", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("CheatsDialog", "Description:", nullptr));
        label_3->setText(QString());
        chkItemOption->setText(QCoreApplication::translate("CheatsDialog", "CheckBox", nullptr));
        lblCode->setText(QCoreApplication::translate("CheatsDialog", "Code:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheatsDialog: public Ui_CheatsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEATSDIALOG_H
