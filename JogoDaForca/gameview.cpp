#include "gameview.h"
#include "ui_gameview.h"
#include<QMapIterator>
#include<QSql>
#include<QVector>


static int acertos=0;
static int tam = 0;
static int index = 0;

WordEncriptate* GameView::wordInGame;

QString GameView::dica;

QString GameView::palavra;

WordSelect* GameView::novo;

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
    novo = new WordSelect(map);
    this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
    index++;
    dica = novo->ExtractValue(this->palavra);
    tam = this->palavra.length();
    this->wordInGame = new WordEncriptate (this->palavra);
    ui->lbl_tip->setText("Dica: "+this->dica);
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
}

void GameView::on_btn_A_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('A');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_B_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('B');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_C_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('C');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_D_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('D');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_E_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('E');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_F_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('F');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_G_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('G');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_H_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('H');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_I_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('I');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_J_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('J');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_K_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('K');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_L_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('L');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}



void GameView::on_btn_M_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('M');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_N_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('N');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_O_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('O');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_P_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('P');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_Q_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('Q');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_R_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('R');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_S_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('S');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_T_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('T');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_U_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('U');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_V_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('V');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_W_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('W');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_X_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('X');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_Y_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('Y');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_Z_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('W');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    if(acertos == tam)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        acertos = 0;
        index++;
    }
}

GameView::~GameView()
{
    delete ui;
}
