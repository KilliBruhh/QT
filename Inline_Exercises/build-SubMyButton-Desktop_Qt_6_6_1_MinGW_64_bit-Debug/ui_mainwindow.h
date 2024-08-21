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
#include "sliderarray.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_From_File;
    QAction *actionSave_To_File;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *GB_1_Init;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *amt_sliders;
    QPushButton *submit_sliders;
    QSpacerItem *verticalSpacer;
    QGroupBox *GB_2_TestArea;
    QHBoxLayout *horizontalLayout;
    SliderArray *sliderWidget;
    QGroupBox *GB_3_Buttons;
    QVBoxLayout *verticalLayout_3;
    QPushButton *saveStepButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionLoad_From_File = new QAction(MainWindow);
        actionLoad_From_File->setObjectName("actionLoad_From_File");
        actionSave_To_File = new QAction(MainWindow);
        actionSave_To_File->setObjectName("actionSave_To_File");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        GB_1_Init = new QGroupBox(centralwidget);
        GB_1_Init->setObjectName("GB_1_Init");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GB_1_Init->sizePolicy().hasHeightForWidth());
        GB_1_Init->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(GB_1_Init);
        verticalLayout_2->setObjectName("verticalLayout_2");
        amt_sliders = new QSpinBox(GB_1_Init);
        amt_sliders->setObjectName("amt_sliders");

        verticalLayout_2->addWidget(amt_sliders);

        submit_sliders = new QPushButton(GB_1_Init);
        submit_sliders->setObjectName("submit_sliders");

        verticalLayout_2->addWidget(submit_sliders);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(GB_1_Init);

        GB_2_TestArea = new QGroupBox(centralwidget);
        GB_2_TestArea->setObjectName("GB_2_TestArea");
        GB_2_TestArea->setEnabled(true);
        sizePolicy.setHeightForWidth(GB_2_TestArea->sizePolicy().hasHeightForWidth());
        GB_2_TestArea->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(GB_2_TestArea);
        horizontalLayout->setObjectName("horizontalLayout");
        sliderWidget = new SliderArray(GB_2_TestArea);
        sliderWidget->setObjectName("sliderWidget");

        horizontalLayout->addWidget(sliderWidget);


        horizontalLayout_2->addWidget(GB_2_TestArea);

        GB_3_Buttons = new QGroupBox(centralwidget);
        GB_3_Buttons->setObjectName("GB_3_Buttons");
        sizePolicy.setHeightForWidth(GB_3_Buttons->sizePolicy().hasHeightForWidth());
        GB_3_Buttons->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(GB_3_Buttons);
        verticalLayout_3->setObjectName("verticalLayout_3");
        saveStepButton = new QPushButton(GB_3_Buttons);
        saveStepButton->setObjectName("saveStepButton");

        verticalLayout_3->addWidget(saveStepButton);

        pushButton_4 = new QPushButton(GB_3_Buttons);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(GB_3_Buttons);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);

        listWidget = new QListWidget(GB_3_Buttons);
        listWidget->setObjectName("listWidget");

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout_2->addWidget(GB_3_Buttons);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad_From_File);
        menuFile->addAction(actionSave_To_File);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad_From_File->setText(QCoreApplication::translate("MainWindow", "Load From File", nullptr));
        actionSave_To_File->setText(QCoreApplication::translate("MainWindow", "Save To File", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        GB_1_Init->setTitle(QCoreApplication::translate("MainWindow", "Init", nullptr));
        submit_sliders->setText(QCoreApplication::translate("MainWindow", "Commit", nullptr));
        GB_2_TestArea->setTitle(QCoreApplication::translate("MainWindow", "Test Area", nullptr));
        GB_3_Buttons->setTitle(QCoreApplication::translate("MainWindow", "Buttons", nullptr));
        saveStepButton->setText(QCoreApplication::translate("MainWindow", "Save Step", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Cycle Through Step", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
class MainWindow: public Ui_MainWindow {private slots:
    void on_submit_sliders_clicked();
};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
