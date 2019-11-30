#include "conndb.h"
#include "gameview.h"
#include "mainwindow.h"



ConnDB::ConnDB(QString StrConn)
{
    QString wordInGame = StrConn;
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    this->db.setDatabaseName("../Jogo-da-Forca/BD/Regs.db");
    this->db.setDatabaseName(wordInGame);
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
