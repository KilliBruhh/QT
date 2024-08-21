/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpServer
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *PB_connect;
    QPushButton *PB_disconnect;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *LW_Result;
    QPushButton *PB_ClearResults;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *PB_connectClient;
    QPushButton *PB_clientHellow;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tcpServer)
    {
        if (tcpServer->objectName().isEmpty())
            tcpServer->setObjectName("tcpServer");
        tcpServer->resize(938, 620);
        centralwidget = new QWidget(tcpServer);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        PB_connect = new QPushButton(groupBox);
        PB_connect->setObjectName("PB_connect");

        verticalLayout->addWidget(PB_connect);

        PB_disconnect = new QPushButton(groupBox);
        PB_disconnect->setObjectName("PB_disconnect");

        verticalLayout->addWidget(PB_disconnect);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        LW_Result = new QListWidget(groupBox_2);
        LW_Result->setObjectName("LW_Result");

        verticalLayout_2->addWidget(LW_Result);

        PB_ClearResults = new QPushButton(groupBox_2);
        PB_ClearResults->setObjectName("PB_ClearResults");

        verticalLayout_2->addWidget(PB_ClearResults);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        PB_connectClient = new QPushButton(groupBox_3);
        PB_connectClient->setObjectName("PB_connectClient");

        verticalLayout_3->addWidget(PB_connectClient);

        PB_clientHellow = new QPushButton(groupBox_3);
        PB_clientHellow->setObjectName("PB_clientHellow");

        verticalLayout_3->addWidget(PB_clientHellow);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(groupBox_3);

        tcpServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tcpServer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 938, 21));
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName("menuFIle");
        tcpServer->setMenuBar(menubar);
        statusbar = new QStatusBar(tcpServer);
        statusbar->setObjectName("statusbar");
        tcpServer->setStatusBar(statusbar);

        menubar->addAction(menuFIle->menuAction());

        retranslateUi(tcpServer);

        QMetaObject::connectSlotsByName(tcpServer);
    } // setupUi

    void retranslateUi(QMainWindow *tcpServer)
    {
        tcpServer->setWindowTitle(QCoreApplication::translate("tcpServer", "tcpServer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tcpServer", "Actions", nullptr));
        PB_connect->setText(QCoreApplication::translate("tcpServer", "Connect To Server", nullptr));
        PB_disconnect->setText(QCoreApplication::translate("tcpServer", "Disconnect From Server", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("tcpServer", "Results", nullptr));
        PB_ClearResults->setText(QCoreApplication::translate("tcpServer", "Clear Results", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("tcpServer", "Test Client", nullptr));
        PB_connectClient->setText(QCoreApplication::translate("tcpServer", "Connect To Server", nullptr));
        PB_clientHellow->setText(QCoreApplication::translate("tcpServer", "Send Hello Wolrd", nullptr));
        menuFIle->setTitle(QCoreApplication::translate("tcpServer", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tcpServer: public Ui_tcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
