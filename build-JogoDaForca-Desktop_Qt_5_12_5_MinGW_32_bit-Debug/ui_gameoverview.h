/********************************************************************************
** Form generated from reading UI file 'gameoverview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERVIEW_H
#define UI_GAMEOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOverView
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *GameOverView)
    {
        if (GameOverView->objectName().isEmpty())
            GameOverView->setObjectName(QString::fromUtf8("GameOverView"));
        GameOverView->resize(800, 600);
        GameOverView->setMinimumSize(QSize(800, 600));
        GameOverView->setMaximumSize(QSize(800, 600));
        GameOverView->setStyleSheet(QString::fromUtf8("background-color: black;"));
        label = new QLabel(GameOverView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, -50, 531, 461));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font: 100pt \"Cute Jellyfish\";\n"
"color: rgb(85, 0, 255);\n"
"background: transparent;"));
        pushButton = new QPushButton(GameOverView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 540, 211, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgb(255, 0, 0);\n"
"background: transparent;"));

        retranslateUi(GameOverView);

        QMetaObject::connectSlotsByName(GameOverView);
    } // setupUi

    void retranslateUi(QDialog *GameOverView)
    {
        GameOverView->setWindowTitle(QApplication::translate("GameOverView", "Dialog", nullptr));
        label->setText(QApplication::translate("GameOverView", "<html><head/><body><p align=\"center\">YOU</p><p align=\"center\">LOSE!</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("GameOverView", "RESTART", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOverView: public Ui_GameOverView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERVIEW_H
