#ifndef WORDSELECT_H
#define WORDSELECT_H
#include<QMap>
#include<QString>
#include<QVector>
#include<QDebug>
#include<iterator>

class WordSelect
{
private:
    QMap<QString, QString> map;
public:
    WordSelect(QMap<QString, QString> map);
    void SetMap (QMap<QString, QString> map);
    QStringList ExtractKeysList ();
    QString ExtractKey(QStringList keys);
    QString ExtractValue(QString Key);
};

#endif // WORDSELECT_H
