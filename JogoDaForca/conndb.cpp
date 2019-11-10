#include "conndb.h"


ConnDB::ConnDB(QString StrConn)
{   
    db.setDatabaseName(StrConn);
}

QMap<QString, QString> ConnDB::SQLExec()
{
   QSqlQuery consulta;
   QMap<QString, QString> palavras;
   consulta.exec("SELECT * FROM PALAVRAS WHERE LEVEL = "+level+"\"");
   while (consulta.next())
       palavras.insert(consulta.value(0).toString(), consulta.value(1).toString());
   return palavras;
}
