/********************************************************************************
** Form generated from reading UI file 'CameraSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTINGSDIALOG_H
#define UI_CAMERASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CameraSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbCameraSel;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *txtSrcImagePath;
    QRadioButton *rbPictureNone;
    QPushButton *btnSrcImageBrowse;
    QRadioButton *rbPictureCamera;
    QRadioButton *rbPictureImg;
    QComboBox *cbPhysicalCamera;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QCheckBox *chkFlipPicture;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpPreview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CameraSettingsDialog)
    {
        if (CameraSettingsDialog->objectName().isEmpty())
            CameraSettingsDialog->setObjectName("CameraSettingsDialog");
        CameraSettingsDialog->resize(605, 341);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CameraSettingsDialog->sizePolicy().hasHeightForWidth());
        CameraSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CameraSettingsDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(CameraSettingsDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cbCameraSel = new QComboBox(CameraSettingsDialog);
        cbCameraSel->setObjectName("cbCameraSel");

        horizontalLayout->addWidget(cbCameraSel);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        groupBox = new QGroupBox(CameraSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        txtSrcImagePath = new QLineEdit(groupBox);
        txtSrcImagePath->setObjectName("txtSrcImagePath");

        gridLayout_2->addWidget(txtSrcImagePath, 1, 2, 1, 1);

        rbPictureNone = new QRadioButton(groupBox);
        rbPictureNone->setObjectName("rbPictureNone");

        gridLayout_2->addWidget(rbPictureNone, 0, 0, 1, 4);

        btnSrcImageBrowse = new QPushButton(groupBox);
        btnSrcImageBrowse->setObjectName("btnSrcImageBrowse");

        gridLayout_2->addWidget(btnSrcImageBrowse, 1, 3, 1, 1);

        rbPictureCamera = new QRadioButton(groupBox);
        rbPictureCamera->setObjectName("rbPictureCamera");

        gridLayout_2->addWidget(rbPictureCamera, 2, 0, 1, 1);

        rbPictureImg = new QRadioButton(groupBox);
        rbPictureImg->setObjectName("rbPictureImg");

        gridLayout_2->addWidget(rbPictureImg, 1, 0, 1, 1);

        cbPhysicalCamera = new QComboBox(groupBox);
        cbPhysicalCamera->setObjectName("cbPhysicalCamera");

        gridLayout_2->addWidget(cbPhysicalCamera, 2, 2, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(CameraSettingsDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        chkFlipPicture = new QCheckBox(groupBox_3);
        chkFlipPicture->setObjectName("chkFlipPicture");

        gridLayout_4->addWidget(chkFlipPicture, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);

        grpPreview = new QGroupBox(CameraSettingsDialog);
        grpPreview->setObjectName("grpPreview");

        gridLayout_3->addWidget(grpPreview, 0, 2, 3, 1);


        verticalLayout->addLayout(gridLayout_3);

        buttonBox = new QDialogButtonBox(CameraSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cbCameraSel, rbPictureNone);
        QWidget::setTabOrder(rbPictureNone, rbPictureImg);
        QWidget::setTabOrder(rbPictureImg, txtSrcImagePath);
        QWidget::setTabOrder(txtSrcImagePath, btnSrcImageBrowse);
        QWidget::setTabOrder(btnSrcImageBrowse, rbPictureCamera);
        QWidget::setTabOrder(rbPictureCamera, cbPhysicalCamera);
        QWidget::setTabOrder(cbPhysicalCamera, chkFlipPicture);

        retranslateUi(CameraSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CameraSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CameraSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CameraSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraSettingsDialog)
    {
        CameraSettingsDialog->setWindowTitle(QCoreApplication::translate("CameraSettingsDialog", "Camera settings - melonDS", nullptr));
        label->setText(QCoreApplication::translate("CameraSettingsDialog", "Configure emulated camera:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CameraSettingsDialog", "Picture source", nullptr));
        rbPictureNone->setText(QCoreApplication::translate("CameraSettingsDialog", "None (blank)", nullptr));
        btnSrcImageBrowse->setText(QCoreApplication::translate("CameraSettingsDialog", "Browse...", nullptr));
        rbPictureCamera->setText(QCoreApplication::translate("CameraSettingsDialog", "Physical camera:", nullptr));
        rbPictureImg->setText(QCoreApplication::translate("CameraSettingsDialog", "Image file:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CameraSettingsDialog", "Picture settings", nullptr));
        chkFlipPicture->setText(QCoreApplication::translate("CameraSettingsDialog", "Flip horizontally", nullptr));
        grpPreview->setTitle(QCoreApplication::translate("CameraSettingsDialog", "Preview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraSettingsDialog: public Ui_CameraSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTINGSDIALOG_H
