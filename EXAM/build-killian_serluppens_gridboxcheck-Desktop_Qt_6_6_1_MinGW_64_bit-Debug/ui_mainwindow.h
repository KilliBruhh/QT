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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_Data;
    QAction *actionSave_Data;
    QAction *actionExit;
    QAction *actionPreferences;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *GB_Field;
    QGroupBox *GB_Stats;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *L_Total;
    QLabel *label_5;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *L_UnChecked;
    QLabel *label_3;
    QLabel *L_Checked;
    QPushButton *PB_Test;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuPreferences;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionLoad_Data = new QAction(MainWindow);
        actionLoad_Data->setObjectName("actionLoad_Data");
        actionSave_Data = new QAction(MainWindow);
        actionSave_Data->setObjectName("actionSave_Data");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        GB_Field = new QGroupBox(centralwidget);
        GB_Field->setObjectName("GB_Field");

        horizontalLayout->addWidget(GB_Field);

        GB_Stats = new QGroupBox(centralwidget);
        GB_Stats->setObjectName("GB_Stats");
        verticalLayout_2 = new QVBoxLayout(GB_Stats);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        L_Total = new QLabel(GB_Stats);
        L_Total->setObjectName("L_Total");

        gridLayout->addWidget(L_Total, 2, 1, 1, 1);

        label_5 = new QLabel(GB_Stats);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label = new QLabel(GB_Stats);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        L_UnChecked = new QLabel(GB_Stats);
        L_UnChecked->setObjectName("L_UnChecked");

        gridLayout->addWidget(L_UnChecked, 1, 1, 1, 1);

        label_3 = new QLabel(GB_Stats);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        L_Checked = new QLabel(GB_Stats);
        L_Checked->setObjectName("L_Checked");

        gridLayout->addWidget(L_Checked, 0, 1, 1, 1);

        PB_Test = new QPushButton(GB_Stats);
        PB_Test->setObjectName("PB_Test");

        gridLayout->addWidget(PB_Test, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout->addWidget(GB_Stats);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuPreferences = new QMenu(menubar);
        menuPreferences->setObjectName("menuPreferences");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPreferences->menuAction());
        menuFile->addAction(actionLoad_Data);
        menuFile->addAction(actionSave_Data);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuPreferences->addAction(actionPreferences);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad_Data->setText(QCoreApplication::translate("MainWindow", "Load Data", nullptr));
        actionSave_Data->setText(QCoreApplication::translate("MainWindow", "Save Data", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        GB_Field->setTitle(QCoreApplication::translate("MainWindow", "Field", nullptr));
        GB_Stats->setTitle(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        L_Total->setText(QCoreApplication::translate("MainWindow", "0 (0%)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Checked:", nullptr));
        L_UnChecked->setText(QCoreApplication::translate("MainWindow", "0 (0%)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "UnChecked:", nullptr));
        L_Checked->setText(QCoreApplication::translate("MainWindow", "0 (0%)", nullptr));
        PB_Test->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuPreferences->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
