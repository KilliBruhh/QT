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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QHBoxLayout *horizontalLayout;
    QGroupBox *gb_Init;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pb_ok;
    QSpacerItem *verticalSpacer;
    QGroupBox *gb_TestArea;
    QWidget *widget;
    QGroupBox *gb_Buttons;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pb_save;
    QPushButton *pb_cycle;
    QPushButton *pb_delete;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gb_Init = new QGroupBox(centralwidget);
        gb_Init->setObjectName("gb_Init");
        verticalLayout_2 = new QVBoxLayout(gb_Init);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(gb_Init);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        spinBox = new QSpinBox(gb_Init);
        spinBox->setObjectName("spinBox");
        spinBox->setValue(10);

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        pb_ok = new QPushButton(gb_Init);
        pb_ok->setObjectName("pb_ok");

        verticalLayout_2->addWidget(pb_ok);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(gb_Init);

        gb_TestArea = new QGroupBox(centralwidget);
        gb_TestArea->setObjectName("gb_TestArea");
        widget = new QWidget(gb_TestArea);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(12, 31, 52, 494));

        horizontalLayout->addWidget(gb_TestArea);

        gb_Buttons = new QGroupBox(centralwidget);
        gb_Buttons->setObjectName("gb_Buttons");
        verticalLayout_5 = new QVBoxLayout(gb_Buttons);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        pb_save = new QPushButton(gb_Buttons);
        pb_save->setObjectName("pb_save");

        verticalLayout_4->addWidget(pb_save);

        pb_cycle = new QPushButton(gb_Buttons);
        pb_cycle->setObjectName("pb_cycle");

        verticalLayout_4->addWidget(pb_cycle);

        pb_delete = new QPushButton(gb_Buttons);
        pb_delete->setObjectName("pb_delete");

        verticalLayout_4->addWidget(pb_delete);

        listWidget = new QListWidget(gb_Buttons);
        listWidget->setObjectName("listWidget");

        verticalLayout_4->addWidget(listWidget);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(gb_Buttons);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gb_Init->setTitle(QCoreApplication::translate("MainWindow", "Init", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number OF Sliders", nullptr));
        pb_ok->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
        gb_TestArea->setTitle(QCoreApplication::translate("MainWindow", "Test Area", nullptr));
        gb_Buttons->setTitle(QCoreApplication::translate("MainWindow", "Buttons", nullptr));
        pb_save->setText(QCoreApplication::translate("MainWindow", "Save Step", nullptr));
        pb_cycle->setText(QCoreApplication::translate("MainWindow", "Cycle Steps", nullptr));
        pb_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
