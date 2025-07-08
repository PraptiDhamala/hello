#include "compare.h"
#include "ui_compare.h"

#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

compare::compare(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::compare)
{
    ui->setupUi(this);
    setupChart();  // Call after UI is set up
}

compare::~compare()
{
    delete ui;
}

void compare::setupChart()
{
    QBarSet *actual = new QBarSet("Your Value");
    *actual << 50000 << 30000 << 20000;

    QBarSet *ideal = new QBarSet("Ideal");
    *ideal << 60000 << 25000 << 35000;

    actual->setColor(QColor("blue"));
    ideal->setColor(QColor("green"));

    QBarSeries *series = new QBarSeries();
    series->append(actual);
    series->append(ideal);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Compare: Income, Expenses, Savings");
    QFont Verdana("Verdana", 14, QFont::Bold);
    chart->setFont(Verdana);

    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setBackgroundBrush(QColor("#f5f6fa"));

    QStringList categories = {"Income", "Expenses", "Savings"};
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 70000);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->chartWidget->setChart(chart);
    ui->chartWidget->setRenderHint(QPainter::Antialiasing);
}
