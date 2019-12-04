#include "gameoverview.h"
#include "mainwindow.h"
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
    ui->label->raise();
    ui->pushButton->raise();
}


GameOverView::~GameOverView()
{
    delete ui;
}

void GameOverView::on_pushButton_clicked()
{
    static MainWindow Main;
    this->close();
    Main.show();
}
