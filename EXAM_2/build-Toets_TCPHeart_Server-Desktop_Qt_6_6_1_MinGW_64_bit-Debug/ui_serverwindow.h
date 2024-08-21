/********************************************************************************
** Form generated from reading UI file 'serverwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWINDOW_H
#define UI_SERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lblStatus;
    QCheckBox *cbNetwork;
    QCheckBox *cbRandom;
    QPlainTextEdit *debug;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ServerWindow)
    {
        if (ServerWindow->objectName().isEmpty())
            ServerWindow->setObjectName("ServerWindow");
        ServerWindow->resize(613, 359);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/server.png"), QSize(), QIcon::Normal, QIcon::Off);
        ServerWindow->setWindowIcon(icon);
        actionExit = new QAction(ServerWindow);
        actionExit->setObjectName("actionExit");
        centralWidget = new QWidget(ServerWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        lblStatus = new QLineEdit(centralWidget);
        lblStatus->setObjectName("lblStatus");
        lblStatus->setStyleSheet(QString::fromUtf8("QLineEdit { background-color: transparent }"));
        lblStatus->setFrame(false);
        lblStatus->setReadOnly(true);

        verticalLayout->addWidget(lblStatus);

        cbNetwork = new QCheckBox(centralWidget);
        cbNetwork->setObjectName("cbNetwork");

        verticalLayout->addWidget(cbNetwork);

        cbRandom = new QCheckBox(centralWidget);
        cbRandom->setObjectName("cbRandom");
        cbRandom->setChecked(true);

        verticalLayout->addWidget(cbRandom);

        debug = new QPlainTextEdit(centralWidget);
        debug->setObjectName("debug");
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        debug->setFont(font);

        verticalLayout->addWidget(debug);

        ServerWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ServerWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 613, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        ServerWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(ServerWindow);
        statusBar->setObjectName("statusBar");
        ServerWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(ServerWindow);
        QObject::connect(actionExit, &QAction::triggered, ServerWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(ServerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ServerWindow)
    {
        ServerWindow->setWindowTitle(QCoreApplication::translate("ServerWindow", "Server Application", nullptr));
        actionExit->setText(QCoreApplication::translate("ServerWindow", "Exit", nullptr));
        cbNetwork->setText(QCoreApplication::translate("ServerWindow", "Simulate \"slow\" network.", nullptr));
        cbRandom->setText(QCoreApplication::translate("ServerWindow", "Use random data", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ServerWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWindow: public Ui_ServerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWINDOW_H
