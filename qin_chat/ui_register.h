/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created: Wed Jun 21 13:50:04 2017
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QPushButton *ok_btn;
    QPushButton *quit_btn;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name_line;
    QLineEdit *password_line;
    QLineEdit *password2_line;
    QComboBox *comboBox;
    QLineEdit *phone_line;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(388, 300);
        Register->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 91, 17));
        ok_btn = new QPushButton(Register);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setGeometry(QRect(50, 260, 99, 27));
        quit_btn = new QPushButton(Register);
        quit_btn->setObjectName(QString::fromUtf8("quit_btn"));
        quit_btn->setGeometry(QRect(200, 260, 101, 27));
        label_7 = new QLabel(Register);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 270, 60, 17));
        label_8 = new QLabel(Register);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 50, 60, 17));
        label_9 = new QLabel(Register);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(330, 90, 60, 17));
        label_10 = new QLabel(Register);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(330, 130, 60, 17));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 271, 211));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        name_line = new QLineEdit(layoutWidget);
        name_line->setObjectName(QString::fromUtf8("name_line"));

        verticalLayout_2->addWidget(name_line);

        password_line = new QLineEdit(layoutWidget);
        password_line->setObjectName(QString::fromUtf8("password_line"));

        verticalLayout_2->addWidget(password_line);

        password2_line = new QLineEdit(layoutWidget);
        password2_line->setObjectName(QString::fromUtf8("password2_line"));

        verticalLayout_2->addWidget(password2_line);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        phone_line = new QLineEdit(layoutWidget);
        phone_line->setObjectName(QString::fromUtf8("phone_line"));

        verticalLayout_2->addWidget(phone_line);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Register", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        ok_btn->setText(QApplication::translate("Register", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        quit_btn->setText(QApplication::translate("Register", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Register", "*\344\270\272\345\277\205\345\241\253\351\241\271", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Register", "*", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Register", "*", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Register", "*", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Register", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Register", "\345\257\206\347\240\201\347\241\256\350\256\244", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Register", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Register", "\347\224\265\350\257\235\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Register", "Female", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Register", "Male", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
