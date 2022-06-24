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

    void on_pushButton_space_clicked();

    void on_pushButton_enter_clicked();

    void on_pushButton_caps_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_capoff_clicked();

private:
    Ui::MainWindow *ui;
    QString new_val;
    QString new_bkv;
    //QString pass;
    //QString sPass;
    bool check_1=false;
    bool check_2=false;
    bool caps=false;

protected:
    bool eventFilter(QObject *obj, QEvent *ev);

};

#endif // MAINWINDOW_H
