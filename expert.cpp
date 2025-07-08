#include "expert.h"
#include "ui_expert.h"
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <cmath>
#include <numeric>
#include <vector>

expert::expert(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::expert)
{
    ui->setupUi(this);

    loadExpertReviewPage();
    connect(ui->btnRefresh, &QPushButton::clicked, this, &expert::loadExpertReviewPage);
}

expert::~expert()
{
    delete ui;
}

void expert::loadExpertReviewPage()
{
    std::vector<double> income = {5000, 5200, 4800, 5100, 7000, 4900, 5150};

    double mean = std::accumulate(income.begin(), income.end(), 0.0) / income.size();
    double variance = 0;
    for (double val : income)
        variance += (val - mean) * (val - mean);
    variance /= income.size();
    double stddev = std::sqrt(variance);

    QString insight = (stddev > 400)
                          ? "🔍 Your income is volatile. Consider budgeting more carefully."
                          : "✅ Your income is stable. Great job maintaining consistency!";

    ui->InsightBox->setText(insight);

    QLineSeries *series = new QLineSeries();
    for (int i = 0; i < static_cast<int>(income.size()); ++i)
        series->append(i, income[i]);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Monthly Income Overview");
    chart->legend()->hide();

    QValueAxis *axisX = new QValueAxis;
    axisX->setTitleText("Month");

    QValueAxis *axisY = new QValueAxis;
    axisY->setTitleText("Income (रु)");
    axisY->setRange(4000, 7500);

    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Remove old widgets from layout
    QLayoutItem *child;
    while ((child = ui->chartLayout->takeAt(0)) != nullptr) {
        if (child->widget()) delete child->widget();
        delete child;
    }

    ui->chartLayout->addWidget(chartView);
}
