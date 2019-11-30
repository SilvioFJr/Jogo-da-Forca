#ifndef CONNDB_H
#define CONNDB_H

#include<QtSql>
#include <QVector>
#include <QMap>
#include <QString>
#include "mainwindow.h"
#include <QSqlQuery>
#include <QVariant>
#include<QMessageBox>
#include<QCoreApplication>
#include<QDir>
#include<QDebug>




class ConnDB
{
private:

    QSqlDatabase db;
    QString StrConn;

public:
    ConnDB();
    QMap<QString, QString> SQLExec();
    void setStrConn();
};

#endif // CONNDB_H
