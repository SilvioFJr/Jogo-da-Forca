#include "gameoverview.h"
#include "ui_gameoverview.h"

GameOverView::GameOverView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOverView)
{
    ui->setupUi(this);
    QMovie *movie = new QMovie(":/imagens/giphy.gif");
    QLabel *processLabel = new QLabel(this);
    processLabel->setMovie(movie);
    movie->scaledSize();
    movie->start();
}


GameOverView::~GameOverView()
{
    delete ui;
}
