/********************************************************************************
** Form generated from reading UI file 'JawListWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JAWLISTWIDGET_H
#define UI_JAWLISTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JawListWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *path_Btn;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_stic;
    QLabel *label_jawcount;

    void setupUi(QWidget *JawListWidget)
    {
        if (JawListWidget->objectName().isEmpty())
            JawListWidget->setObjectName(QString::fromUtf8("JawListWidget"));
        JawListWidget->setWindowModality(Qt::WindowModal);
        JawListWidget->resize(695, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JawListWidget->sizePolicy().hasHeightForWidth());
        JawListWidget->setSizePolicy(sizePolicy);
        JawListWidget->setMinimumSize(QSize(695, 450));
        JawListWidget->setMaximumSize(QSize(695, 450));
        verticalLayout = new QVBoxLayout(JawListWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(6, 0, 6, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        lineEdit = new QLineEdit(JawListWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit);

        path_Btn = new QPushButton(JawListWidget);
        path_Btn->setObjectName(QString::fromUtf8("path_Btn"));

        horizontalLayout_2->addWidget(path_Btn);

        horizontalSpacer_2 = new QSpacerItem(10, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(JawListWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setSortingEnabled(true);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 7, 2);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_stic = new QLabel(JawListWidget);
        label_stic->setObjectName(QString::fromUtf8("label_stic"));
        sizePolicy.setHeightForWidth(label_stic->sizePolicy().hasHeightForWidth());
        label_stic->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_stic);

        label_jawcount = new QLabel(JawListWidget);
        label_jawcount->setObjectName(QString::fromUtf8("label_jawcount"));

        horizontalLayout->addWidget(label_jawcount);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(JawListWidget);

        QMetaObject::connectSlotsByName(JawListWidget);
    } // setupUi

    void retranslateUi(QWidget *JawListWidget)
    {
        JawListWidget->setWindowTitle(QCoreApplication::translate("JawListWidget", "JawListWidget", nullptr));
        path_Btn->setText(QCoreApplication::translate("JawListWidget", "\351\200\211\346\213\251", nullptr));
#if QT_CONFIG(statustip)
        listWidget->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label_stic->setText(QCoreApplication::translate("JawListWidget", "\346\226\207\344\273\266\346\200\273\346\225\260\357\274\232", nullptr));
        label_jawcount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JawListWidget: public Ui_JawListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JAWLISTWIDGET_H
