#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("");
    w.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
    w.setGeometry(200,100,800,600);
    w.setCentralWidget(w.MyWebView);
    w.show();
    return a.exec();
}
