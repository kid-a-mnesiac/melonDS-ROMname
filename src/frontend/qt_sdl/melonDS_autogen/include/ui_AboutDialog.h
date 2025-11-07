/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblLogo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *lblVersionInfo;
    QLabel *label_4;
    QLabel *lblBuildInfo;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOpenWebsite;
    QPushButton *btnOpenGitHub;
    QPushButton *btnClose;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(600, 304);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(600, 0));
        AboutDialog->setModal(false);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout->setContentsMargins(-1, -1, -1, 12);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(24);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        lblLogo = new QLabel(AboutDialog);
        lblLogo->setObjectName("lblLogo");
        lblLogo->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblLogo->sizePolicy().hasHeightForWidth());
        lblLogo->setSizePolicy(sizePolicy1);
        lblLogo->setMaximumSize(QSize(128, 128));
        lblLogo->setBaseSize(QSize(128, 128));
        lblLogo->setTextFormat(Qt::TextFormat::PlainText);
        lblLogo->setPixmap(QPixmap(QString::fromUtf8(":/melon-icon")));
        lblLogo->setScaledContents(true);
        lblLogo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lblLogo->setMargin(0);
        lblLogo->setIndent(0);

        horizontalLayout_2->addWidget(lblLogo, 0, Qt::AlignmentFlag::AlignTop);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        QFont font;
        font.setPointSize(32);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignmentFlag::AlignTop);

        lblVersionInfo = new QLabel(AboutDialog);
        lblVersionInfo->setObjectName("lblVersionInfo");
        lblVersionInfo->setEnabled(true);
        lblVersionInfo->setTextFormat(Qt::TextFormat::MarkdownText);

        verticalLayout_2->addWidget(lblVersionInfo);

        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName("label_4");
        label_4->setEnabled(true);
        label_4->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(label_4);

        lblBuildInfo = new QLabel(AboutDialog);
        lblBuildInfo->setObjectName("lblBuildInfo");
        lblBuildInfo->setEnabled(true);
        lblBuildInfo->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout_2->addWidget(lblBuildInfo);

        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName("label_3");
        label_3->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setTextFormat(Qt::TextFormat::RichText);
        label_3->setWordWrap(false);

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignmentFlag::AlignBottom);

        verticalLayout_2->setStretch(4, 1);

        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 12, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOpenWebsite = new QPushButton(AboutDialog);
        btnOpenWebsite->setObjectName("btnOpenWebsite");
        btnOpenWebsite->setEnabled(true);
        btnOpenWebsite->setFlat(true);

        horizontalLayout_3->addWidget(btnOpenWebsite);

        btnOpenGitHub = new QPushButton(AboutDialog);
        btnOpenGitHub->setObjectName("btnOpenGitHub");
        btnOpenGitHub->setEnabled(true);
        btnOpenGitHub->setFlat(true);

        horizontalLayout_3->addWidget(btnOpenGitHub);

        btnClose = new QPushButton(AboutDialog);
        btnClose->setObjectName("btnClose");
        btnClose->setEnabled(true);

        horizontalLayout_3->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 1);

        retranslateUi(AboutDialog);
        QObject::connect(btnClose, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnOpenGitHub, SIGNAL(clicked()), AboutDialog, SLOT(openGitHub()));
        QObject::connect(btnOpenWebsite, SIGNAL(clicked()), AboutDialog, SLOT(openWebsite()));

        btnClose->setDefault(true);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About melonDS", nullptr));
        lblLogo->setText(QString());
        label_2->setText(QCoreApplication::translate("AboutDialog", "melonDS", nullptr));
        lblVersionInfo->setText(QCoreApplication::translate("AboutDialog", "[VERSION INFO PLACEHOLDER]", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "By Arisotura, the melonDS team <a href=\"https://github.com/melonDS-emu/melonDS/graphs/contributors\">and contributors</a>.", nullptr));
        lblBuildInfo->setText(QCoreApplication::translate("AboutDialog", "[EMBEDDED BUILD INFO PLACEHOLDER]", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Licensed under the GNU General Public License v3 or any newer version.</p><p>melonDS is intended only for use with software that you own.</p><p>The Nintendo DS and Nintendo DSi systems are the property of Nintendo.<br />melonDS and the melonDS team are not affiliated with or endorsed by Nintendo.</p></body></html>", nullptr));
        btnOpenWebsite->setText(QCoreApplication::translate("AboutDialog", "Visit the &website", nullptr));
        btnOpenGitHub->setText(QCoreApplication::translate("AboutDialog", "View on &GitHub", nullptr));
        btnClose->setText(QCoreApplication::translate("AboutDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
