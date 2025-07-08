#include "graph.h"
#include "ui_graph.h"

#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>

graph::graph(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::graph)
{
    ui->setupUi(this);

    // Dummy data
    qreal totalIncome = 1000;
    qreal saving = 300;
    qreal expense = totalIncome - saving;

    // Pie chart setup
    QPieSeries *series = new QPieSeries();
    series->append("Saving", saving);
    series->append("Expense", expense);

    // Optional: highlight saving slice
    QPieSlice *savingSlice = series->slices().at(0);
    savingSlice->setExploded(true);
    savingSlice->setLabelVisible(true);
    savingSlice->setPen(QPen(Qt::darkGreen, 2));
    savingSlice->setBrush(Qt::green);

    // Chart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Income Breakdown");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // ✅ Enable smooth animation
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Chart View
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Set chart to central widget or layout
    setCentralWidget(chartView);
}

graph::~graph()
{
    delete ui;
}
