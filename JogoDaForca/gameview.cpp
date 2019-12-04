#include "gameview.h"
#include "ui_gameview.h"
#include"hitsverificate.h"
#include"gameoverview.h"
#include"youwinview.h"
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
    ui->setupUi(this);

    ConnDB* connect = new ConnDB();
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
    HitsVerificate::SetHangManImage (ui->lbl_img, getError());
}

void GameView::disableButton(QPushButton* button)
{
    button->setEnabled(false);
    button->setStyleSheet("font: 36pt \"Cute Jellyfish\"; color: rgba(255, 0, 0,0); background: transparent;");
}
int GameView::getError()
{
    return this->error;
}
void GameView::setError()
{
    if (getError()==0)
    {
        this->error=1;
    }
    else if (getError()==1)
    {
        this->error=2;
    }
    else if (getError()==2)
    {
        this->error=3;
    }
    else if (getError()==3)
    {
        this->error=4;
    }
    else if (getError()==4)
    {
        this->error=5;
    }
}
void GameView::resetError()
{
    this->error = 0;
}

void GameView::GameOverCheck ()
{
    if (getError()==5)
    {
        GameOverView fim;
        this->destroy();
        fim.exec();
    }
}
void GameView::hits(int HitsBackUp)
{
    if (HitsBackUp==acertos)
    {
        setError();
        HitsVerificate::SetHangManImage (ui->lbl_img, getError());
    }

}

void GameView::WordChange ()
{
    if(acertos == tam && index<=limite)
    {
        this->palavra = novo->ExtractKey(novo->ExtractKeysList(), index);
        dica = dica = novo->ExtractValue(this->palavra);
        tam = this->palavra.length();
        this->wordInGame = new WordEncriptate (this->palavra);
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        ui->lbl_tip->setText("Dica: "+this->dica);
        resetButtons();
        resetError();
        HitsVerificate::SetHangManImage (ui->lbl_img, getError());
        acertos = 0;
        index++;
    }
    else if (index == limite)
    {
        YouWinView fim;
        this->destroy();
        fim.exec();
    }
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
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('A');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_A);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_B_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('B');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_B);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_C_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('C');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_C);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_D_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('D');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_D);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_E_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('E');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_E);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_F_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('F');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_F);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_G_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('G');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_G);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_H_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('H');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_H);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_I_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('I');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_I);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_J_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('J');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_J);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_K_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('K');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_K);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_L_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('L');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_L);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}



void GameView::on_btn_M_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('M');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_M);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_N_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('N');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_N);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_O_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('O');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_O);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_P_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('P');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_P);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_Q_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('Q');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_Q);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_R_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('R');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_R);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_S_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('S');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_S);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_T_clicked()
{
    {
        int acertosBackUp = acertos;
        acertos+=wordInGame->EncriptateWordActualization('T');
        ui->lbl_word->setText(wordInGame->getEncriptedWord());
        disableButton(ui->btn_T);
        hits(acertosBackUp);
        GameOverCheck();
        WordChange();
    }
}

void GameView::on_btn_U_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('U');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_U);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_V_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('V');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_V);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_W_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('W');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_W);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_X_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('X');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_X);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_Y_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('Y');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_Y);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

void GameView::on_btn_Z_clicked()
{
    int acertosBackUp = acertos;
    acertos+=wordInGame->EncriptateWordActualization('Z');
    ui->lbl_word->setText(wordInGame->getEncriptedWord());
    disableButton(ui->btn_Z);
    hits(acertosBackUp);
    GameOverCheck();
    WordChange();
}

GameView::~GameView()
{
    delete ui;
}
