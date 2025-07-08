#include "expense.h"
#include "ui_expense.h"

expense::expense(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::expense)
{
    ui->setupUi(this);
}

expense::~expense()
{
    delete ui;
}

void expense::on_pushButton_clicked()
{
    Graph= new graph(this);
    Graph->show();
}

