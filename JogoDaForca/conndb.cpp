#include "conndb.h"
#include "gameview.h"
#include "mainwindow.h"
#include <QDir>
#include<QCoreApplication>



ConnDB::ConnDB()
{
    setStrConn();
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName(this->StrConn);
    this->db.open();
}

QMap<QString, QString> ConnDB::SQLExec()
{
   QSqlQuery consulta(this->db);
   QMap<QString, QString> palavras;
   QString str_consulta = "SELECT * FROM ";
   str_consulta+=MainWindow::level;

   consulta.prepare(str_consulta);
   bool wordInGame = consulta.exec();
   consulta.first();
   do
   {
        palavras.insert(consulta.value(1).toString(), consulta.value(2).toString());
   }
   while (consulta.next());
   return palavras;
}
void ConnDB::setStrConn()
{
 QDir dirpath (QCoreApplication::applicationDirPath());
 dirpath.cdUp();
 dirpath.cdUp();
 dirpath.cd("BD");
 this->StrConn = dirpath.path()+"/Regs.db";
}
