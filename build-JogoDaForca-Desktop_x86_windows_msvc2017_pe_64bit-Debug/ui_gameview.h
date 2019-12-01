/********************************************************************************
** Form generated from reading UI file 'gameview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEVIEW_H
#define UI_GAMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameView
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_Q;
    QPushButton *btn_K;
    QPushButton *btn_O;
    QPushButton *btn_D;
    QPushButton *btn_N;
    QPushButton *btn_G;
    QPushButton *btn_M;
    QPushButton *btn_A;
    QPushButton *btn_H;
    QPushButton *btn_T;
    QPushButton *btn_E;
    QPushButton *btn_B;
    QPushButton *btn_I;
    QPushButton *btn_P;
    QPushButton *btn_S;
    QPushButton *btn_R;
    QPushButton *btn_C;
    QPushButton *btn_F;
    QPushButton *btn_L;
    QPushButton *btn_J;
    QPushButton *btn_U;
    QPushButton *btn_V;
    QPushButton *btn_W;
    QPushButton *btn_X;
    QPushButton *btn_Y;
    QPushButton *btn_Z;
    QLabel *lbl_word;
    QLabel *lbl_tip;
    QLabel *lbl_img;
    QLabel *lbl_mask;

    void setupUi(QDialog *GameView)
    {
        if (GameView->objectName().isEmpty())
            GameView->setObjectName(QString::fromUtf8("GameView"));
        GameView->resize(800, 600);
        GameView->setMinimumSize(QSize(800, 600));
        GameView->setMaximumSize(QSize(800, 600));
        GameView->setAutoFillBackground(false);
        GameView->setStyleSheet(QString::fromUtf8("background-image: url(:/imagens/Top-Dark-Wallpaper.jpg);\n"
""));
        gridLayoutWidget = new QWidget(GameView);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-10, 380, 950, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout->setContentsMargins(0, 0, 129, 25);
        btn_Q = new QPushButton(gridLayoutWidget);
        btn_Q->setObjectName(QString::fromUtf8("btn_Q"));
        btn_Q->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_Q, 1, 6, 1, 1);

        btn_K = new QPushButton(gridLayoutWidget);
        btn_K->setObjectName(QString::fromUtf8("btn_K"));
        btn_K->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_K, 1, 0, 1, 1);

        btn_O = new QPushButton(gridLayoutWidget);
        btn_O->setObjectName(QString::fromUtf8("btn_O"));
        btn_O->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_O, 1, 4, 1, 1);

        btn_D = new QPushButton(gridLayoutWidget);
        btn_D->setObjectName(QString::fromUtf8("btn_D"));
        btn_D->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_D, 0, 3, 1, 1);

        btn_N = new QPushButton(gridLayoutWidget);
        btn_N->setObjectName(QString::fromUtf8("btn_N"));
        btn_N->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_N, 1, 3, 1, 1);

        btn_G = new QPushButton(gridLayoutWidget);
        btn_G->setObjectName(QString::fromUtf8("btn_G"));
        btn_G->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_G, 0, 6, 1, 1);

        btn_M = new QPushButton(gridLayoutWidget);
        btn_M->setObjectName(QString::fromUtf8("btn_M"));
        btn_M->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_M, 1, 2, 1, 1);

        btn_A = new QPushButton(gridLayoutWidget);
        btn_A->setObjectName(QString::fromUtf8("btn_A"));
        btn_A->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_A, 0, 0, 1, 1);

        btn_H = new QPushButton(gridLayoutWidget);
        btn_H->setObjectName(QString::fromUtf8("btn_H"));
        btn_H->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_H, 0, 7, 1, 1);

        btn_T = new QPushButton(gridLayoutWidget);
        btn_T->setObjectName(QString::fromUtf8("btn_T"));
        btn_T->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_T, 1, 9, 1, 1);

        btn_E = new QPushButton(gridLayoutWidget);
        btn_E->setObjectName(QString::fromUtf8("btn_E"));
        btn_E->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_E, 0, 4, 1, 1);

        btn_B = new QPushButton(gridLayoutWidget);
        btn_B->setObjectName(QString::fromUtf8("btn_B"));
        btn_B->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_B, 0, 1, 1, 1);

        btn_I = new QPushButton(gridLayoutWidget);
        btn_I->setObjectName(QString::fromUtf8("btn_I"));
        btn_I->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_I, 0, 8, 1, 1);

        btn_P = new QPushButton(gridLayoutWidget);
        btn_P->setObjectName(QString::fromUtf8("btn_P"));
        btn_P->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_P, 1, 5, 1, 1);

        btn_S = new QPushButton(gridLayoutWidget);
        btn_S->setObjectName(QString::fromUtf8("btn_S"));
        btn_S->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_S, 1, 8, 1, 1);

        btn_R = new QPushButton(gridLayoutWidget);
        btn_R->setObjectName(QString::fromUtf8("btn_R"));
        btn_R->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_R, 1, 7, 1, 1);

        btn_C = new QPushButton(gridLayoutWidget);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        btn_C->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_C, 0, 2, 1, 1);

        btn_F = new QPushButton(gridLayoutWidget);
        btn_F->setObjectName(QString::fromUtf8("btn_F"));
        btn_F->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_F, 0, 5, 1, 1);

        btn_L = new QPushButton(gridLayoutWidget);
        btn_L->setObjectName(QString::fromUtf8("btn_L"));
        btn_L->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_L, 1, 1, 1, 1);

        btn_J = new QPushButton(gridLayoutWidget);
        btn_J->setObjectName(QString::fromUtf8("btn_J"));
        btn_J->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_J, 0, 9, 1, 1);

        btn_U = new QPushButton(gridLayoutWidget);
        btn_U->setObjectName(QString::fromUtf8("btn_U"));
        btn_U->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_U, 2, 2, 1, 1);

        btn_V = new QPushButton(gridLayoutWidget);
        btn_V->setObjectName(QString::fromUtf8("btn_V"));
        btn_V->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_V, 2, 3, 1, 1);

        btn_W = new QPushButton(gridLayoutWidget);
        btn_W->setObjectName(QString::fromUtf8("btn_W"));
        btn_W->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_W, 2, 4, 1, 1);

        btn_X = new QPushButton(gridLayoutWidget);
        btn_X->setObjectName(QString::fromUtf8("btn_X"));
        btn_X->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_X, 2, 5, 1, 1);

        btn_Y = new QPushButton(gridLayoutWidget);
        btn_Y->setObjectName(QString::fromUtf8("btn_Y"));
        btn_Y->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_Y, 2, 6, 1, 1);

        btn_Z = new QPushButton(gridLayoutWidget);
        btn_Z->setObjectName(QString::fromUtf8("btn_Z"));
        btn_Z->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgba(255, 0, 0,1);\n"
"background: transparent;"));

        gridLayout->addWidget(btn_Z, 2, 7, 1, 1);

        lbl_word = new QLabel(GameView);
        lbl_word->setObjectName(QString::fromUtf8("lbl_word"));
        lbl_word->setGeometry(QRect(500, 150, 271, 81));
        lbl_word->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255); \n"
"font: 35pt \"Cute Jellyfish\";"));
        lbl_tip = new QLabel(GameView);
        lbl_tip->setObjectName(QString::fromUtf8("lbl_tip"));
        lbl_tip->setGeometry(QRect(10, 10, 731, 111));
        lbl_tip->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255); \n"
"font: 20pt \"Cute Jellyfish\";"));
        lbl_img = new QLabel(GameView);
        lbl_img->setObjectName(QString::fromUtf8("lbl_img"));
        lbl_img->setGeometry(QRect(80, 140, 251, 221));
        lbl_img->setPixmap(QPixmap(QString::fromUtf8(":/imagens/nova img - mudar transparencia.jpg")));
        lbl_img->setScaledContents(true);
        lbl_mask = new QLabel(GameView);
        lbl_mask->setObjectName(QString::fromUtf8("lbl_mask"));
        lbl_mask->setGeometry(QRect(80, 140, 251, 221));
        lbl_mask->setStyleSheet(QString::fromUtf8("background: rgb(0, 0, 0, 0.9)"));

        retranslateUi(GameView);

        QMetaObject::connectSlotsByName(GameView);
    } // setupUi

    void retranslateUi(QDialog *GameView)
    {
        GameView->setWindowTitle(QApplication::translate("GameView", "Dialog", nullptr));
        btn_Q->setText(QApplication::translate("GameView", "Q", nullptr));
        btn_K->setText(QApplication::translate("GameView", "K", nullptr));
        btn_O->setText(QApplication::translate("GameView", "O", nullptr));
        btn_D->setText(QApplication::translate("GameView", "D", nullptr));
        btn_N->setText(QApplication::translate("GameView", "N", nullptr));
        btn_G->setText(QApplication::translate("GameView", "G", nullptr));
        btn_M->setText(QApplication::translate("GameView", "M", nullptr));
        btn_A->setText(QApplication::translate("GameView", "A", nullptr));
        btn_H->setText(QApplication::translate("GameView", "H", nullptr));
        btn_T->setText(QApplication::translate("GameView", "T", nullptr));
        btn_E->setText(QApplication::translate("GameView", "E", nullptr));
        btn_B->setText(QApplication::translate("GameView", "B", nullptr));
        btn_I->setText(QApplication::translate("GameView", "I", nullptr));
        btn_P->setText(QApplication::translate("GameView", "P", nullptr));
        btn_S->setText(QApplication::translate("GameView", "S", nullptr));
        btn_R->setText(QApplication::translate("GameView", "R", nullptr));
        btn_C->setText(QApplication::translate("GameView", "C", nullptr));
        btn_F->setText(QApplication::translate("GameView", "F", nullptr));
        btn_L->setText(QApplication::translate("GameView", "L", nullptr));
        btn_J->setText(QApplication::translate("GameView", "J", nullptr));
        btn_U->setText(QApplication::translate("GameView", "U", nullptr));
        btn_V->setText(QApplication::translate("GameView", "V", nullptr));
        btn_W->setText(QApplication::translate("GameView", "W", nullptr));
        btn_X->setText(QApplication::translate("GameView", "X", nullptr));
        btn_Y->setText(QApplication::translate("GameView", "Y", nullptr));
        btn_Z->setText(QApplication::translate("GameView", "Z", nullptr));
        lbl_word->setText(QString());
        lbl_tip->setText(QString());
        lbl_img->setText(QString());
        lbl_mask->setText(QApplication::translate("GameView", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameView: public Ui_GameView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEVIEW_H
