#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <expert.h>
#include <compare.h>
#include <expense.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCompare_clicked();

    void on_btnExper_clicked();

    void on_btnExpense_clicked();

private:
    Ui::MainWindow *ui;
      compare *Compare;
    expert *Expert;
      expense *Expense;

};
#endif // MAINWINDOW_H
