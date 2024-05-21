#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
#include "form2.h"
#include "timer.h"

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
    void on_currOk_clicked();

    void on_allOk_clicked();

    void on_baseSection_clicked();

    void on_baseSection_2_clicked();

    void on_baseSection_3_clicked();

private:
    Ui::MainWindow *ui;
    Form *form;
    Form2 *form2;
    Timer *timer;
};
#endif // MAINWINDOW_H
