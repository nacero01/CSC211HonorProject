#include "registerdialog.h"
#include "login.h"
#include "ui_registerdialog.h"
#include <QMessageBox>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    if(!dbOpen())
    {
        ui->label_Status_3->setText("Can't Connect to DB !");
    }
    else
    {
        ui->label_Status_3->setText("Connected Successfully to DB !");
    }
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

bool RegisterDialog::dbOpen()
{
    R = QSqlDatabase::addDatabase("QODBC", "MYSQL_ODBC");
        QString connection_string = QStringLiteral("Driver={MySQL ODBC 8.0 ANSI Driver};"
        "Server=localhost;"
        "Database=honorproject;"
        "Uid=root;"
        "Pwd=RootPassword123456789!");
        R.setDatabaseName(connection_string);
        if(!R.open())
        {
            qDebug()<<("Can't Connect to DB !");
            return false;
        }
        else
        {
            qDebug()<<("Connected Successfully to DB !");
            return true;
        }
}

void RegisterDialog::dbClose()
{
    R.close();
    R.removeDatabase(QSqlDatabase::defaultConnection);
}


void RegisterDialog::on_confirmRegister_clicked()
{
    {

        QString firstName = ui->lineEdit_firstName->text();
        QString lastName = ui->lineEdit_lastName->text();
        QString age = ui->lineEdit_age->text();
        QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_password->text();

        QSqlQuery qry(R);

   //    int count = 0;
       qry.prepare("INSERT INTO userInfo (firstname, lastname, age, username, password) values (?, ?, ?, ?, ?)");
       qry.addBindValue(firstName);
       qry.addBindValue(lastName);
       qry.addBindValue(age);
       qry.addBindValue(username);
       qry.addBindValue(password);


            if(qry.exec())
            {
                QMessageBox::information(this,tr("Registration Successful"),tr("Thank you for registering with us and I hope you enjoy the game"));
                dbClose();
                this->hide();
            }
            else
            {
                ui->label_Status_3->setText("Username Taken");
            }

  }
}

