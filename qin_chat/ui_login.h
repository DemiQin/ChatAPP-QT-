/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Wed Jun 21 13:50:03 2017
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *login_button;
    QPushButton *register_botton;
    QLabel *label_4;
    QLabel *user_icon;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 243);
        Login->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 70, 91, 17));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 120, 60, 17));
        username = new QLineEdit(Login);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(190, 70, 113, 27));
        password = new QLineEdit(Login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(190, 110, 113, 27));
        login_button = new QPushButton(Login);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setGeometry(QRect(70, 160, 88, 27));
        login_button->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        register_botton = new QPushButton(Login);
        register_botton->setObjectName(QString::fromUtf8("register_botton"));
        register_botton->setGeometry(QRect(210, 160, 88, 27));
        register_botton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        label_4 = new QLabel(Login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 190, 361, 61));
        user_icon = new QLabel(Login);
        user_icon->setObjectName(QString::fromUtf8("user_icon"));
        user_icon->setGeometry(QRect(170, 0, 91, 61));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Login", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        username->setText(QApplication::translate("Login", "qinyu", 0, QApplication::UnicodeUTF8));
        password->setText(QApplication::translate("Login", "123456", 0, QApplication::UnicodeUTF8));
        login_button->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        register_botton->setText(QApplication::translate("Login", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Login", "\345\260\217\346\217\220\347\244\272: \346\226\260\347\224\250\346\210\267\350\257\267\345\205\210\346\263\250\345\206\214\345\220\216\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        user_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
