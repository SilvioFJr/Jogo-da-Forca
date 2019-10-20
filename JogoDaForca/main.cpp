#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Driver={Microsoft Access Driver (*.mdb, *.accdb)};DSN='';DBQ=C:/Users/phms_/OneDrive/Jogo-da-Forca/BD/TESTE.accdb");
    if (db.open())
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else return 0;

}
