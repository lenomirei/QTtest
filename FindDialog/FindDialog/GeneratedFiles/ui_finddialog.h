/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindDialogClass
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *findbutton;
    QPushButton *closebutton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FindDialogClass)
    {
        if (FindDialogClass->objectName().isEmpty())
            FindDialogClass->setObjectName(QStringLiteral("FindDialogClass"));
        FindDialogClass->resize(314, 161);
        horizontalLayoutWidget = new QWidget(FindDialogClass);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 261, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, -1, -1);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(checkBox_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 6, -1, 6);
        findbutton = new QPushButton(horizontalLayoutWidget);
        findbutton->setObjectName(QStringLiteral("findbutton"));

        verticalLayout_4->addWidget(findbutton);

        closebutton = new QPushButton(horizontalLayoutWidget);
        closebutton->setObjectName(QStringLiteral("closebutton"));

        verticalLayout_4->addWidget(closebutton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(FindDialogClass);

        QMetaObject::connectSlotsByName(FindDialogClass);
    } // setupUi

    void retranslateUi(QDialog *FindDialogClass)
    {
        FindDialogClass->setWindowTitle(QApplication::translate("FindDialogClass", "FindDialog", 0));
        label->setText(QApplication::translate("FindDialogClass", "Find what", 0));
        checkBox->setText(QApplication::translate("FindDialogClass", "Match case", 0));
        checkBox_2->setText(QApplication::translate("FindDialogClass", "Search backward", 0));
        findbutton->setText(QApplication::translate("FindDialogClass", "Find", 0));
        closebutton->setText(QApplication::translate("FindDialogClass", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class FindDialogClass: public Ui_FindDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
