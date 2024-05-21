#ifndef TIMER_H
#define TIMER_H

#include <QWidget>
#include <Qtimer>

namespace Ui {
class Timer;
}

class Timer : public QWidget
{
    Q_OBJECT

public:
    explicit Timer(QWidget *parent = nullptr);
    ~Timer();

signals:
    void firstWindow();

private:
    Ui::Timer *ui;
    QTimer *timer;
    int ms,s,m;
    bool flag = true;

private slots:
    void TimerSlot();
    void on_backButton_clicked();
    void on_pauseButton_clicked();
    void on_stopButton_clicked();
};

#endif // TIMER_H
