#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql>
#include <QDebug>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    db.setHostName("localhost");
    db.setDatabaseName("data.db");
    db.setUserName("root");
    db.setPassword("111111");
    if (!db.open()) {
        qDebug()<<"fail to open database in connection";//提示出错
        return false;
    }
    db.open();
//
    QSqlQuery query(db);
    query.exec("create table user (pwd varchar(20) primary key, "
               "name varchar(20), id int, sex varchar(20), phone varchar(20))");
    query.exec("insert into user values('123456', 'qinyu', 001, 'Female', '18883365209')");
    query.exec("insert into user values('111111', 'root', 002, 'Male', '18883365208')");
    query.exec("insert into user values('123456', 'demi', 003, 'Female', '18883365207')");

    return true;
}
#endif // CONNECTION_H
