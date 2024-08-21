/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pointwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *LE_host;
    QSpinBox *SB_port;
    QPushButton *PB_connect;
    QHBoxLayout *horizontalLayout_2;
    pointWidget *widget;
    QLabel *L_connectionStatus;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 579);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        LE_host = new QLineEdit(centralwidget);
        LE_host->setObjectName("LE_host");

        horizontalLayout->addWidget(LE_host);

        SB_port = new QSpinBox(centralwidget);
        SB_port->setObjectName("SB_port");
        SB_port->setMaximum(100000);
        SB_port->setValue(64000);

        horizontalLayout->addWidget(SB_port);

        PB_connect = new QPushButton(centralwidget);
        PB_connect->setObjectName("PB_connect");

        horizontalLayout->addWidget(PB_connect);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget = new pointWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(500, 500));
        widget->setBaseSize(QSize(0, 0));

        horizontalLayout_2->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout_2);

        L_connectionStatus = new QLabel(centralwidget);
        L_connectionStatus->setObjectName("L_connectionStatus");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(L_connectionStatus->sizePolicy().hasHeightForWidth());
        L_connectionStatus->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(L_connectionStatus);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 25));
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName("menuFIle");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFIle->menuAction());
        menuFIle->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        LE_host->setText(QCoreApplication::translate("MainWindow", "localhost", nullptr));
        PB_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        L_connectionStatus->setText(QCoreApplication::translate("MainWindow", "Status: NOT CONNECTED", nullptr));
        menuFIle->setTitle(QCoreApplication::translate("MainWindow", "FIle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
