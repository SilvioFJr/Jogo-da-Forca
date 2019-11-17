#include "gameview.h"
#include "ui_gameview.h"
#include<QMapIterator>
#include<QSql>
#include<QVector>
#include<wordselect.h>
#include "wordencriptate.h"


GameView::GameView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameView)
{
    QMap<QString, QString> map;
    QMapIterator<QString, QString> i(map);
    QString DBRout = "C:/Users/Pedro Moreira/OneDrive/Nova pasta (2)/Jogo-da-Forca/BD/Regs.db";
    QString dica, palavra;
    ui->setupUi(this);

    ConnDB* connect = new ConnDB (DBRout);
    map = connect->SQLExec();
    WordSelect* novo = new WordSelect(map);
    palavra = novo->ExtractKey(novo->ExtractKeysList());
    dica = novo->ExtractValue(palavra);
    WordEncriptate* teste = new WordEncriptate (palavra);



    teste->EncriptateWordActualization('A');
    teste->EncriptateWordActualization('R');
    ui->lbl_word->setText(teste->getEncriptedWord());
    ui->lbl_tip->setText("Dica: "+dica);

}

GameView::~GameView()
{
    delete ui;
}


