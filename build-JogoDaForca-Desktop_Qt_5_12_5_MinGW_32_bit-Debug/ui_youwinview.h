/********************************************************************************
** Form generated from reading UI file 'youwinview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOUWINVIEW_H
#define UI_YOUWINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_YouWinView
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *YouWinView)
    {
        if (YouWinView->objectName().isEmpty())
            YouWinView->setObjectName(QString::fromUtf8("YouWinView"));
        YouWinView->resize(800, 600);
        YouWinView->setMinimumSize(QSize(800, 600));
        YouWinView->setMaximumSize(QSize(800, 600));
        label = new QLabel(YouWinView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, -20, 281, 341));
        label->setStyleSheet(QString::fromUtf8("font: 100pt \"Cute Jellyfish\";\n"
"color: rgb(85, 0, 255);\n"
"background: transparent;"));
        pushButton = new QPushButton(YouWinView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(-10, 540, 211, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 36pt \"Cute Jellyfish\";\n"
"color: rgb(255, 0, 0);\n"
"background: transparent;"));

        retranslateUi(YouWinView);

        QMetaObject::connectSlotsByName(YouWinView);
    } // setupUi

    void retranslateUi(QDialog *YouWinView)
    {
        YouWinView->setWindowTitle(QApplication::translate("YouWinView", "Dialog", nullptr));
        label->setText(QApplication::translate("YouWinView", "<html><head/><body><p align=\"center\">YOU </p><p align=\"center\">WIN!</p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("YouWinView", "RESTART", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YouWinView: public Ui_YouWinView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOUWINVIEW_H
