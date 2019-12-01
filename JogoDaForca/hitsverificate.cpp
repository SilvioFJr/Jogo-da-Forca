#include "hitsverificate.h"

void HitsVerificate::SetPixMapAlpha (QLabel* lbl, int alpha)
{
    QImage image(":/imagens/lbl_mask.jpg");
    QPainter p;
    p.begin(&image);
    p.setCompositionMode(QPainter::CompositionMode_DestinationIn);
    p.fillRect(image.rect(), qAlpha(255));
    p.end();
    lbl->setPixmap(QPixmap::fromImage(image));
}

