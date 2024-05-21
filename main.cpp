#include "mainwindow.h"
#include "PtrSmart.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    smart_ptr<MainWindow> window(new MainWindow());
    window->show();

    return a.exec();
}
