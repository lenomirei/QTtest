/********************************************************************************
** Form generated from reading UI file 'celldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELLDIALOG_H
#define UI_CELLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_celldialogClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOK;
    QPushButton *buttonCancel;

    void setupUi(QDialog *celldialogClass)
    {
        if (celldialogClass->objectName().isEmpty())
            celldialogClass->setObjectName(QStringLiteral("celldialogClass"));
        celldialogClass->resize(268, 127);
        layoutWidget = new QWidget(celldialogClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 181, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(celldialogClass);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 60, 204, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonOK = new QPushButton(layoutWidget1);
        buttonOK->setObjectName(QStringLiteral("buttonOK"));

        horizontalLayout_2->addWidget(buttonOK);

        buttonCancel = new QPushButton(layoutWidget1);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, buttonOK);
        QWidget::setTabOrder(buttonOK, buttonCancel);

        retranslateUi(celldialogClass);

        QMetaObject::connectSlotsByName(celldialogClass);
    } // setupUi

    void retranslateUi(QDialog *celldialogClass)
    {
        celldialogClass->setWindowTitle(QApplication::translate("celldialogClass", "celldialog", 0));
        label->setText(QApplication::translate("celldialogClass", "&Cell Location:", 0));
        buttonOK->setText(QApplication::translate("celldialogClass", "OK", 0));
        buttonCancel->setText(QApplication::translate("celldialogClass", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class celldialogClass: public Ui_celldialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELLDIALOG_H
