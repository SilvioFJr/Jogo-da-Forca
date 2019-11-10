#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    QMessageBox alerta;
    alerta.setStyleSheet("font-color: black; background-color: white;");
    alerta.setText("SELECIONAR LEVEL PRIMEIRO!");

    if (level == "level")
    {
        alerta.exec();
    }
    else
    {
        GameView GM;
        this->destroy();
        GM.exec();
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if (level == "level")
    {
        level = "easy";
        ui->pushButton_3->setText("EASY");
    }
    else if (level == "easy")
    {
        level = "medium";
        ui->pushButton_3->setText("MEDIUM");
    }
    else if (level == "medium")
    {
        level = "hard";
        ui->pushButton_3->setText("HARD");
    }
    else if (level == "hard")
    {
        level = "easy";
        ui->pushButton_3->setText("EASY");
    }
}
