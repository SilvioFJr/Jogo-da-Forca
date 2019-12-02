#include "hitsverificate.h"
#include "QPixmap"

void HitsVerificate::SetHangManImage (QLabel* lbl, int error)
{
    if (error == 0)
    {
       QPixmap imagem (":/imagens/img0.png");
       lbl->setPixmap(imagem);
    }

    else if (error == 1)
    {
        QPixmap imagem (":/imagens/img1.png");
        lbl->setPixmap(imagem);
    }
    else if (error==2)
    {
        QPixmap imagem (":/imagens/img2.png");
        lbl->setPixmap(imagem);
    }
    else if (error==3)
    {
        QPixmap imagem (":/imagens/img3.png");
        lbl->setPixmap(imagem);
    }
    else if (error==4)
    {
        QPixmap imagem (":/imagens/img4.png");
        lbl->setPixmap(imagem);
    }
    else if (error==5)
    {
        QPixmap imagem (":/imagens/img5.png");
        lbl->setPixmap(imagem);
    }

}

