#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include "game.h"
#include "registerdialog.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    QSqlDatabase db;
    void dbClose();
    bool dbOpen();



    ~Login();

private slots:
    void on_login_pushButton_clicked();

    void on_register_Button_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
