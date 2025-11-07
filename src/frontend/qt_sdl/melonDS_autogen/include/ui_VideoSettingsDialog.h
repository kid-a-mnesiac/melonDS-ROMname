/********************************************************************************
** Form generated from reading UI file 'VideoSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOSETTINGSDIALOG_H
#define UI_VIDEOSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_VideoSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QCheckBox *cbBetterPolygons;
    QComboBox *cbxGLResolution;
    QCheckBox *cbxComputeHiResCoords;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *cbSoftwareThreaded;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *sbVSyncInterval;
    QCheckBox *cbGLDisplay;
    QSpacerItem *verticalSpacer;
    QCheckBox *cbVSync;
    QLabel *label_2;
    QRadioButton *rb3DOpenGL;
    QRadioButton *rb3DSoftware;
    QLabel *label;
    QRadioButton *rb3DCompute;

    void setupUi(QDialog *VideoSettingsDialog)
    {
        if (VideoSettingsDialog->objectName().isEmpty())
            VideoSettingsDialog->setObjectName("VideoSettingsDialog");
        VideoSettingsDialog->resize(427, 262);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VideoSettingsDialog->sizePolicy().hasHeightForWidth());
        VideoSettingsDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(VideoSettingsDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setHorizontalSpacing(6);
        groupBox_3 = new QGroupBox(VideoSettingsDialog);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        cbBetterPolygons = new QCheckBox(groupBox_3);
        cbBetterPolygons->setObjectName("cbBetterPolygons");

        gridLayout_4->addWidget(cbBetterPolygons, 2, 0, 1, 1);

        cbxGLResolution = new QComboBox(groupBox_3);
        cbxGLResolution->setObjectName("cbxGLResolution");

        gridLayout_4->addWidget(cbxGLResolution, 1, 0, 1, 1);

        cbxComputeHiResCoords = new QCheckBox(groupBox_3);
        cbxComputeHiResCoords->setObjectName("cbxComputeHiResCoords");

        gridLayout_4->addWidget(cbxComputeHiResCoords, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(VideoSettingsDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        cbSoftwareThreaded = new QCheckBox(groupBox_2);
        cbSoftwareThreaded->setObjectName("cbSoftwareThreaded");

        gridLayout_3->addWidget(cbSoftwareThreaded, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(VideoSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        groupBox = new QGroupBox(VideoSettingsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        sbVSyncInterval = new QSpinBox(groupBox);
        sbVSyncInterval->setObjectName("sbVSyncInterval");
        sbVSyncInterval->setMinimum(1);
        sbVSyncInterval->setMaximum(20);

        gridLayout_2->addWidget(sbVSyncInterval, 7, 1, 1, 1);

        cbGLDisplay = new QCheckBox(groupBox);
        cbGLDisplay->setObjectName("cbGLDisplay");

        gridLayout_2->addWidget(cbGLDisplay, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 2);

        cbVSync = new QCheckBox(groupBox);
        cbVSync->setObjectName("cbVSync");

        gridLayout_2->addWidget(cbVSync, 6, 0, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_2, 7, 0, 1, 1);

        rb3DOpenGL = new QRadioButton(groupBox);
        rb3DOpenGL->setObjectName("rb3DOpenGL");

        gridLayout_2->addWidget(rb3DOpenGL, 2, 0, 1, 2);

        rb3DSoftware = new QRadioButton(groupBox);
        rb3DSoftware->setObjectName("rb3DSoftware");

        gridLayout_2->addWidget(rb3DSoftware, 1, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        rb3DCompute = new QRadioButton(groupBox);
        rb3DCompute->setObjectName("rb3DCompute");

        gridLayout_2->addWidget(rb3DCompute, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 3, 1, Qt::AlignTop);

        QWidget::setTabOrder(rb3DSoftware, rb3DOpenGL);
        QWidget::setTabOrder(rb3DOpenGL, cbGLDisplay);
        QWidget::setTabOrder(cbGLDisplay, cbVSync);
        QWidget::setTabOrder(cbVSync, sbVSyncInterval);
        QWidget::setTabOrder(sbVSyncInterval, cbSoftwareThreaded);
        QWidget::setTabOrder(cbSoftwareThreaded, cbxGLResolution);
        QWidget::setTabOrder(cbxGLResolution, cbBetterPolygons);

        retranslateUi(VideoSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VideoSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VideoSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VideoSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *VideoSettingsDialog)
    {
        VideoSettingsDialog->setWindowTitle(QCoreApplication::translate("VideoSettingsDialog", "Video settings - melonDS", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("VideoSettingsDialog", "OpenGL renderer", nullptr));
        label_3->setText(QCoreApplication::translate("VideoSettingsDialog", "Internal resolution:", nullptr));
#if QT_CONFIG(whatsthis)
        cbBetterPolygons->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>Enabling this may help reduce distortion on quads and more complex polygons, but may also reduce performance.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbBetterPolygons->setText(QCoreApplication::translate("VideoSettingsDialog", "Improved polygon splitting", nullptr));
#if QT_CONFIG(whatsthis)
        cbxGLResolution->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>The resolution at which the 3D graphics will be rendered. Higher resolutions improve graphics quality when the main window is enlarged, but may also cause glitches.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbxComputeHiResCoords->setText(QCoreApplication::translate("VideoSettingsDialog", "Use high resolution coordinates", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("VideoSettingsDialog", "Software renderer", nullptr));
#if QT_CONFIG(whatsthis)
        cbSoftwareThreaded->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>Run the software renderer on a separate thread. Yields better performance on multi-core CPUs.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbSoftwareThreaded->setText(QCoreApplication::translate("VideoSettingsDialog", "Use separate thread", nullptr));
        groupBox->setTitle(QCoreApplication::translate("VideoSettingsDialog", "Display settings", nullptr));
#if QT_CONFIG(whatsthis)
        sbVSyncInterval->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>The interval at which to synchronize to the monitor's refresh rate. Set to 1 for a 60Hz monitor, 2 for 120Hz, ...</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        cbGLDisplay->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>Use OpenGL to draw the DS screens to the main window. May result in better frame pacing. Mandatory when using the OpenGL 3D renderer.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbGLDisplay->setText(QCoreApplication::translate("VideoSettingsDialog", "OpenGL display", nullptr));
#if QT_CONFIG(whatsthis)
        cbVSync->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>When using OpenGL, synchronize the video output to your monitor's refresh rate.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbVSync->setText(QCoreApplication::translate("VideoSettingsDialog", "VSync", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>The interval at which to synchronize to the monitor's refresh rate. Set to 1 for a 60Hz monitor, 2 for 120Hz, ...</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("VideoSettingsDialog", "VSync interval:", nullptr));
#if QT_CONFIG(whatsthis)
        rb3DOpenGL->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>The OpenGL renderer may be faster than software and supports graphical enhancements, but is more prone to glitches.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rb3DOpenGL->setText(QCoreApplication::translate("VideoSettingsDialog", "OpenGL (Classic)", nullptr));
#if QT_CONFIG(whatsthis)
        rb3DSoftware->setWhatsThis(QCoreApplication::translate("VideoSettingsDialog", "<html><head/><body><p>The software renderer is more accurate and less prone to rendering glitches, but requires more CPU power.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rb3DSoftware->setText(QCoreApplication::translate("VideoSettingsDialog", "Software", nullptr));
        label->setText(QCoreApplication::translate("VideoSettingsDialog", "3D renderer:", nullptr));
        rb3DCompute->setText(QCoreApplication::translate("VideoSettingsDialog", "OpenGL (Compute shader)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoSettingsDialog: public Ui_VideoSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOSETTINGSDIALOG_H
