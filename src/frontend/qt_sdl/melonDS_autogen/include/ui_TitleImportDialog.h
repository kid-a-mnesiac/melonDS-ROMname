/********************************************************************************
** Form generated from reading UI file 'TitleImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEIMPORTDIALOG_H
#define UI_TITLEIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_TitleImportDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnTmdBrowse;
    QRadioButton *rbTmdFromNUS;
    QLabel *label_2;
    QRadioButton *rbTmdFromFile;
    QLineEdit *txtAppFile;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtTmdFile;
    QPushButton *btnAppBrowse;
    QCheckBox *cbReadOnly;

    void setupUi(QDialog *TitleImportDialog)
    {
        if (TitleImportDialog->objectName().isEmpty())
            TitleImportDialog->setObjectName("TitleImportDialog");
        TitleImportDialog->resize(495, 202);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleImportDialog->sizePolicy().hasHeightForWidth());
        TitleImportDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(TitleImportDialog);
        gridLayout->setObjectName("gridLayout");
        btnTmdBrowse = new QPushButton(TitleImportDialog);
        btnTmdBrowse->setObjectName("btnTmdBrowse");

        gridLayout->addWidget(btnTmdBrowse, 3, 2, 1, 1);

        rbTmdFromNUS = new QRadioButton(TitleImportDialog);
        rbTmdFromNUS->setObjectName("rbTmdFromNUS");

        gridLayout->addWidget(rbTmdFromNUS, 4, 0, 1, 3);

        label_2 = new QLabel(TitleImportDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 3);

        rbTmdFromFile = new QRadioButton(TitleImportDialog);
        rbTmdFromFile->setObjectName("rbTmdFromFile");

        gridLayout->addWidget(rbTmdFromFile, 3, 0, 1, 1);

        txtAppFile = new QLineEdit(TitleImportDialog);
        txtAppFile->setObjectName("txtAppFile");

        gridLayout->addWidget(txtAppFile, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(TitleImportDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 3);

        label_4 = new QLabel(TitleImportDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 3);

        label = new QLabel(TitleImportDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(TitleImportDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 3);

        txtTmdFile = new QLineEdit(TitleImportDialog);
        txtTmdFile->setObjectName("txtTmdFile");

        gridLayout->addWidget(txtTmdFile, 3, 1, 1, 1);

        btnAppBrowse = new QPushButton(TitleImportDialog);
        btnAppBrowse->setObjectName("btnAppBrowse");

        gridLayout->addWidget(btnAppBrowse, 0, 2, 1, 1);

        cbReadOnly = new QCheckBox(TitleImportDialog);
        cbReadOnly->setObjectName("cbReadOnly");

        gridLayout->addWidget(cbReadOnly, 6, 0, 1, 3);

        QWidget::setTabOrder(txtAppFile, btnAppBrowse);
        QWidget::setTabOrder(btnAppBrowse, rbTmdFromFile);
        QWidget::setTabOrder(rbTmdFromFile, txtTmdFile);
        QWidget::setTabOrder(txtTmdFile, btnTmdBrowse);
        QWidget::setTabOrder(btnTmdBrowse, rbTmdFromNUS);
        QWidget::setTabOrder(rbTmdFromNUS, cbReadOnly);

        retranslateUi(TitleImportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TitleImportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TitleImportDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TitleImportDialog);
    } // setupUi

    void retranslateUi(QDialog *TitleImportDialog)
    {
        TitleImportDialog->setWindowTitle(QCoreApplication::translate("TitleImportDialog", "Import title - melonDS", nullptr));
        btnTmdBrowse->setText(QCoreApplication::translate("TitleImportDialog", "Browse...", nullptr));
        rbTmdFromNUS->setText(QCoreApplication::translate("TitleImportDialog", "Download from NUS", nullptr));
        label_2->setText(QCoreApplication::translate("TitleImportDialog", "Metadata (TMD):", nullptr));
        rbTmdFromFile->setText(QCoreApplication::translate("TitleImportDialog", "From file:", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("TitleImportDialog", "Executable:", nullptr));
        label_3->setText(QString());
        btnAppBrowse->setText(QCoreApplication::translate("TitleImportDialog", "Browse...", nullptr));
#if QT_CONFIG(whatsthis)
        cbReadOnly->setWhatsThis(QCoreApplication::translate("TitleImportDialog", "<html><head/><body><p>Makes the title executable and TMD read-only. Prevents DSi system utilities from deleting them.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbReadOnly->setText(QCoreApplication::translate("TitleImportDialog", "Make title files read-only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TitleImportDialog: public Ui_TitleImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEIMPORTDIALOG_H
