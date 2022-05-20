#include "database.h"

Database::Database()
{
  QSqlDatabase db;
}

bool Database::dbOpen()
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

void Database::dbClose()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}
