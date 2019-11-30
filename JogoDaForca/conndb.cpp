#include "conndb.h"
#include "gameview.h"
#include "mainwindow.h"
#include <QDir>



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
 QString dirpath ;
 dirpath = QDir::currentPath();
 dirpath = dirpath + "../Jogo-da-Forca/BD/Regs.db";
 this->StrConn = dirpath;
}
