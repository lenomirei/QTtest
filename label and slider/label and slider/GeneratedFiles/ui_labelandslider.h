/********************************************************************************
** Form generated from reading UI file 'labelandslider.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELANDSLIDER_H
#define UI_LABELANDSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_labelandsliderClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *labelandsliderClass)
    {
        if (labelandsliderClass->objectName().isEmpty())
            labelandsliderClass->setObjectName(QStringLiteral("labelandsliderClass"));
        labelandsliderClass->resize(600, 400);
        centralWidget = new QWidget(labelandsliderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 70, 361, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(horizontalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        labelandsliderClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(labelandsliderClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        labelandsliderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(labelandsliderClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        labelandsliderClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(labelandsliderClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        labelandsliderClass->setStatusBar(statusBar);

        retranslateUi(labelandsliderClass);

        QMetaObject::connectSlotsByName(labelandsliderClass);
    } // setupUi

    void retranslateUi(QMainWindow *labelandsliderClass)
    {
        labelandsliderClass->setWindowTitle(QApplication::translate("labelandsliderClass", "labelandslider", 0));
        label->setText(QApplication::translate("labelandsliderClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class labelandsliderClass: public Ui_labelandsliderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELANDSLIDER_H
