/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *PointButton;
    QPushButton *pushButton7;
    QVBoxLayout *verticalLayout;
    QPushButton *ClearallButton;
    QPushButton *pushButton9;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QPushButton *MultiplyButton;
    QPushButton *MinusButton;
    QPushButton *equalButton;
    QPushButton *plusButton;
    QPushButton *ClearButton;
    QPushButton *pushButton6;
    QPushButton *pushButton3;
    QPushButton *pushButton2;
    QPushButton *pushButton8;
    QPushButton *pushButton0;
    QPushButton *DeletepushButton;
    QPushButton *DivideButton;
    QPushButton *pushButton1;
    QTextEdit *outputWindow;
    QVBoxLayout *verticalLayout_2;
    QListWidget *Historywindow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(746, 382);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 0, 482, 302));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PointButton = new QPushButton(gridLayoutWidget);
        PointButton->setObjectName("PointButton");

        gridLayout->addWidget(PointButton, 5, 2, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName("pushButton7");

        gridLayout->addWidget(pushButton7, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        gridLayout->addLayout(verticalLayout, 6, 0, 1, 2);

        ClearallButton = new QPushButton(gridLayoutWidget);
        ClearallButton->setObjectName("ClearallButton");

        gridLayout->addWidget(ClearallButton, 1, 0, 1, 2);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName("pushButton9");

        gridLayout->addWidget(pushButton9, 4, 2, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName("pushButton5");

        gridLayout->addWidget(pushButton5, 3, 1, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName("pushButton4");

        gridLayout->addWidget(pushButton4, 3, 0, 1, 1);

        MultiplyButton = new QPushButton(gridLayoutWidget);
        MultiplyButton->setObjectName("MultiplyButton");
        QFont font1;
        font1.setPointSize(15);
        MultiplyButton->setFont(font1);

        gridLayout->addWidget(MultiplyButton, 4, 3, 1, 1);

        MinusButton = new QPushButton(gridLayoutWidget);
        MinusButton->setObjectName("MinusButton");
        MinusButton->setFont(font1);

        gridLayout->addWidget(MinusButton, 3, 4, 1, 1);

        equalButton = new QPushButton(gridLayoutWidget);
        equalButton->setObjectName("equalButton");

        gridLayout->addWidget(equalButton, 5, 3, 1, 2);

        plusButton = new QPushButton(gridLayoutWidget);
        plusButton->setObjectName("plusButton");
        plusButton->setFont(font1);

        gridLayout->addWidget(plusButton, 3, 3, 1, 1);

        ClearButton = new QPushButton(gridLayoutWidget);
        ClearButton->setObjectName("ClearButton");

        gridLayout->addWidget(ClearButton, 1, 2, 1, 3);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName("pushButton6");

        gridLayout->addWidget(pushButton6, 3, 2, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName("pushButton3");

        gridLayout->addWidget(pushButton3, 2, 2, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName("pushButton2");

        gridLayout->addWidget(pushButton2, 2, 1, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName("pushButton8");

        gridLayout->addWidget(pushButton8, 4, 1, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        pushButton0->setObjectName("pushButton0");

        gridLayout->addWidget(pushButton0, 5, 1, 1, 1);

        DeletepushButton = new QPushButton(gridLayoutWidget);
        DeletepushButton->setObjectName("DeletepushButton");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        DeletepushButton->setIcon(icon);

        gridLayout->addWidget(DeletepushButton, 2, 3, 1, 2);

        DivideButton = new QPushButton(gridLayoutWidget);
        DivideButton->setObjectName("DivideButton");
        DivideButton->setFont(font1);

        gridLayout->addWidget(DivideButton, 4, 4, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName("pushButton1");

        gridLayout->addWidget(pushButton1, 2, 0, 1, 1);

        outputWindow = new QTextEdit(gridLayoutWidget);
        outputWindow->setObjectName("outputWindow");

        gridLayout->addWidget(outputWindow, 0, 0, 1, 5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        Historywindow = new QListWidget(gridLayoutWidget);
        Historywindow->setObjectName("Historywindow");

        verticalLayout_2->addWidget(Historywindow);


        gridLayout->addLayout(verticalLayout_2, 0, 5, 7, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 746, 27));
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
        PointButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        ClearallButton->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        MultiplyButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        MinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        equalButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        DeletepushButton->setText(QString());
        DivideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
