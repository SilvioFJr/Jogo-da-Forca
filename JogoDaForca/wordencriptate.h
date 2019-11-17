#ifndef WORDENCRIPTATE_H
#define WORDENCRIPTATE_H
#include<QString>
#include<QChar>

class WordEncriptate
{
private:
    QString encriptedWord;
    QString word;
public:
    WordEncriptate(QString word);
    void setWord(QString word);
    void setEncriptedWord (QString word);
    QString getEncriptedWord ();
    int EncriptateWordActualization (QChar letter);


};

#endif // WORDENCRIPTATE_H
