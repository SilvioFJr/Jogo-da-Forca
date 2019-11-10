#include "gameview.h"
#include "ui_gameview.h"




GameView::GameView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameView)
{
    QVector <QString> palavras;
    QString DBRout = "Driver={Microsoft Access Driver (*.mdb, *.accdb)};DSN='';DBQ=C:/Users/phms_/OneDrive/Jogo-da-Forca/BD/TESTE.accdb";

    ui->setupUi(this);
    ConnDB* connect = new ConnDB (DBRout);

}

GameView::~GameView()
{
    delete ui;
}


