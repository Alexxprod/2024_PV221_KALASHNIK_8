#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    form = new Form();
    connect(form, &Form::firstWindow, this, &MainWindow::show);

    form2 = new Form2();
    connect(form2, &Form2::firstWindow, this, &MainWindow::show);

    timer = new Timer();
    connect(timer, &Timer::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_currOk_clicked()
{
    int currentVar = ui->currEx->text().toInt();
    ui->progressBar->setValue(currentVar);
}


void MainWindow::on_allOk_clicked()
{
    int allVar = ui->allEx->text().toInt();
    ui->progressBar->setMaximum(allVar);
}


void MainWindow::on_baseSection_clicked()
{
    form->show();
    this-close();
}


void MainWindow::on_baseSection_2_clicked()
{
    form2->show();
    this-close();
}


void MainWindow::on_baseSection_3_clicked()
{
    timer->show();
    this-close();
}

