#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //test for git
    //test for remote push
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
