#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCompare_clicked()
{
    hide();

    Compare= new compare(this);
    Compare->show();
}


void MainWindow::on_btnExper_clicked()
{
    hide();
    Expert= new expert(this);
    Expert->show();
}


void MainWindow::on_btnExpense_clicked()
{

    Expense=new expense(this);
    Expense->show();
}

