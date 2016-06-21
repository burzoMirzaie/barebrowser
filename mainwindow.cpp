#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebView>
#include <QWebFrame>
#include <QWebPage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    MyWebView =new QWebView(this);
    MyWebView->page()->mainFrame()->addToJavaScriptWindowObject("mainwindow",new MyJavaScriptOperations);
    MyWebView->load(QUrl("http://localhost/test/"));
    MyWebView->settings()->setAttribute(QWebSettings::JavascriptEnabled,true);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void MyJavaScriptOperations::myoperation(){
    qApp->quit();
}
