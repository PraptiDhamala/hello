/********************************************************************************
** Form generated from reading UI file 'expense.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENSE_H
#define UI_EXPENSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_expense
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label;

    void setupUi(QWidget *expense)
    {
        if (expense->objectName().isEmpty())
            expense->setObjectName("expense");
        expense->resize(661, 595);
        groupBox = new QGroupBox(expense);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-20, 70, 871, 511));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:lavender;\n"
"}\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 60, 201, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:black;\n"
"	font: 25pt \"Big Caslon\";\n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(252, 60, 271, 41));
        lineEdit->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"        border: 2px solid #ccc;\n"
"        border-radius: 20px;\n"
"        padding: 6px 10px;\n"
"        background-color: #fdfdfd;\n"
"          font-size: 20px;\n"
"	font: 20pt \"Arial\";\n"
"        color: #333;\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 2px solid #4CAF50;\n"
"        background-color: #ffffff;\n"
"    }\n"
"\n"
"    QLineEdit:disabled {\n"
"        background-color: #eee;\n"
"        color: #999;\n"
"    }"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 140, 221, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:black;\n"
"	font: 25pt \"Big Caslon\";\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 210, 231, 61));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:black;\n"
"	font: 25pt \"Big Caslon\";\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 330, 111, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"	font: 33pt \"Baskerville\";\n"
"background-color:green;\n"
" \n"
"          background-color: #ffb6c1;\n"
"          color: white;\n"
"          font: bold 16px 'Comic Sans MS';\n"
"          border-radius: 25px;\n"
"         border: 2px solid white;\n"
"          padding: 10px;\n"
"        }\n"
"        QPushButton:hover {\n"
"         background-color: #ff69b4;\n"
"        }\n"
"        QPushButton:pressed \n"
"{\n"
"         background-color: #ff1493;\n"
"        }\n"
"\n"
""));
        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(251, 221, 281, 41));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("    QDoubleSpinBox {\n"
"    border: 2px solid white;\n"
"    border-radius: 20px;  \n"
"    padding: 8px 12px;\n"
"     background-color: white;   \n"
"      color: #333;\n"
"       font: bold 16px 'Segoe UI';\n"
"    }\n"
"    QDoubleSpinBox:focus {\n"
"       border: 2px solid #ff69b4;\n"
"    }"));
        doubleSpinBox->setMaximum(100000000000.000000000000000);
        doubleSpinBox->setSingleStep(100.000000000000000);
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(250, 141, 281, 41));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("    QDoubleSpinBox {\n"
"    border: 2px solid white;\n"
"    border-radius: 20px;  \n"
"    padding: 8px 12px;\n"
"     background-color: white;   \n"
"      color: #333;\n"
"       font: bold 16px 'Segoe UI';\n"
"    }\n"
"    QDoubleSpinBox:focus {\n"
"       border: 2px solid #ff69b4;\n"
"    }\n"
""));
        doubleSpinBox_2->setDecimals(2);
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(1000000000000000000.000000000000000);
        doubleSpinBox_2->setSingleStep(100.000000000000000);
        label = new QLabel(expense);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 30, 241, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 900 38pt \"Arial Black\";\n"
"}"));

        retranslateUi(expense);

        QMetaObject::connectSlotsByName(expense);
    } // setupUi

    void retranslateUi(QWidget *expense)
    {
        expense->setWindowTitle(QCoreApplication::translate("expense", "Form", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("expense", "Enter Your Name:", nullptr));
        lineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("expense", "Monthly Salary:", nullptr));
        label_4->setText(QCoreApplication::translate("expense", "Monthly Saving:", nullptr));
        pushButton->setText(QCoreApplication::translate("expense", "GRAPH", nullptr));
        doubleSpinBox->setPrefix(QCoreApplication::translate("expense", "\342\202\271", nullptr));
        doubleSpinBox_2->setPrefix(QCoreApplication::translate("expense", "\342\202\271", nullptr));
        label->setText(QCoreApplication::translate("expense", "EXPENSES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expense: public Ui_expense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENSE_H
