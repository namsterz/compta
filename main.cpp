#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow *Soft= new MainWindow;
    Soft->show();
    return app.exec();
}
