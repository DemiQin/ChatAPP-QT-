#include "register.h"
#include "ui_register.h"
#include <QtSql>
#include <QtGui>
#include <QMessageBox>
#include "connection.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setWindowTitle(QObject::tr("新用户注册"));
    ui->name_line->setFocus();
}

Register::~Register()
{
    delete ui;
}
/*注册新帐户*/
void Register::on_ok_btn_clicked()
{
    QString userName = ui->name_line->text();
    QString pwd = ui->password_line->text();
    QString sex = ui->comboBox->currentText();
    QString phone = ui->phone_line->text();

    QSqlQuery query;
    query.exec("select id from user");
    query.last();
    qreal temp = query.value(2).toInt()+1;
    QString id;
    if (temp < 10) {
        id = "0" + QString::number(temp);
        } else {
            id = QString::number(temp);
        }

     qDebug() << "hello" <<id << pwd << sex << phone<<userName;

     /*判断用户名是否为空*/
    if(!ui->name_line->text().isEmpty())
        userName = ui->name_line->text();
    else
    {
        QMessageBox::about(0,tr("提示"),tr("用户名不能为空！\n"));
        return;
     }
    /*判断密码是否为空*/
    if(!ui->password_line->text().isEmpty() && !ui->password2_line->text().isEmpty() )
        pwd = ui->password_line->text();
    else
    {
        QMessageBox::about(0,tr("提示"),tr("密码不能为空！\n"));
        return;
     }
    /*设置性别*/
    if(!ui->comboBox->currentText().isEmpty())
        sex = ui->comboBox->currentText();
    /*设置电话号码*/
    if(!ui->phone_line->text().isEmpty())
        phone= ui->phone_line->text();

    /*注册操作*/
     QSqlDatabase::database().transaction();
     query.prepare("insert into user (pwd, name, id, sex, phone) values (?, ?, ?, ?, ?)");
       QVariantList pwds;
       pwds << pwd;
       query.addBindValue(pwds);
       QVariantList names;
       names <<userName;
       query.addBindValue(names);
       QVariantList ids;
       ids <<id;
       query.addBindValue(ids);
       QVariantList sexs;
       sexs <<sex;
       query.addBindValue(sexs);
       QVariantList phones;
       phones <<phone;
       query.addBindValue(phones);

       if (!query.execBatch()) {

         QSqlDatabase::database().rollback();
         QMessageBox::information(this, tr("提示"), tr("注册失败，无法访问数据库！"), QMessageBox::Ok);

     } else {
         QSqlDatabase::database().commit();
         QMessageBox::information(this, tr("提示"), tr("注册成功！"), QMessageBox::Ok);

     }
    this->close();
}
/*退出注册界面*/
void Register::on_quit_btn_clicked()
{
    this->close();
}
