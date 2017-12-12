#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
    class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private:
    Ui::Register *ui;

private slots:
    void on_quit_btn_clicked();
    void on_ok_btn_clicked();
};

#endif // REGISTER_H
