/********************************************************************************
** Form generated from reading UI file 'TitleManagerDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEMANAGERDIALOG_H
#define UI_TITLEMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TitleManagerDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnImportTitle;
    QPushButton *btnImportTitleData;
    QPushButton *btnExportTitleData;
    QPushButton *btnDeleteTitle;
    QSpacerItem *horizontalSpacer;
    QListWidget *lstTitleList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TitleManagerDialog)
    {
        if (TitleManagerDialog->objectName().isEmpty())
            TitleManagerDialog->setObjectName("TitleManagerDialog");
        TitleManagerDialog->resize(608, 466);
        verticalLayout_2 = new QVBoxLayout(TitleManagerDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnImportTitle = new QPushButton(TitleManagerDialog);
        btnImportTitle->setObjectName("btnImportTitle");

        horizontalLayout->addWidget(btnImportTitle);

        btnImportTitleData = new QPushButton(TitleManagerDialog);
        btnImportTitleData->setObjectName("btnImportTitleData");

        horizontalLayout->addWidget(btnImportTitleData);

        btnExportTitleData = new QPushButton(TitleManagerDialog);
        btnExportTitleData->setObjectName("btnExportTitleData");

        horizontalLayout->addWidget(btnExportTitleData);

        btnDeleteTitle = new QPushButton(TitleManagerDialog);
        btnDeleteTitle->setObjectName("btnDeleteTitle");

        horizontalLayout->addWidget(btnDeleteTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        lstTitleList = new QListWidget(TitleManagerDialog);
        lstTitleList->setObjectName("lstTitleList");

        verticalLayout_2->addWidget(lstTitleList);

        buttonBox = new QDialogButtonBox(TitleManagerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(TitleManagerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TitleManagerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TitleManagerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TitleManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *TitleManagerDialog)
    {
        TitleManagerDialog->setWindowTitle(QCoreApplication::translate("TitleManagerDialog", "DSi title manager - melonDS", nullptr));
#if QT_CONFIG(whatsthis)
        btnImportTitle->setWhatsThis(QCoreApplication::translate("TitleManagerDialog", "<html><head/><body><p>Import a DSiware title to your emulated DSi system.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnImportTitle->setText(QCoreApplication::translate("TitleManagerDialog", "Import title...", nullptr));
#if QT_CONFIG(whatsthis)
        btnImportTitleData->setWhatsThis(QCoreApplication::translate("TitleManagerDialog", "<html><head/><body><p>Import data (save, banner...) for the selected title.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnImportTitleData->setText(QCoreApplication::translate("TitleManagerDialog", "Import title data", nullptr));
#if QT_CONFIG(whatsthis)
        btnExportTitleData->setWhatsThis(QCoreApplication::translate("TitleManagerDialog", "<html><head/><body><p>Export the data (save, banner...) associated with the selected title.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnExportTitleData->setText(QCoreApplication::translate("TitleManagerDialog", "Export title data", nullptr));
#if QT_CONFIG(whatsthis)
        btnDeleteTitle->setWhatsThis(QCoreApplication::translate("TitleManagerDialog", "<html><head/><body><p>Permanently delete the selected title and its associated data from your emulated DSi.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnDeleteTitle->setText(QCoreApplication::translate("TitleManagerDialog", "Delete title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TitleManagerDialog: public Ui_TitleManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEMANAGERDIALOG_H
