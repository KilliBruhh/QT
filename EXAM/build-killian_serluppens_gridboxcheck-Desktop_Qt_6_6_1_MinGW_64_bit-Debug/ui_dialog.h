/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *SB_Rows;
    QSpinBox *SB_Colums;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *PB_Ok;
    QPushButton *PB_Cancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(428, 233);
        centralwidget = new QWidget(Dialog);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        SB_Rows = new QSpinBox(centralwidget);
        SB_Rows->setObjectName("SB_Rows");
        SB_Rows->setValue(10);

        gridLayout->addWidget(SB_Rows, 1, 1, 1, 1);

        SB_Colums = new QSpinBox(centralwidget);
        SB_Colums->setObjectName("SB_Colums");
        SB_Colums->setValue(5);

        gridLayout->addWidget(SB_Colums, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PB_Ok = new QPushButton(centralwidget);
        PB_Ok->setObjectName("PB_Ok");

        horizontalLayout->addWidget(PB_Ok);

        PB_Cancel = new QPushButton(centralwidget);
        PB_Cancel->setObjectName("PB_Cancel");

        horizontalLayout->addWidget(PB_Cancel);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Dialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dialog);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 428, 25));
        Dialog->setMenuBar(menubar);
        statusbar = new QStatusBar(Dialog);
        statusbar->setObjectName("statusbar");
        Dialog->setStatusBar(statusbar);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QMainWindow *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Number of Rows", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Number Of colums", nullptr));
        PB_Ok->setText(QCoreApplication::translate("Dialog", "Ok", nullptr));
        PB_Cancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
