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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_GameView
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *GameView)
    {
        if (GameView->objectName().isEmpty())
            GameView->setObjectName(QString::fromUtf8("GameView"));
        GameView->resize(800, 600);
        GameView->setMinimumSize(QSize(800, 600));
        GameView->setMaximumSize(QSize(800, 600));
        GameView->setAutoFillBackground(false);
        GameView->setStyleSheet(QString::fromUtf8("background-image: url(:/imagens/img_gameview.jpg);\n"
""));
        label = new QLabel(GameView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 450, 801, 151));
        label_2 = new QLabel(GameView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 311, 101));
        label_3 = new QLabel(GameView);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 0, 400, 400));
        label_4 = new QLabel(GameView);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 190, 331, 81));

        retranslateUi(GameView);

        QMetaObject::connectSlotsByName(GameView);
    } // setupUi

    void retranslateUi(QDialog *GameView)
    {
        GameView->setWindowTitle(QApplication::translate("GameView", "Dialog", nullptr));
        label->setText(QApplication::translate("GameView", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("GameView", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("GameView", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("GameView", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameView: public Ui_GameView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEVIEW_H
