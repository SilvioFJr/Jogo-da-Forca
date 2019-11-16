#include "gameview.h"
#include "ui_gameview.h"
#include<QMapIterator>
#include<QSql>


GameView::GameView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameView)
{
    QMap<QString, QString> map;
    QMapIterator<QString, QString> i(map);
    QString DBRout = "C:/Users/Pedro Moreira/OneDrive/Nova pasta (2)/Jogo-da-Forca/BD/Regs.db";
    ui->setupUi(this);

    ConnDB* connect = new ConnDB (DBRout);
    map = connect->SQLExec();
    qDebug()<<map.values();

}

GameView::~GameView()
{
    delete ui;
}


