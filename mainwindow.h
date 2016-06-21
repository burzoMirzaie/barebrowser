#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebView>

namespace Ui {
class MainWindow;
class MyJavaScriptOperations;
}

class MyJavaScriptOperations:public
QObject {
    Q_OBJECT
        public:
    Q_INVOKABLE void myoperation();

};
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QWebView *MyWebView;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
