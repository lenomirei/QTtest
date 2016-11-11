/********************************************************************************
** Form generated from reading UI file 'testhexspinbox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTHEXSPINBOX_H
#define UI_TESTHEXSPINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testHexSpinBoxClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testHexSpinBoxClass)
    {
        if (testHexSpinBoxClass->objectName().isEmpty())
            testHexSpinBoxClass->setObjectName(QStringLiteral("testHexSpinBoxClass"));
        testHexSpinBoxClass->resize(600, 400);
        menuBar = new QMenuBar(testHexSpinBoxClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        testHexSpinBoxClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testHexSpinBoxClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        testHexSpinBoxClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testHexSpinBoxClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        testHexSpinBoxClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testHexSpinBoxClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        testHexSpinBoxClass->setStatusBar(statusBar);

        retranslateUi(testHexSpinBoxClass);

        QMetaObject::connectSlotsByName(testHexSpinBoxClass);
    } // setupUi

    void retranslateUi(QMainWindow *testHexSpinBoxClass)
    {
        testHexSpinBoxClass->setWindowTitle(QApplication::translate("testHexSpinBoxClass", "testHexSpinBox", 0));
    } // retranslateUi

};

namespace Ui {
    class testHexSpinBoxClass: public Ui_testHexSpinBoxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTHEXSPINBOX_H
