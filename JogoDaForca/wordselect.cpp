#include "wordselect.h"
#include<algorithm>

WordSelect::WordSelect(QMap<QString, QString> map)
{
    SetMap(map);
    ExtractKeysList();
}

void WordSelect::SetMap (QMap<QString, QString> map)
{
    this->map = map;
}

QStringList WordSelect::ExtractKeysList ()
{
    QStringList temp;
    for (auto it = this->map.begin(); it!= this->map.end(); it++)
    {
        temp<<it.key();
    }
    return temp;
}

QString WordSelect::ExtractKey(QStringList keysList)
{
    return keysList[0];
}

QString WordSelect::ExtractValue(QString Key)
{
    return map.value(Key);
}






