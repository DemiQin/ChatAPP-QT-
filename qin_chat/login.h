#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include "tcpclient.h"
#include "register.h"
#include "widget.h"

namespace Ui {
    class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private:
    Ui::Login *ui;
    TcpClient *tcpSocket;
    Widget *mainWin;
    Register *registerDlg;


private slots:
    void on_register_botton_clicked();
    void on_login_button_clicked();
};

#endif // LOGIN_H
