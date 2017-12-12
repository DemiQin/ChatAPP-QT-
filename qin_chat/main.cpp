#include <QtGui/QApplication>
#include <QtGui>
#include "widget.h"
#include "login.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());

    if (!createConnection())
        return 1;

    Login  L;
    L.show();

    return a.exec();
}
