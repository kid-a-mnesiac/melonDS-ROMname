/********************************************************************************
** Form generated from reading UI file 'RAMInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMINFODIALOG_H
#define UI_RAMINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RAMInfoDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *btnSearch;
    QLineEdit *txtSearch;
    QPushButton *btnClear;
    QLabel *labelValue;
    QRadioButton *radiobtn1byte;
    QRadioButton *radiobtn2bytes;
    QRadioButton *radiobtn4bytes;
    QProgressBar *progressBar;
    QTableWidget *ramTable;
    QLabel *txtFound;

    void setupUi(QDialog *RAMInfoDialog)
    {
        if (RAMInfoDialog->objectName().isEmpty())
            RAMInfoDialog->setObjectName("RAMInfoDialog");
        RAMInfoDialog->setEnabled(true);
        RAMInfoDialog->resize(550, 411);
        RAMInfoDialog->setMinimumSize(QSize(550, 411));
        RAMInfoDialog->setMaximumSize(QSize(550, 411));
        RAMInfoDialog->setModal(false);
        groupBox = new QGroupBox(RAMInfoDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(340, 10, 201, 111));
        btnSearch = new QPushButton(groupBox);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(130, 20, 61, 23));
        txtSearch = new QLineEdit(groupBox);
        txtSearch->setObjectName("txtSearch");
        txtSearch->setGeometry(QRect(50, 20, 71, 21));
        txtSearch->setMaxLength(5);
        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(120, 80, 71, 23));
        labelValue = new QLabel(groupBox);
        labelValue->setObjectName("labelValue");
        labelValue->setGeometry(QRect(10, 20, 41, 21));
        radiobtn1byte = new QRadioButton(groupBox);
        radiobtn1byte->setObjectName("radiobtn1byte");
        radiobtn1byte->setGeometry(QRect(10, 50, 90, 16));
        radiobtn1byte->setChecked(true);
        radiobtn2bytes = new QRadioButton(groupBox);
        radiobtn2bytes->setObjectName("radiobtn2bytes");
        radiobtn2bytes->setGeometry(QRect(10, 70, 90, 16));
        radiobtn4bytes = new QRadioButton(groupBox);
        radiobtn4bytes->setObjectName("radiobtn4bytes");
        radiobtn4bytes->setGeometry(QRect(10, 90, 90, 16));
        progressBar = new QProgressBar(RAMInfoDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(10, 380, 321, 23));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        ramTable = new QTableWidget(RAMInfoDialog);
        if (ramTable->columnCount() < 3)
            ramTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ramTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ramTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ramTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        ramTable->setObjectName("ramTable");
        ramTable->setGeometry(QRect(10, 30, 321, 341));
        ramTable->setMinimumSize(QSize(321, 341));
        ramTable->setMaximumSize(QSize(321, 341));
        ramTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked);
        ramTable->setAlternatingRowColors(true);
        ramTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ramTable->verticalHeader()->setVisible(false);
        ramTable->verticalHeader()->setMinimumSectionSize(16);
        ramTable->verticalHeader()->setDefaultSectionSize(16);
        txtFound = new QLabel(RAMInfoDialog);
        txtFound->setObjectName("txtFound");
        txtFound->setGeometry(QRect(10, 10, 101, 16));
        QWidget::setTabOrder(ramTable, txtSearch);
        QWidget::setTabOrder(txtSearch, btnSearch);
        QWidget::setTabOrder(btnSearch, radiobtn1byte);
        QWidget::setTabOrder(radiobtn1byte, radiobtn2bytes);
        QWidget::setTabOrder(radiobtn2bytes, radiobtn4bytes);
        QWidget::setTabOrder(radiobtn4bytes, btnClear);

        retranslateUi(RAMInfoDialog);

        QMetaObject::connectSlotsByName(RAMInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *RAMInfoDialog)
    {
        RAMInfoDialog->setWindowTitle(QCoreApplication::translate("RAMInfoDialog", "RAM info - melonDS", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RAMInfoDialog", "Search", nullptr));
        btnSearch->setText(QCoreApplication::translate("RAMInfoDialog", "Search", nullptr));
        btnClear->setText(QCoreApplication::translate("RAMInfoDialog", "Clear", nullptr));
        labelValue->setText(QCoreApplication::translate("RAMInfoDialog", "Value:", nullptr));
        radiobtn1byte->setText(QCoreApplication::translate("RAMInfoDialog", "1byte", nullptr));
        radiobtn2bytes->setText(QCoreApplication::translate("RAMInfoDialog", "2bytes", nullptr));
        radiobtn4bytes->setText(QCoreApplication::translate("RAMInfoDialog", "4bytes", nullptr));
        progressBar->setFormat(QCoreApplication::translate("RAMInfoDialog", "%p%", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ramTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RAMInfoDialog", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ramTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RAMInfoDialog", "Value", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ramTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RAMInfoDialog", "Previous", nullptr));
        txtFound->setText(QCoreApplication::translate("RAMInfoDialog", "Found:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RAMInfoDialog: public Ui_RAMInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMINFODIALOG_H
