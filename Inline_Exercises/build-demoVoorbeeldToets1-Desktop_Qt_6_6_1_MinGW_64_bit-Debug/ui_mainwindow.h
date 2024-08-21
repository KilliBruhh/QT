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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *gbInit;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pbOk;
    QGroupBox *gbTestArea;
    QGroupBox *gbButtons;
    QVBoxLayout *verticalLayout;
    QPushButton *pbSave;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(806, 408);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        gbInit = new QGroupBox(centralwidget);
        gbInit->setObjectName("gbInit");
        formLayout = new QFormLayout(gbInit);
        formLayout->setObjectName("formLayout");
        label = new QLabel(gbInit);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(gbInit);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        pbOk = new QPushButton(gbInit);
        pbOk->setObjectName("pbOk");

        formLayout->setWidget(1, QFormLayout::SpanningRole, pbOk);


        horizontalLayout->addWidget(gbInit);

        gbTestArea = new QGroupBox(centralwidget);
        gbTestArea->setObjectName("gbTestArea");

        horizontalLayout->addWidget(gbTestArea);

        gbButtons = new QGroupBox(centralwidget);
        gbButtons->setObjectName("gbButtons");
        verticalLayout = new QVBoxLayout(gbButtons);
        verticalLayout->setObjectName("verticalLayout");
        pbSave = new QPushButton(gbButtons);
        pbSave->setObjectName("pbSave");

        verticalLayout->addWidget(pbSave);

        pushButton_3 = new QPushButton(gbButtons);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(gbButtons);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        listWidget = new QListWidget(gbButtons);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addWidget(gbButtons);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 806, 21));
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
        gbInit->setTitle(QCoreApplication::translate("MainWindow", "init", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "aantal sliders:", nullptr));
        pbOk->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
        gbTestArea->setTitle(QCoreApplication::translate("MainWindow", "test area", nullptr));
        gbButtons->setTitle(QCoreApplication::translate("MainWindow", "buttons", nullptr));
        pbSave->setText(QCoreApplication::translate("MainWindow", "Save Step", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
