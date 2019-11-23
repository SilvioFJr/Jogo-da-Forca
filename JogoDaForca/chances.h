#ifndef TENTATIVA_H
#define TENTATIVA_H

#include <QObject>
#include <QWidget>
#include<QLabel>

class tentativa
{
private:
    int tentativas = 5;
public:
    static void tentativa1 (QLabel* lbl);

};

#endif // TENTATIVA_H
