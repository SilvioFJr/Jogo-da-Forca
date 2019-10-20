/********************************************************************************
** Form generated from reading UI file 'gameview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEVIEW_H
#define UI_GAMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_GameView
{
public:

    void setupUi(QDialog *GameView)
    {
        if (GameView->objectName().isEmpty())
            GameView->setObjectName(QString::fromUtf8("GameView"));
        GameView->resize(800, 600);
        GameView->setMinimumSize(QSize(800, 600));
        GameView->setMaximumSize(QSize(800, 600));
        GameView->setAutoFillBackground(true);
        GameView->setStyleSheet(QString::fromUtf8("background-image: url(:/imagens/img_gameview.jpg);\n"
""));

        retranslateUi(GameView);

        QMetaObject::connectSlotsByName(GameView);
    } // setupUi

    void retranslateUi(QDialog *GameView)
    {
        GameView->setWindowTitle(QApplication::translate("GameView", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameView: public Ui_GameView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEVIEW_H
