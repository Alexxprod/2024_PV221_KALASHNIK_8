#ifndef FORM2_H
#define FORM2_H

#include <QWidget>

namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

signals:
    void firstWindow();

private slots:
    void on_pushButton2_clicked();

private:
    Ui::Form2 *ui;
};

#endif // FORM2_H
