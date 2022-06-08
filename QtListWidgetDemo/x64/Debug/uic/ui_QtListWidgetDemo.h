/********************************************************************************
** Form generated from reading UI file 'QtListWidgetDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLISTWIDGETDEMO_H
#define UI_QTLISTWIDGETDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtListWidgetDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtListWidgetDemoClass)
    {
        if (QtListWidgetDemoClass->objectName().isEmpty())
            QtListWidgetDemoClass->setObjectName(QString::fromUtf8("QtListWidgetDemoClass"));
        QtListWidgetDemoClass->resize(600, 400);
        menuBar = new QMenuBar(QtListWidgetDemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtListWidgetDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtListWidgetDemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtListWidgetDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtListWidgetDemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtListWidgetDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtListWidgetDemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtListWidgetDemoClass->setStatusBar(statusBar);

        retranslateUi(QtListWidgetDemoClass);

        QMetaObject::connectSlotsByName(QtListWidgetDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtListWidgetDemoClass)
    {
        QtListWidgetDemoClass->setWindowTitle(QCoreApplication::translate("QtListWidgetDemoClass", "QtListWidgetDemo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtListWidgetDemoClass: public Ui_QtListWidgetDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLISTWIDGETDEMO_H
