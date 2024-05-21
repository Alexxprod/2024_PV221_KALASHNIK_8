#include "form.h"
#include "ui_form.h"
#include "QPixmap"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    QPixmap pix(":/img/images/1.jpg");
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/img/images/2.jpg");

    ui->label_2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}

