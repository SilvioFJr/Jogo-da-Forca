#ifndef CONNDB_H
#define CONNDB_H

#include <QtSql/QSqlDatabase>
#include <QVector>
#include <QMap>
#include <QString>
#include "mainwindow.h"
#include <QSqlQuery>
#include <QVariant>



class ConnDB
{
private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

public:
    ConnDB(QString StrConn);
    QMap<QString, QString> SQLExec();
};

#endif // CONNDB_H
