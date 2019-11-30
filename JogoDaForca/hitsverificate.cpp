#include "hitsverificate.h"

void HitsVerificate::SetPixMapAlpha (QLabel* lbl, int alpha)
{
    QImage image(":/imagens/nova img - mudar transparencia.jpg");
    QPainter p;
    p.begin(&image);
    p.setCompositionMode(QPainter::CompositionMode_DestinationIn);
    p.fillRect(image.rect(), QColor(255, 255, 255, alpha));
    p.end();
    lbl->setPixmap(QPixmap::fromImage(image));
}

