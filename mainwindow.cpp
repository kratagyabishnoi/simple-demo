#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QButtonGroup>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_a, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_b, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_c, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_d, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_e, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_f, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_g, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_h, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_i, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_j, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_k, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_l, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_m, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_n, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_o, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_p, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_q, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_r, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_s, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_t, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_u, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_v, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_w, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_x, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_y, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_z, SIGNAL(released()), this, SLOT(pushButton()));
   // connect(ui->pushButton_caps, SIGNAL(released()), this, SLOT(pushButton()));
   // connect(ui->pushButton_spc, SIGNAL(released()), this, SLOT(pushButton()));
   // connect(ui->pushButton_bkc, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(pushButton()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString d_pass= "abcd";

    if(d_pass==pass)
    {
        QMessageBox::information(this,"Successful","Right Password");
    }
    else
    {
        QMessageBox::warning(this,"Error","Incorrect Password");
    }

}

void MainWindow::pushButton()
{
    QPushButton * button = (QPushButton *) sender();

    if(button->text() != NULL)
    {
      pass += button->text();
      sPass += "*";
    }
    ui->pass_edit->setText(sPass);
    //ui->usr_edit->setText(pass);
    //ui->pass_edit->setClearButtonEnabled(true);
}


void MainWindow::on_pushButton_bkc_clicked()
{
    ui->pass_edit->backspace();
}

