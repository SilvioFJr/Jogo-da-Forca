#include "conndb.h"



ConnDB::ConnDB(QString StrConn)
{
    QString teste = StrConn;
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    //this->db.setDatabaseName("C:/Users/Pedro Moreira/OneDrive/Nova pasta (2)/Jogo-da-Forca/BD/Regs.db");
    this->db.setDatabaseName(teste);
    this->db.open();
}

QMap<QString, QString> ConnDB::SQLExec()
{
   QSqlQuery consulta(this->db);
   QMap<QString, QString> palavras;

   consulta.prepare("SELECT * FROM Registros");
   bool teste = consulta.exec();
   consulta.first();
   do
   {
        palavras.insert(consulta.value(1).toString(), consulta.value(2).toString());
   }
   while (consulta.next());
   return palavras;
}
