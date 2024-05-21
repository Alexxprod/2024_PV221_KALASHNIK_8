#include "timer.h"
#include "ui_timer.h"

Timer::Timer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Timer)
{
    ui->setupUi(this);
    ms = 0;
    m = 0;
    s = 0;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));

    ui->stopButton->setText("Старт");
    ui->pauseButton->setText("Сброс");
}

Timer::~Timer()
{
    delete ui;
}

void Timer::TimerSlot()
{
    ms++;
    if (ms >= 1000) {
        ms = 0;
        s++;
    }

    if (s >= 60) {
        s = 0;
        m++;
    }
    ui->label->setText(QString::number(m) + " : " + QString::number(s) + " : " + QString::number(ms));
}

void Timer::on_backButton_clicked()
{
    this->close();
    emit firstWindow();
}


void Timer::on_stopButton_clicked()
{
    flag = !flag;
    if(flag) {
        ui->stopButton->setText("Старт");
        timer->stop();
    }
    else
    {
        ui->stopButton->setText("Стоп");
        timer->start(1);
    }
}


void Timer::on_pauseButton_clicked()
{
    ms = 0;
    s = 0;
    m = 0;
    ui->label->setText(QString::number(m) + " : " + QString::number(s) + " : " + QString::number(ms));
}

