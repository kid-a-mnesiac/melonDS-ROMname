/********************************************************************************
** Form generated from reading UI file 'CheatImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEATIMPORTDIALOG_H
#define UI_CHEATIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheatImportDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkShowAllMatches;
    QComboBox *cbEntryList;
    QCheckBox *chkRemoveOld;
    QLabel *label_8;
    QTreeView *tvCheatList;
    QWidget *layoutWidget2;
    QVBoxLayout *vlRightPanel;
    QGroupBox *gbDatabaseInfo;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblDatabaseName;
    QGroupBox *gbEntryInfo;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *lblEntryName;
    QLabel *label_3;
    QLabel *lblEntryGameCode;
    QLabel *label_5;
    QLabel *lblEntryChecksum;
    QGroupBox *gbCodeInfo;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLabel *lblCodeName;
    QLabel *label_6;
    QLabel *lblCodeDesc;
    QLabel *lblCodeStatusLabel;
    QLabel *lblCodeStatus;
    QLabel *lblCodeCodeLabel;
    QPlainTextEdit *txtCodeCode;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CheatImportDialog)
    {
        if (CheatImportDialog->objectName().isEmpty())
            CheatImportDialog->setObjectName("CheatImportDialog");
        CheatImportDialog->resize(712, 555);
        verticalLayout_3 = new QVBoxLayout(CheatImportDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        splitter = new QSplitter(CheatImportDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(2);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 4, 0);
        chkShowAllMatches = new QCheckBox(layoutWidget);
        chkShowAllMatches->setObjectName("chkShowAllMatches");

        verticalLayout->addWidget(chkShowAllMatches);

        cbEntryList = new QComboBox(layoutWidget);
        cbEntryList->setObjectName("cbEntryList");

        verticalLayout->addWidget(cbEntryList);

        chkRemoveOld = new QCheckBox(layoutWidget);
        chkRemoveOld->setObjectName("chkRemoveOld");

        verticalLayout->addWidget(chkRemoveOld);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        tvCheatList = new QTreeView(layoutWidget);
        tvCheatList->setObjectName("tvCheatList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tvCheatList->sizePolicy().hasHeightForWidth());
        tvCheatList->setSizePolicy(sizePolicy);
        tvCheatList->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tvCheatList->setHeaderHidden(true);

        verticalLayout->addWidget(tvCheatList);

        splitter->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName("layoutWidget2");
        vlRightPanel = new QVBoxLayout(layoutWidget2);
        vlRightPanel->setObjectName("vlRightPanel");
        vlRightPanel->setContentsMargins(4, 0, 0, 0);
        gbDatabaseInfo = new QGroupBox(layoutWidget2);
        gbDatabaseInfo->setObjectName("gbDatabaseInfo");
        verticalLayout_4 = new QVBoxLayout(gbDatabaseInfo);
        verticalLayout_4->setObjectName("verticalLayout_4");
        lblDatabaseName = new QLabel(gbDatabaseInfo);
        lblDatabaseName->setObjectName("lblDatabaseName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblDatabaseName->sizePolicy().hasHeightForWidth());
        lblDatabaseName->setSizePolicy(sizePolicy1);
        lblDatabaseName->setTextFormat(Qt::TextFormat::PlainText);
        lblDatabaseName->setWordWrap(true);

        verticalLayout_4->addWidget(lblDatabaseName);


        vlRightPanel->addWidget(gbDatabaseInfo);

        gbEntryInfo = new QGroupBox(layoutWidget2);
        gbEntryInfo->setObjectName("gbEntryInfo");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gbEntryInfo->sizePolicy().hasHeightForWidth());
        gbEntryInfo->setSizePolicy(sizePolicy2);
        formLayout = new QFormLayout(gbEntryInfo);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(gbEntryInfo);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        lblEntryName = new QLabel(gbEntryInfo);
        lblEntryName->setObjectName("lblEntryName");
        sizePolicy1.setHeightForWidth(lblEntryName->sizePolicy().hasHeightForWidth());
        lblEntryName->setSizePolicy(sizePolicy1);
        lblEntryName->setTextFormat(Qt::TextFormat::PlainText);
        lblEntryName->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lblEntryName);

        label_3 = new QLabel(gbEntryInfo);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        lblEntryGameCode = new QLabel(gbEntryInfo);
        lblEntryGameCode->setObjectName("lblEntryGameCode");
        lblEntryGameCode->setTextFormat(Qt::TextFormat::PlainText);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lblEntryGameCode);

        label_5 = new QLabel(gbEntryInfo);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        lblEntryChecksum = new QLabel(gbEntryInfo);
        lblEntryChecksum->setObjectName("lblEntryChecksum");
        lblEntryChecksum->setTextFormat(Qt::TextFormat::PlainText);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lblEntryChecksum);


        vlRightPanel->addWidget(gbEntryInfo);

        gbCodeInfo = new QGroupBox(layoutWidget2);
        gbCodeInfo->setObjectName("gbCodeInfo");
        sizePolicy2.setHeightForWidth(gbCodeInfo->sizePolicy().hasHeightForWidth());
        gbCodeInfo->setSizePolicy(sizePolicy2);
        formLayout_3 = new QFormLayout(gbCodeInfo);
        formLayout_3->setObjectName("formLayout_3");
        label = new QLabel(gbCodeInfo);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        lblCodeName = new QLabel(gbCodeInfo);
        lblCodeName->setObjectName("lblCodeName");
        sizePolicy1.setHeightForWidth(lblCodeName->sizePolicy().hasHeightForWidth());
        lblCodeName->setSizePolicy(sizePolicy1);
        lblCodeName->setTextFormat(Qt::TextFormat::PlainText);
        lblCodeName->setWordWrap(true);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, lblCodeName);

        label_6 = new QLabel(gbCodeInfo);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_6);

        lblCodeDesc = new QLabel(gbCodeInfo);
        lblCodeDesc->setObjectName("lblCodeDesc");
        sizePolicy1.setHeightForWidth(lblCodeDesc->sizePolicy().hasHeightForWidth());
        lblCodeDesc->setSizePolicy(sizePolicy1);
        lblCodeDesc->setTextFormat(Qt::TextFormat::PlainText);
        lblCodeDesc->setWordWrap(true);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, lblCodeDesc);

        lblCodeStatusLabel = new QLabel(gbCodeInfo);
        lblCodeStatusLabel->setObjectName("lblCodeStatusLabel");
        sizePolicy2.setHeightForWidth(lblCodeStatusLabel->sizePolicy().hasHeightForWidth());
        lblCodeStatusLabel->setSizePolicy(sizePolicy2);

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, lblCodeStatusLabel);

        lblCodeStatus = new QLabel(gbCodeInfo);
        lblCodeStatus->setObjectName("lblCodeStatus");
        sizePolicy2.setHeightForWidth(lblCodeStatus->sizePolicy().hasHeightForWidth());
        lblCodeStatus->setSizePolicy(sizePolicy2);
        lblCodeStatus->setTextFormat(Qt::TextFormat::PlainText);

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, lblCodeStatus);

        lblCodeCodeLabel = new QLabel(gbCodeInfo);
        lblCodeCodeLabel->setObjectName("lblCodeCodeLabel");
        sizePolicy2.setHeightForWidth(lblCodeCodeLabel->sizePolicy().hasHeightForWidth());
        lblCodeCodeLabel->setSizePolicy(sizePolicy2);
        lblCodeCodeLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, lblCodeCodeLabel);

        txtCodeCode = new QPlainTextEdit(gbCodeInfo);
        txtCodeCode->setObjectName("txtCodeCode");
        sizePolicy.setHeightForWidth(txtCodeCode->sizePolicy().hasHeightForWidth());
        txtCodeCode->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans Mono")});
        txtCodeCode->setFont(font);
        txtCodeCode->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        txtCodeCode->setReadOnly(true);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, txtCodeCode);


        vlRightPanel->addWidget(gbCodeInfo);

        vlRightPanel->setStretch(2, 1);
        splitter->addWidget(layoutWidget2);

        verticalLayout_3->addWidget(splitter);

        buttonBox = new QDialogButtonBox(CheatImportDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CheatImportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CheatImportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CheatImportDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CheatImportDialog);
    } // setupUi

    void retranslateUi(QDialog *CheatImportDialog)
    {
        CheatImportDialog->setWindowTitle(QCoreApplication::translate("CheatImportDialog", "Import cheat codes - melonDS", nullptr));
        chkShowAllMatches->setText(QCoreApplication::translate("CheatImportDialog", "Show all game code matches", nullptr));
        chkRemoveOld->setText(QCoreApplication::translate("CheatImportDialog", "Clear cheat file before import", nullptr));
        label_8->setText(QCoreApplication::translate("CheatImportDialog", "Check the cheat codes to import in the list below.", nullptr));
        gbDatabaseInfo->setTitle(QCoreApplication::translate("CheatImportDialog", "Database", nullptr));
        lblDatabaseName->setText(QCoreApplication::translate("CheatImportDialog", "super duper cheat database by epic haxor team", nullptr));
        gbEntryInfo->setTitle(QCoreApplication::translate("CheatImportDialog", "Selected game", nullptr));
        label_2->setText(QCoreApplication::translate("CheatImportDialog", "Name:", nullptr));
        lblEntryName->setText(QCoreApplication::translate("CheatImportDialog", "Super Mario Odyssey DS Edition", nullptr));
        label_3->setText(QCoreApplication::translate("CheatImportDialog", "Game code:", nullptr));
        lblEntryGameCode->setText(QCoreApplication::translate("CheatImportDialog", "FART", nullptr));
        label_5->setText(QCoreApplication::translate("CheatImportDialog", "Checksum:", nullptr));
        lblEntryChecksum->setText(QCoreApplication::translate("CheatImportDialog", "0xDEADBEEF", nullptr));
        gbCodeInfo->setTitle(QCoreApplication::translate("CheatImportDialog", "Selected code", nullptr));
        label->setText(QCoreApplication::translate("CheatImportDialog", "Name:", nullptr));
        lblCodeName->setText(QCoreApplication::translate("CheatImportDialog", "super duper code", nullptr));
        label_6->setText(QCoreApplication::translate("CheatImportDialog", "Description:", nullptr));
        lblCodeDesc->setText(QCoreApplication::translate("CheatImportDialog", "this code is absolutely epic", nullptr));
        lblCodeStatusLabel->setText(QCoreApplication::translate("CheatImportDialog", "Status:", nullptr));
        lblCodeStatus->setText(QCoreApplication::translate("CheatImportDialog", "enabled", nullptr));
        lblCodeCodeLabel->setText(QCoreApplication::translate("CheatImportDialog", "Code:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheatImportDialog: public Ui_CheatImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEATIMPORTDIALOG_H
