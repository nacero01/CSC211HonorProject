#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>

class Database
{
public:
    Database();
    bool dbOpen();
    void dbClose();
};

#endif // DATABASE_H
