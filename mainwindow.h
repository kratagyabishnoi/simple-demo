#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Login_clicked();
    void pushButton();


    void on_pushButton_bkc_clicked();

private:
    Ui::MainWindow *ui;
    QString pass;
    QString sPass;
};

#endif // MAINWINDOW_H
