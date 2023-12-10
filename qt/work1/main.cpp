// main.cpp
#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog login;
    if (login.exec() == QDialog::Accepted) { // 如果登录对话框被接受
        MainWindow w;
        w.show();
        return a.exec();
    } else {
        return 0;
    }
}
