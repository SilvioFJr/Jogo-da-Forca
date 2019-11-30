#include "gameview.h"
#include "ui_gameview.h"
#include<hitsverificate.h>
#include<QMapIterator>
#include<QSql>
#include<QVector>


static int acertos=0;
static int tam = 0;
static int index = 0;

WordEncriptate* GameView::wordInGame;

QString GameView::dica;

QString GameView::palavra;

int GameView::limite;

WordSelect* GameView::novo;


GameView::GameView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameView)
{
    QMap<QString, QString> map;
    QMapIterator<QString, QString> i(map);
    QString DBRout = "C:/Users/Pedro Moreira/OneDrive/Jogo-da-Forca/BD/Regs.db";
    ui->setupUi(this);

    ConnDB* connect = new ConnDB (DBRout);
    map = connect->SQLExec();
    limite = map.size();

    novo = new WordSelect(map);
    this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
    index++;
    dica = novo->ExtractValue(this->palavra);
    tam = this->palavra.length();
    this->wordInGame = new WordEncriptate (this->palavra);
    ui->lbl_tip->setText("Dica: "+this->dica);
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
}

void GameView::disableButton(QPushButton* button)
{
    button->setEnabled(false);
    button->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,0); background: transparent;");
}

void GameView::resetButtons()
{
    ui->btn_A->setEnabled(true);
    ui->btn_A->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_B->setEnabled(true);
    ui->btn_B->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_C->setEnabled(true);
    ui->btn_C->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_D->setEnabled(true);
    ui->btn_D->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_E->setEnabled(true);
    ui->btn_E->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_F->setEnabled(true);
    ui->btn_F->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_G->setEnabled(true);
    ui->btn_G->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_H->setEnabled(true);
    ui->btn_H->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_I->setEnabled(true);
    ui->btn_I->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_J->setEnabled(true);
    ui->btn_J->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_K->setEnabled(true);
    ui->btn_K->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_L->setEnabled(true);
    ui->btn_L->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_M->setEnabled(true);
    ui->btn_M->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_N->setEnabled(true);
    ui->btn_N->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_O->setEnabled(true);
    ui->btn_O->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_P->setEnabled(true);
    ui->btn_P->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_Q->setEnabled(true);
    ui->btn_Q->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_R->setEnabled(true);
    ui->btn_R->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_S->setEnabled(true);
    ui->btn_S->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_T->setEnabled(true);
    ui->btn_T->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_U->setEnabled(true);
    ui->btn_U->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_V->setEnabled(true);
    ui->btn_V->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_W->setEnabled(true);
    ui->btn_W->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_X->setEnabled(true);
    ui->btn_X->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_Y->setEnabled(true);
    ui->btn_Y->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
    ui->btn_Z->setEnabled(true);
    ui->btn_Z->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,1); background: transparent;");
}

void GameView::on_btn_A_clicked()
{

    acertos+=wordInGame->EncriptateWordActualization('A');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_A);
    HitsVerificate::SetPixMapAlpha(ui->lbl_mask, 0);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_B_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('B');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_B);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_C_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('C');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_C);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_D_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('D');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_D);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_E_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('E');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_E);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_F_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('F');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_F);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_G_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('G');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_G);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_H_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('H');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_H);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_I_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('I');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_I);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_J_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('J');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_J);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_K_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('K');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_K);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_L_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('L');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_L);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}



void GameView::on_btn_M_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('M');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_M);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_N_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('N');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_N);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_O_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('O');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_O);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_P_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('P');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_P);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_Q_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('Q');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_Q);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_R_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('R');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_R);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_S_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('S');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_S);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_T_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('T');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_T);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_U_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('U');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_U);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_V_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('V');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_V);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_W_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('W');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_W);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_X_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('X');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_X);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_Y_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('Y');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_Y);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

void GameView::on_btn_Z_clicked()
{
    acertos+=wordInGame->EncriptateWordActualization('W');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_Z);
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        acertos = 0;
        index++;
    }
}

GameView::~GameView()
{
    delete ui;
}
