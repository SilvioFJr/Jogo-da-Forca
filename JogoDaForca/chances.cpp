#include "chances.h"

void tentativa::tentativa1(QLabel* lbl)
{
    if(int tentativas = 0){
        lbl->setStyleSheet( "background: rgb(0, 0, 0, 0.0)");
        tentativas --;
    }
    if(int tentativas = 1){
        lbl->setStyleSheet( "background: rgb(0, 0, 0, 0.2)");
        tentativas --;
    }
    if(int tentativas = 2){
        lbl->setStyleSheet( "background: rgb(0, 0, 0, 0.4)");
        tentativas --;
    }
    if(int tentativas = 3){
        lbl->setStyleSheet( "background: rgb(0, 0, 0, 0.5)");
        tentativas --;
    }
    if(int tentativas = 4){
        lbl->setStyleSheet( "background: rgb(0, 0, 0, 0.7)");
        tentativas --;
    }
    if(int tentativas = 5){
        lbl->setStyleSheet( "background: rgb(0, 0, 0, 0.9)");
        tentativas --;
    }
}
