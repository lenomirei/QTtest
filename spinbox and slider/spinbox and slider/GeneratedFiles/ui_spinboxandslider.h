/********************************************************************************
** Form generated from reading UI file 'spinboxandslider.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPINBOXANDSLIDER_H
#define UI_SPINBOXANDSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spinboxandsliderClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *spinboxandsliderClass)
    {
        if (spinboxandsliderClass->objectName().isEmpty())
            spinboxandsliderClass->setObjectName(QStringLiteral("spinboxandsliderClass"));
        spinboxandsliderClass->resize(600, 400);
        centralWidget = new QWidget(spinboxandsliderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 70, 341, 161));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinboxandsliderClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(spinboxandsliderClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        spinboxandsliderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(spinboxandsliderClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        spinboxandsliderClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(spinboxandsliderClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        spinboxandsliderClass->setStatusBar(statusBar);

        retranslateUi(spinboxandsliderClass);

        QMetaObject::connectSlotsByName(spinboxandsliderClass);
    } // setupUi

    void retranslateUi(QMainWindow *spinboxandsliderClass)
    {
        spinboxandsliderClass->setWindowTitle(QApplication::translate("spinboxandsliderClass", "spinboxandslider", 0));
    } // retranslateUi

};

namespace Ui {
    class spinboxandsliderClass: public Ui_spinboxandsliderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINBOXANDSLIDER_H
