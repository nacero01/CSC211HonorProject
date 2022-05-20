#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    if(!dbOpen())
    {
        ui->label_Status->setText("Can't Connect to DB !");
    }
    else
    {
        ui->label_Status->setText("Connected Successfully to DB !");
    }


}

bool Login::dbOpen()
{
    db = QSqlDatabase::addDatabase("QODBC", "MYSQL_ODBC");
        QString connection_string = QStringLiteral("Driver={MySQL ODBC 8.0 ANSI Driver};"
        "Server=localhost;"
        "Database=honorproject;"
        "Uid=root;"
        "Pwd=RootPassword123456789!");
        db.setDatabaseName(connection_string);
        if(!db.open())
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

void Login::dbClose()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}



Login::~Login()
{
    delete ui;
}

void Login::on_login_pushButton_clicked()
{
    dbOpen();
    QSqlQuery qry(db);
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    int count = 0;
    qry.prepare(
           "select * from userInfo where username= :username and password= :password"
        );
        qry.bindValue(":username",  username);  //When gui see ':', it understand to replace it with said value
        qry.bindValue(":password", password);
        if(qry.exec())
        {
            while (qry.next())
            {
                count++;
            }
          if(count == 1)
          {
              ui->label_Status->setText("You have login");
              dbClose();
              this->hide();
              Game game;
              game.setModal(true);
              game.exec();
          }
          else
          {
              ui->label_Status->setText("No account exist");
          }
        }
}


void Login::on_register_Button_clicked()
{
    RegisterDialog reg;
    reg.setModal(true);
    reg.exec();
}

