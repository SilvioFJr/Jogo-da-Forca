#include "youwinview.h"
#include "ui_youwinview.h"
#include "mainwindow.h"

YouWinView::YouWinView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::YouWinView)
{
    ui->setupUi(this);
    QMovie *movie = new QMovie(":/imagens/skull.gif");
    QLabel *processLabel = new QLabel(this);
    processLabel->setMovie(movie);
    movie->scaledSize();
    movie->start();
    ui->label->raise();
    ui->pushButton->raise();
}

YouWinView::~YouWinView()
{
    delete ui;
}

void YouWinView::on_pushButton_clicked()
{
    static MainWindow Main2;
    this->destroy();
    Main2.show();
}
