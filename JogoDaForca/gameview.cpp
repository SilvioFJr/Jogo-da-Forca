#include "gameview.h"
#include "ui_gameview.h"
#include<QMapIterator>
#include<QSql>
#include<QVector>


GameView::GameView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameView)
{
    QMap<QString, QString> map;
    QMapIterator<QString, QString> i(map);
    QString DBRout = "C:/Users/Pedro Moreira/OneDrive/Nova pasta (2)/Jogo-da-Forca/BD/Regs.db";
    QVector <QString> teste;
    ui->setupUi(this);

    ConnDB* connect = new ConnDB (DBRout);
    map = connect->SQLExec();
    for (auto it = map.begin(); it!= map.end(); it++)
    {
        teste.push_back(it.key());
        qDebug()<<it.key()<<it.value();

    }

    qDebug()<<teste[0];
    qDebug()<<teste[1];
    qDebug()<<teste[2];
}

GameView::~GameView()
{
    delete ui;
}


