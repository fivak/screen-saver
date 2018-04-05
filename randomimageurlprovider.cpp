#include "randomimageurlprovider.h"

RandomImageUrlProvider::RandomImageUrlProvider(QObject *parent) : QObject(parent)
{

}

QUrl RandomImageUrlProvider::getRandomUrl()
{
    return QUrl("https://picsum.photos/800/800/?image=" + QString::number(randInt(1, 600)));
}

int RandomImageUrlProvider::randInt(int low, int high)
{
    return qrand() % ((high + 1) - low) + low;
}
