#include "form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form2)
{
    ui->setupUi(this);

    QPixmap pix(":/img/images/4.jpg");
    int w = ui->label->width();
    int h = ui->label->height();

    ui->label->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix2(":/img/images/5.jpg");

    ui->label_2->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_pushButton2_clicked()
{
    this->close();
    emit firstWindow();
}

