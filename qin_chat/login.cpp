#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QFile>
#include <QPixmap>
#include "login.h"
#include "ui_login.h"
#include "widget.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    this->setWindowTitle(QObject::tr("局域网聊天工具"));
    QPixmap pic1(":/image/icon.png");
    pic1 = pic1.scaled(40,40);//缩放图片
    ui->user_icon->setPixmap(pic1);
    ui->user_icon->show();

    ui->password->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}
/*老用户登录*/
/*发送用户名和密码*/
void Login::on_login_button_clicked()
{
    if (ui->password->text().isEmpty()) {
            QMessageBox::information(this, tr("请输入密码"),
                                     tr("请先输入密码再登录！"), QMessageBox::Ok);
            ui->username->setFocus();
        }
    else {
            QSqlQuery query;
            qDebug() << "connection!";
            query.exec("select pwd from user");

            query.next();
           if (query.value(0).toString() == ui->password->text()) {
               Widget *w = new Widget;
               w->setWindowTitle(ui->username->text());
               w->show();
               this->close();
             }

           else{
                QMessageBox::warning(this, tr("登录失败"),
                                     tr("请输入正确的密码再登录！"), QMessageBox::Ok);
                ui->password->clear();
                ui->password->setFocus();
           }
       }
}
/*新用户注册*/
void Login::on_register_botton_clicked()
{
    registerDlg = new Register();
    registerDlg->show();
}
