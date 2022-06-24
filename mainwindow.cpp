#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QButtonGroup>
#include <QString>
#include <QFocusEvent>
#include <QEvent>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pass_edit->setEchoMode(QLineEdit::Password);

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
    connect(ui->pushButton_hyph, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_eql, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_gbr, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_gbl, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_semi, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_apo, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_comma, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_dot, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_rslash, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_excl, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_adr, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_hash, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_dollar, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_pow, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_mul, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_bl, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_br, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_unsc, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_plus, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_orkey, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_que, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_quote, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_col, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_lslash, SIGNAL(released()), this, SLOT(pushButton()));
    //connect(ui->pushButton_and, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_percent, SIGNAL(released()), this, SLOT(pushButton()));
    connect(ui->pushButton_negative, SIGNAL(released()), this, SLOT(pushButton()));

    ui->pass_edit->installEventFilter(this);
    ui->token_edit->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString d_pass= "admin";
    if(ui->token_edit->text()!=NULL &&ui->pass_edit->text() != NULL)
    {

        if(d_pass==ui->pass_edit->text() && ui->token_edit->text()=="admin")
        {
            QMessageBox::information(this,"Successful","Right Password");
        }
        else
        {
            QMessageBox::warning(this,"Error","Access Denied");
        }
        ui->pass_edit->clear();
    }
    else
    {
        QMessageBox::warning(this,"Alert","Tokey_Num/AccessKey can not be empty!");
        ui->pass_edit->clear();
    }

}

void MainWindow::pushButton()
{
    QPushButton * button = (QPushButton *) sender();
    // QString btn_v=button->text();
    //  QString disp_v=ui->pass_edit->text();

    // new_val= disp_v + btn_v;

    /*if(button->text() != NULL)
    {
      pass += button->text();
      sPass += "*";
    }*/
    ui->token_edit->setClearButtonEnabled(true);
    ui->pass_edit->setClearButtonEnabled(true);
    if(check_2==true)
    {
        if(caps==true)
        {
            QString btn_v=button->text().toUpper();
            QString disp_v=ui->token_edit->text();
            new_val= disp_v + btn_v;
            ui->token_edit->setText(new_val);
        }
        else if(caps==false)
        {
            QString btn_v=button->text();
            QString disp_v=ui->token_edit->text();
            new_val= disp_v + btn_v;
            ui->token_edit->setText(new_val);
        }
    }
    if(check_1==true)
    {
        if(caps==true)
        {
            QString btn_v=button->text().toUpper();
            QString disp_v=ui->pass_edit->text();
            new_val= disp_v + btn_v;
            ui->pass_edit->setText(new_val);
        }
        else if(caps==false)
        {
            QString btn_v=button->text();
            QString disp_v=ui->pass_edit->text();
            new_val= disp_v + btn_v;
            ui->pass_edit->setText(new_val);
        }
    }
    //ui->usr_edit->setText(pass);
    //ui->pass_edit->setClearButtonEnabled(true);
}


void MainWindow::on_pushButton_bkc_clicked()
{
    if(check_1==true)
    {
        new_bkv=ui->pass_edit->text();
        //new_bkv = new_bkv.size()- 1;
        ui->pass_edit->setText(new_bkv.mid(0,new_bkv.size()-1));
    }
    if(check_2==true)
    {
        new_bkv=ui->token_edit->text();
        //new_bkv = new_bkv.size()- 1;
        ui->token_edit->setText(new_bkv.mid(0,new_bkv.size()-1));
    }
}

bool MainWindow::eventFilter(QObject *obj, QEvent *ev)
{
    ev->accept();
    if(obj==ui->pass_edit || obj==ui->token_edit)
    {
        if(ui->pass_edit->hasFocus())
        {
            check_1=true;
            check_2=false;
            qDebug()<<"True";
            //ui->pass_edit->setText(new_val);
            //            ui->token_edit->clear();
        }
        if(ui->token_edit->hasFocus())
        {
            check_2=true;
            check_1=false;

            qDebug()<<"False";
            //ui->token_edit->setText(new_val);
            //            ui->pass_edit->clear();
        }
    }
    /*if ( obj == ui->pass_edit &&  ( ev->type() == QEvent::HoverEnter )  ) {
            ui->pass_edit->setText("IN");
        }


        if ( obj == ui->token_edit &&  (ev->type() == QEvent::HoverLeave )  ) {
            ui->token_edit->setText("out");
        }*/
}

void MainWindow::on_pushButton_space_clicked()
{
    if(check_1==true)
    {
        if(ui->pass_edit->text()!=NULL)
        {
            QString spc_pval=ui->pass_edit->text();
            ui->pass_edit->setText(spc_pval.append(" "));
            //ui->pass_edit->setText(new_val.append(" "));
        }
    }
    if(check_2==true)
    {
        if(ui->token_edit->text()!=NULL)
        {
            QString spc_tval=ui->token_edit->text();
            ui->token_edit->setText(spc_tval.append(" "));
            //ui->token_edit->setText(new_val.append(" "));
        }
    }
}

void MainWindow::on_pushButton_enter_clicked()
{
    if(ui->token_edit->text()!=NULL &&ui->pass_edit->text() != NULL)
    {
        /*QString d_pass= "admin";

        if(d_pass==ui->pass_edit->text() && ui->token_edit->text()=="admin")
        {
            QMessageBox::information(this,"Successful","Right Password");
        }
        else
        {
            QMessageBox::warning(this,"Error","Access Denied");
        }
        ui->pass_edit->clear();*/
        on_Login_clicked();

    }
    else
    {
        QMessageBox::warning(this,"Alert","Tokey_Num/AccessKey can not be empty!");
        ui->pass_edit->clear();
    }
}

void MainWindow::on_pushButton_caps_clicked()
{
    caps=true;
}

void MainWindow::on_pushButton_exit_clicked()
{
    MainWindow::close();
}

void MainWindow::on_pushButton_capoff_clicked()
{
    caps=false;
}
