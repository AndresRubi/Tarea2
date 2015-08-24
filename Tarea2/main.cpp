#include "mainwindow.h"
#include <QApplication>
#include "delimitator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Delimitator d;
    d.show();

    return a.exec();
}
