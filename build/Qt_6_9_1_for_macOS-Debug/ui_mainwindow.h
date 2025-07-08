/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnExpense;
    QPushButton *btnCompare;
    QPushButton *btnExper;
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *label_2;
    QProgressBar *progressBar_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(500, 20, 236, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnExpense = new QPushButton(verticalLayoutWidget);
        btnExpense->setObjectName("btnExpense");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/Expense_tracker.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnExpense->setIcon(icon);
        btnExpense->setIconSize(QSize(200, 200));

        verticalLayout->addWidget(btnExpense);

        btnCompare = new QPushButton(verticalLayoutWidget);
        btnCompare->setObjectName("btnCompare");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/Compare_contrast.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnCompare->setIcon(icon1);
        btnCompare->setIconSize(QSize(200, 200));

        verticalLayout->addWidget(btnCompare);

        btnExper = new QPushButton(verticalLayoutWidget);
        btnExper->setObjectName("btnExper");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/expert_insight .png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnExper->setIcon(icon2);
        btnExper->setIconSize(QSize(200, 200));

        verticalLayout->addWidget(btnExper);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 20, 221, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 25pt \"Arial Black\";\n"
"\n"
"}\n"
""));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(230, 210, 201, 23));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #cfcfcf;\n"
"    border-radius: 8px;\n"
"    text-align: center;\n"
"    height: 20px;\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: pink;\n"
"    width: 10px;\n"
"}"));
        progressBar->setValue(41);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 200, 201, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	\n"
"	font: 20pt \"Georgia\";\n"
"}\n"
""));
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(230, 270, 201, 23));
        progressBar_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid #cfcfcf;\n"
"    border-radius: 8px;\n"
"    text-align: center;\n"
"    height: 20px;\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: pink;\n"
"    width: 10px;\n"
"}"));
        progressBar_2->setValue(28);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 260, 201, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"\n"
"	\n"
"	font: 20pt \"Georgia\";\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
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
        btnExpense->setText(QString());
        btnCompare->setText(QString());
        btnExper->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "REVIEW PAGE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\360\237\222\265Monthly Expenses:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\360\237\222\265Monthly Saving:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
