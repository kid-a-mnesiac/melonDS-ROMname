/********************************************************************************
** Form generated from reading UI file 'ROMInfoDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMINFODIALOG_H
#define UI_ROMINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ROMInfoDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *titles;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *japaneseTitle;
    QLabel *label_3;
    QLabel *englishTitle;
    QLabel *label_4;
    QLabel *frenchTitle;
    QLabel *label_5;
    QLabel *germanTitle;
    QLabel *label_6;
    QLabel *italianTitle;
    QLabel *label_7;
    QLabel *spanishTitle;
    QLabel *label_25;
    QLabel *chineseTitle;
    QLabel *label_23;
    QLabel *koreanTitle;
    QGroupBox *arm9AndArm7Binaries;
    QFormLayout *formLayout_2;
    QLabel *label_11;
    QLabel *arm9RomOffset;
    QLabel *label_12;
    QLabel *arm9EntryAddress;
    QLabel *label_14;
    QLabel *arm9RamAddress;
    QLabel *label_16;
    QLabel *arm9Size;
    QLabel *label_15;
    QLabel *arm7RomOffset;
    QLabel *label_13;
    QLabel *arm7EntryAddress;
    QLabel *label_18;
    QLabel *arm7RamAddress;
    QLabel *label_17;
    QLabel *arm7Size;
    QGroupBox *filesystem;
    QFormLayout *formLayout_4;
    QLabel *label_19;
    QLabel *fntOffset;
    QLabel *label_20;
    QLabel *fntSize;
    QLabel *label_21;
    QLabel *fatOffset;
    QLabel *label_22;
    QLabel *fatSize;
    QGroupBox *generalInfo;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLabel *gameTitle;
    QLabel *label_8;
    QLabel *gameCode;
    QLabel *label_9;
    QLabel *makerCode;
    QLabel *label_10;
    QLabel *cardSize;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QPushButton *saveIconButton;
    QGroupBox *iconBox;
    QGridLayout *gridLayout_2;
    QLabel *iconImage;
    QGroupBox *titleBox;
    QGridLayout *gridLayout_4;
    QLabel *iconTitle;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *dsiIconBox;
    QGridLayout *gridLayout_10;
    QLabel *dsiIconImage;
    QPushButton *saveAnimatedIconButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ROMInfoDialog)
    {
        if (ROMInfoDialog->objectName().isEmpty())
            ROMInfoDialog->setObjectName("ROMInfoDialog");
        ROMInfoDialog->resize(557, 547);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ROMInfoDialog->sizePolicy().hasHeightForWidth());
        ROMInfoDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ROMInfoDialog);
        gridLayout->setObjectName("gridLayout");
        titles = new QGroupBox(ROMInfoDialog);
        titles->setObjectName("titles");
        formLayout = new QFormLayout(titles);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(titles);
        label_2->setObjectName("label_2");
        QFont font;
        font.setUnderline(false);
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        japaneseTitle = new QLabel(titles);
        japaneseTitle->setObjectName("japaneseTitle");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, japaneseTitle);

        label_3 = new QLabel(titles);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        englishTitle = new QLabel(titles);
        englishTitle->setObjectName("englishTitle");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, englishTitle);

        label_4 = new QLabel(titles);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_4);

        frenchTitle = new QLabel(titles);
        frenchTitle->setObjectName("frenchTitle");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, frenchTitle);

        label_5 = new QLabel(titles);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_5);

        germanTitle = new QLabel(titles);
        germanTitle->setObjectName("germanTitle");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, germanTitle);

        label_6 = new QLabel(titles);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_6);

        italianTitle = new QLabel(titles);
        italianTitle->setObjectName("italianTitle");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, italianTitle);

        label_7 = new QLabel(titles);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_7);

        spanishTitle = new QLabel(titles);
        spanishTitle->setObjectName("spanishTitle");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, spanishTitle);

        label_25 = new QLabel(titles);
        label_25->setObjectName("label_25");
        label_25->setFont(font);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_25);

        chineseTitle = new QLabel(titles);
        chineseTitle->setObjectName("chineseTitle");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, chineseTitle);

        label_23 = new QLabel(titles);
        label_23->setObjectName("label_23");
        label_23->setFont(font);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_23);

        koreanTitle = new QLabel(titles);
        koreanTitle->setObjectName("koreanTitle");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, koreanTitle);


        gridLayout->addWidget(titles, 2, 0, 1, 1);

        arm9AndArm7Binaries = new QGroupBox(ROMInfoDialog);
        arm9AndArm7Binaries->setObjectName("arm9AndArm7Binaries");
        formLayout_2 = new QFormLayout(arm9AndArm7Binaries);
        formLayout_2->setObjectName("formLayout_2");
        label_11 = new QLabel(arm9AndArm7Binaries);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_11);

        arm9RomOffset = new QLabel(arm9AndArm7Binaries);
        arm9RomOffset->setObjectName("arm9RomOffset");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, arm9RomOffset);

        label_12 = new QLabel(arm9AndArm7Binaries);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_12);

        arm9EntryAddress = new QLabel(arm9AndArm7Binaries);
        arm9EntryAddress->setObjectName("arm9EntryAddress");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, arm9EntryAddress);

        label_14 = new QLabel(arm9AndArm7Binaries);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_14);

        arm9RamAddress = new QLabel(arm9AndArm7Binaries);
        arm9RamAddress->setObjectName("arm9RamAddress");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, arm9RamAddress);

        label_16 = new QLabel(arm9AndArm7Binaries);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_16);

        arm9Size = new QLabel(arm9AndArm7Binaries);
        arm9Size->setObjectName("arm9Size");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, arm9Size);

        label_15 = new QLabel(arm9AndArm7Binaries);
        label_15->setObjectName("label_15");
        label_15->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, label_15);

        arm7RomOffset = new QLabel(arm9AndArm7Binaries);
        arm7RomOffset->setObjectName("arm7RomOffset");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, arm7RomOffset);

        label_13 = new QLabel(arm9AndArm7Binaries);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::ItemRole::LabelRole, label_13);

        arm7EntryAddress = new QLabel(arm9AndArm7Binaries);
        arm7EntryAddress->setObjectName("arm7EntryAddress");

        formLayout_2->setWidget(5, QFormLayout::ItemRole::FieldRole, arm7EntryAddress);

        label_18 = new QLabel(arm9AndArm7Binaries);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        formLayout_2->setWidget(6, QFormLayout::ItemRole::LabelRole, label_18);

        arm7RamAddress = new QLabel(arm9AndArm7Binaries);
        arm7RamAddress->setObjectName("arm7RamAddress");

        formLayout_2->setWidget(6, QFormLayout::ItemRole::FieldRole, arm7RamAddress);

        label_17 = new QLabel(arm9AndArm7Binaries);
        label_17->setObjectName("label_17");
        label_17->setFont(font);

        formLayout_2->setWidget(7, QFormLayout::ItemRole::LabelRole, label_17);

        arm7Size = new QLabel(arm9AndArm7Binaries);
        arm7Size->setObjectName("arm7Size");

        formLayout_2->setWidget(7, QFormLayout::ItemRole::FieldRole, arm7Size);


        gridLayout->addWidget(arm9AndArm7Binaries, 2, 1, 1, 1);

        filesystem = new QGroupBox(ROMInfoDialog);
        filesystem->setObjectName("filesystem");
        formLayout_4 = new QFormLayout(filesystem);
        formLayout_4->setObjectName("formLayout_4");
        label_19 = new QLabel(filesystem);
        label_19->setObjectName("label_19");
        label_19->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_19);

        fntOffset = new QLabel(filesystem);
        fntOffset->setObjectName("fntOffset");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, fntOffset);

        label_20 = new QLabel(filesystem);
        label_20->setObjectName("label_20");
        label_20->setFont(font);

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, label_20);

        fntSize = new QLabel(filesystem);
        fntSize->setObjectName("fntSize");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::FieldRole, fntSize);

        label_21 = new QLabel(filesystem);
        label_21->setObjectName("label_21");
        label_21->setFont(font);

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, label_21);

        fatOffset = new QLabel(filesystem);
        fatOffset->setObjectName("fatOffset");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, fatOffset);

        label_22 = new QLabel(filesystem);
        label_22->setObjectName("label_22");
        label_22->setFont(font);

        formLayout_4->setWidget(3, QFormLayout::ItemRole::LabelRole, label_22);

        fatSize = new QLabel(filesystem);
        fatSize->setObjectName("fatSize");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::FieldRole, fatSize);


        gridLayout->addWidget(filesystem, 3, 1, 1, 1);

        generalInfo = new QGroupBox(ROMInfoDialog);
        generalInfo->setObjectName("generalInfo");
        formLayout_3 = new QFormLayout(generalInfo);
        formLayout_3->setObjectName("formLayout_3");
        label = new QLabel(generalInfo);
        label->setObjectName("label");
        label->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        gameTitle = new QLabel(generalInfo);
        gameTitle->setObjectName("gameTitle");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, gameTitle);

        label_8 = new QLabel(generalInfo);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, label_8);

        gameCode = new QLabel(generalInfo);
        gameCode->setObjectName("gameCode");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, gameCode);

        label_9 = new QLabel(generalInfo);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        makerCode = new QLabel(generalInfo);
        makerCode->setObjectName("makerCode");

        formLayout_3->setWidget(2, QFormLayout::ItemRole::FieldRole, makerCode);

        label_10 = new QLabel(generalInfo);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::ItemRole::LabelRole, label_10);

        cardSize = new QLabel(generalInfo);
        cardSize->setObjectName("cardSize");

        formLayout_3->setWidget(3, QFormLayout::ItemRole::FieldRole, cardSize);


        gridLayout->addWidget(generalInfo, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ROMInfoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        groupBox_2 = new QGroupBox(ROMInfoDialog);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setObjectName("gridLayout_9");
        saveIconButton = new QPushButton(groupBox_2);
        saveIconButton->setObjectName("saveIconButton");

        gridLayout_9->addWidget(saveIconButton, 1, 1, 1, 1);

        iconBox = new QGroupBox(groupBox_2);
        iconBox->setObjectName("iconBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconBox->sizePolicy().hasHeightForWidth());
        iconBox->setSizePolicy(sizePolicy1);
        iconBox->setStyleSheet(QString::fromUtf8("#iconBox {\n"
"    border: 1px solid black;\n"
"    background-color:  qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"    stop: 0 white,  \n"
"    stop: 1 lightgrey);\n"
"}\n"
"\n"
"#titleBox {\n"
"    border: 0.5px solid grey;\n"
"    background-color: #fbfbfb;\n"
"}\n"
"\n"
"#iconTitle {\n"
"    color: black;\n"
"}\n"
""));
        iconBox->setAlignment(Qt::AlignCenter);
        iconBox->setFlat(false);
        iconBox->setCheckable(false);
        gridLayout_2 = new QGridLayout(iconBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(-1, 2, -1, 2);
        iconImage = new QLabel(iconBox);
        iconImage->setObjectName("iconImage");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(iconImage->sizePolicy().hasHeightForWidth());
        iconImage->setSizePolicy(sizePolicy2);
        iconImage->setMinimumSize(QSize(32, 32));
        iconImage->setMaximumSize(QSize(32, 32));

        gridLayout_2->addWidget(iconImage, 0, 1, 1, 1);

        titleBox = new QGroupBox(iconBox);
        titleBox->setObjectName("titleBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(titleBox->sizePolicy().hasHeightForWidth());
        titleBox->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(titleBox);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        iconTitle = new QLabel(titleBox);
        iconTitle->setObjectName("iconTitle");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(iconTitle->sizePolicy().hasHeightForWidth());
        iconTitle->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        iconTitle->setFont(font1);
        iconTitle->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(iconTitle, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(titleBox, 0, 2, 1, 1);


        gridLayout_9->addWidget(iconBox, 0, 1, 1, 1);

        dsiIconBox = new QGroupBox(groupBox_2);
        dsiIconBox->setObjectName("dsiIconBox");
        sizePolicy.setHeightForWidth(dsiIconBox->sizePolicy().hasHeightForWidth());
        dsiIconBox->setSizePolicy(sizePolicy);
        dsiIconBox->setStyleSheet(QString::fromUtf8("#dsiIconBox {\n"
"    border-radius: 4px;\n"
"    background-color: #515151;\n"
"}\n"
"\n"
"#dsiIconImage {\n"
"    background-color: white;\n"
"}"));
        dsiIconBox->setAlignment(Qt::AlignCenter);
        dsiIconBox->setFlat(false);
        dsiIconBox->setCheckable(false);
        gridLayout_10 = new QGridLayout(dsiIconBox);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(8, 6, 8, 6);
        dsiIconImage = new QLabel(dsiIconBox);
        dsiIconImage->setObjectName("dsiIconImage");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dsiIconImage->sizePolicy().hasHeightForWidth());
        dsiIconImage->setSizePolicy(sizePolicy5);
        dsiIconImage->setMinimumSize(QSize(32, 32));
        dsiIconImage->setMaximumSize(QSize(32, 32));
        dsiIconImage->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(dsiIconImage, 0, 0, 1, 1);


        gridLayout_9->addWidget(dsiIconBox, 0, 2, 1, 1, Qt::AlignHCenter);

        saveAnimatedIconButton = new QPushButton(groupBox_2);
        saveAnimatedIconButton->setObjectName("saveAnimatedIconButton");
        saveAnimatedIconButton->setEnabled(false);

        gridLayout_9->addWidget(saveAnimatedIconButton, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_3, 0, 3, 2, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 0, 0, 2, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 2);


        retranslateUi(ROMInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ROMInfoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ROMInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ROMInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ROMInfoDialog)
    {
        ROMInfoDialog->setWindowTitle(QCoreApplication::translate("ROMInfoDialog", "ROM info - melonDS", nullptr));
        titles->setTitle(QCoreApplication::translate("ROMInfoDialog", "Titles", nullptr));
        label_2->setText(QCoreApplication::translate("ROMInfoDialog", "Japanese title:", nullptr));
        japaneseTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[japanese title]", nullptr));
        label_3->setText(QCoreApplication::translate("ROMInfoDialog", "English title:", nullptr));
        englishTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[english title]", nullptr));
        label_4->setText(QCoreApplication::translate("ROMInfoDialog", "French title:", nullptr));
        frenchTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[french title]", nullptr));
        label_5->setText(QCoreApplication::translate("ROMInfoDialog", "German title:", nullptr));
        germanTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[german title]", nullptr));
        label_6->setText(QCoreApplication::translate("ROMInfoDialog", "Italian title:", nullptr));
        italianTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[italian title]", nullptr));
        label_7->setText(QCoreApplication::translate("ROMInfoDialog", "Spanish title:", nullptr));
        spanishTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[spanish title]", nullptr));
        label_25->setText(QCoreApplication::translate("ROMInfoDialog", "Chinese title:", nullptr));
        chineseTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[chinese title]", nullptr));
        label_23->setText(QCoreApplication::translate("ROMInfoDialog", "Korean title:", nullptr));
        koreanTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[korean title]", nullptr));
        arm9AndArm7Binaries->setTitle(QCoreApplication::translate("ROMInfoDialog", "ARM7 and ARM9 binaries", nullptr));
        label_11->setText(QCoreApplication::translate("ROMInfoDialog", "ARM9 ROM offset: ", nullptr));
        arm9RomOffset->setText(QCoreApplication::translate("ROMInfoDialog", "[arm9 rom offset]", nullptr));
        label_12->setText(QCoreApplication::translate("ROMInfoDialog", "ARM9 entry address:", nullptr));
        arm9EntryAddress->setText(QCoreApplication::translate("ROMInfoDialog", "[arm9 entry address]", nullptr));
        label_14->setText(QCoreApplication::translate("ROMInfoDialog", "ARM9 RAM address:", nullptr));
        arm9RamAddress->setText(QCoreApplication::translate("ROMInfoDialog", "[arm9 ram address]", nullptr));
        label_16->setText(QCoreApplication::translate("ROMInfoDialog", "ARM9 size:", nullptr));
        arm9Size->setText(QCoreApplication::translate("ROMInfoDialog", "[arm9 size]", nullptr));
        label_15->setText(QCoreApplication::translate("ROMInfoDialog", "ARM7 ROM offset: ", nullptr));
        arm7RomOffset->setText(QCoreApplication::translate("ROMInfoDialog", "[arm7 rom offset]", nullptr));
        label_13->setText(QCoreApplication::translate("ROMInfoDialog", "ARM7 entry address:", nullptr));
        arm7EntryAddress->setText(QCoreApplication::translate("ROMInfoDialog", "[arm7 entry address]", nullptr));
        label_18->setText(QCoreApplication::translate("ROMInfoDialog", "ARM7 RAM address:", nullptr));
        arm7RamAddress->setText(QCoreApplication::translate("ROMInfoDialog", "[arm7 ram address]", nullptr));
        label_17->setText(QCoreApplication::translate("ROMInfoDialog", "ARM7 size:", nullptr));
        arm7Size->setText(QCoreApplication::translate("ROMInfoDialog", "[arm7 size]", nullptr));
        filesystem->setTitle(QCoreApplication::translate("ROMInfoDialog", "Filesystem", nullptr));
        label_19->setText(QCoreApplication::translate("ROMInfoDialog", "FNT offset:", nullptr));
        fntOffset->setText(QCoreApplication::translate("ROMInfoDialog", "[fnt offset]", nullptr));
        label_20->setText(QCoreApplication::translate("ROMInfoDialog", "FNT size:", nullptr));
        fntSize->setText(QCoreApplication::translate("ROMInfoDialog", "[fnt size]", nullptr));
        label_21->setText(QCoreApplication::translate("ROMInfoDialog", "FAT offset:", nullptr));
        fatOffset->setText(QCoreApplication::translate("ROMInfoDialog", "[fat offset]", nullptr));
        label_22->setText(QCoreApplication::translate("ROMInfoDialog", "FAT size:", nullptr));
        fatSize->setText(QCoreApplication::translate("ROMInfoDialog", "[fat size]", nullptr));
        generalInfo->setTitle(QCoreApplication::translate("ROMInfoDialog", "General info", nullptr));
        label->setText(QCoreApplication::translate("ROMInfoDialog", "Game title:", nullptr));
        gameTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[game title]", nullptr));
        label_8->setText(QCoreApplication::translate("ROMInfoDialog", "Game code:", nullptr));
        gameCode->setText(QCoreApplication::translate("ROMInfoDialog", "[game code]", nullptr));
        label_9->setText(QCoreApplication::translate("ROMInfoDialog", "Maker code:", nullptr));
        makerCode->setText(QCoreApplication::translate("ROMInfoDialog", "[maker code]", nullptr));
        label_10->setText(QCoreApplication::translate("ROMInfoDialog", "Card size:", nullptr));
        cardSize->setText(QCoreApplication::translate("ROMInfoDialog", "[card size]", nullptr));
        saveIconButton->setText(QCoreApplication::translate("ROMInfoDialog", "Save icon", nullptr));
        iconBox->setTitle(QString());
        iconImage->setText(QCoreApplication::translate("ROMInfoDialog", "[icon]", nullptr));
        titleBox->setTitle(QString());
        iconTitle->setText(QCoreApplication::translate("ROMInfoDialog", "[title]", nullptr));
        dsiIconBox->setTitle(QString());
        dsiIconImage->setText(QCoreApplication::translate("ROMInfoDialog", "[dsi icon]", nullptr));
        saveAnimatedIconButton->setText(QCoreApplication::translate("ROMInfoDialog", "Save animated icon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ROMInfoDialog: public Ui_ROMInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMINFODIALOG_H
