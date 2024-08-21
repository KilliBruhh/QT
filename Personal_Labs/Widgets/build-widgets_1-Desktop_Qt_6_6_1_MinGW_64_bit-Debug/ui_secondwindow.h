/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWIndow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpinBox *SB_data;
    QPushButton *PB_sendData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondWIndow)
    {
        if (SecondWIndow->objectName().isEmpty())
            SecondWIndow->setObjectName("SecondWIndow");
        SecondWIndow->resize(395, 131);
        centralwidget = new QWidget(SecondWIndow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        SB_data = new QSpinBox(centralwidget);
        SB_data->setObjectName("SB_data");

        horizontalLayout->addWidget(SB_data);

        PB_sendData = new QPushButton(centralwidget);
        PB_sendData->setObjectName("PB_sendData");

        horizontalLayout->addWidget(PB_sendData);

        SecondWIndow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondWIndow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 395, 21));
        SecondWIndow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondWIndow);
        statusbar->setObjectName("statusbar");
        SecondWIndow->setStatusBar(statusbar);

        retranslateUi(SecondWIndow);

        QMetaObject::connectSlotsByName(SecondWIndow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWIndow)
    {
        SecondWIndow->setWindowTitle(QCoreApplication::translate("SecondWIndow", "MainWindow", nullptr));
        PB_sendData->setText(QCoreApplication::translate("SecondWIndow", "SendData", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWIndow: public Ui_SecondWIndow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
