/********************************************************************************
** Form generated from reading UI file 'PathSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHSETTINGSDIALOG_H
#define UI_PATHSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PathSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QPushButton *btnCheatFileBrowse;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *txtSavestatePath;
    QPushButton *btnSaveFileBrowse;
    QLineEdit *txtCheatFilePath;
    QDialogButtonBox *buttonBox;
    QPushButton *btnSavestateBrowse;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtSaveFilePath;
    QLabel *lblInstanceNum;

    void setupUi(QDialog *PathSettingsDialog)
    {
        if (PathSettingsDialog->objectName().isEmpty())
            PathSettingsDialog->setObjectName("PathSettingsDialog");
        PathSettingsDialog->resize(439, 185);
        gridLayout = new QGridLayout(PathSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(PathSettingsDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        btnCheatFileBrowse = new QPushButton(PathSettingsDialog);
        btnCheatFileBrowse->setObjectName("btnCheatFileBrowse");

        gridLayout->addWidget(btnCheatFileBrowse, 3, 2, 1, 1);

        label_3 = new QLabel(PathSettingsDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(PathSettingsDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 3);

        txtSavestatePath = new QLineEdit(PathSettingsDialog);
        txtSavestatePath->setObjectName("txtSavestatePath");
        txtSavestatePath->setClearButtonEnabled(true);

        gridLayout->addWidget(txtSavestatePath, 2, 1, 1, 1);

        btnSaveFileBrowse = new QPushButton(PathSettingsDialog);
        btnSaveFileBrowse->setObjectName("btnSaveFileBrowse");

        gridLayout->addWidget(btnSaveFileBrowse, 1, 2, 1, 1);

        txtCheatFilePath = new QLineEdit(PathSettingsDialog);
        txtCheatFilePath->setObjectName("txtCheatFilePath");
        txtCheatFilePath->setClearButtonEnabled(true);

        gridLayout->addWidget(txtCheatFilePath, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PathSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 3);

        btnSavestateBrowse = new QPushButton(PathSettingsDialog);
        btnSavestateBrowse->setObjectName("btnSavestateBrowse");

        gridLayout->addWidget(btnSavestateBrowse, 2, 2, 1, 1);

        label_2 = new QLabel(PathSettingsDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(PathSettingsDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 3);

        txtSaveFilePath = new QLineEdit(PathSettingsDialog);
        txtSaveFilePath->setObjectName("txtSaveFilePath");
        txtSaveFilePath->setClearButtonEnabled(true);

        gridLayout->addWidget(txtSaveFilePath, 1, 1, 1, 1);

        lblInstanceNum = new QLabel(PathSettingsDialog);
        lblInstanceNum->setObjectName("lblInstanceNum");

        gridLayout->addWidget(lblInstanceNum, 0, 0, 1, 3);

        QWidget::setTabOrder(txtSaveFilePath, btnSaveFileBrowse);
        QWidget::setTabOrder(btnSaveFileBrowse, txtSavestatePath);
        QWidget::setTabOrder(txtSavestatePath, btnSavestateBrowse);
        QWidget::setTabOrder(btnSavestateBrowse, txtCheatFilePath);
        QWidget::setTabOrder(txtCheatFilePath, btnCheatFileBrowse);

        retranslateUi(PathSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PathSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PathSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PathSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *PathSettingsDialog)
    {
        PathSettingsDialog->setWindowTitle(QCoreApplication::translate("PathSettingsDialog", "Path settings - melonDS", nullptr));
        label_4->setText(QCoreApplication::translate("PathSettingsDialog", "Cheat files path:", nullptr));
        btnCheatFileBrowse->setText(QCoreApplication::translate("PathSettingsDialog", "Browse...", nullptr));
        label_3->setText(QCoreApplication::translate("PathSettingsDialog", "Savestates path:", nullptr));
        label_5->setText(QString());
        btnSaveFileBrowse->setText(QCoreApplication::translate("PathSettingsDialog", "Browse...", nullptr));
        btnSavestateBrowse->setText(QCoreApplication::translate("PathSettingsDialog", "Browse...", nullptr));
        label_2->setText(QCoreApplication::translate("PathSettingsDialog", "Save files path:", nullptr));
        label->setText(QCoreApplication::translate("PathSettingsDialog", "Leave a path blank to use the current ROM's path.", nullptr));
        lblInstanceNum->setText(QCoreApplication::translate("PathSettingsDialog", "Configuring paths for instance X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PathSettingsDialog: public Ui_PathSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHSETTINGSDIALOG_H
