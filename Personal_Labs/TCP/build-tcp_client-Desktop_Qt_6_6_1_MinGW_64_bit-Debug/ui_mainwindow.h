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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *SB_port;
    QPushButton *PB_connectClient;
    QVBoxLayout *verticalLayout;
    QPushButton *PB_Hello;
    QPushButton *PB_Bye;
    QPushButton *PB_WAYD;
    QPushButton *PB_HYD;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(607, 196);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        SB_port = new QSpinBox(groupBox);
        SB_port->setObjectName("SB_port");
        SB_port->setMaximum(99999);
        SB_port->setValue(6164);

        horizontalLayout_5->addWidget(SB_port);

        PB_connectClient = new QPushButton(groupBox);
        PB_connectClient->setObjectName("PB_connectClient");

        horizontalLayout_5->addWidget(PB_connectClient);


        horizontalLayout_4->addWidget(groupBox);


        horizontalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        PB_Hello = new QPushButton(centralwidget);
        PB_Hello->setObjectName("PB_Hello");

        verticalLayout->addWidget(PB_Hello);

        PB_Bye = new QPushButton(centralwidget);
        PB_Bye->setObjectName("PB_Bye");

        verticalLayout->addWidget(PB_Bye);

        PB_WAYD = new QPushButton(centralwidget);
        PB_WAYD->setObjectName("PB_WAYD");

        verticalLayout->addWidget(PB_WAYD);

        PB_HYD = new QPushButton(centralwidget);
        PB_HYD->setObjectName("PB_HYD");

        verticalLayout->addWidget(PB_HYD);


        horizontalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 0, 1, 1, 1);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 607, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Connect To Server", nullptr));
        PB_connectClient->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        PB_Hello->setText(QCoreApplication::translate("MainWindow", "Say Hello", nullptr));
        PB_Bye->setText(QCoreApplication::translate("MainWindow", "Say Bye", nullptr));
        PB_WAYD->setText(QCoreApplication::translate("MainWindow", "Say What Are you doing", nullptr));
        PB_HYD->setText(QCoreApplication::translate("MainWindow", "Say How is it going", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Send Number", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Send Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
