#include "wordencriptate.h"

WordEncriptate::WordEncriptate(QString word)
{
    setWord(word);
    setEncriptedWord(word);
}
void WordEncriptate::setWord(QString word)
{
    this->word = word;
}

void WordEncriptate::setEncriptedWord(QString word)
{
    for (int i = 0; i<word.length(); i++)
    {
        encriptedWord.append('-');
    }
}

QString WordEncriptate::getEncriptedWord()
{
    return this->encriptedWord;
}

int WordEncriptate::EncriptateWordActualization(QChar letter)
{
    int alarm =0;
    for (int i=0; i<this->word.length();i++)
    {
        if (this->word[i] == letter)
        {
            encriptedWord[i]=letter;
            alarm+=1;
        }
    }
    return alarm;
}



