#ifndef RANDOMIMAGEURLPROVIDER_H
#define RANDOMIMAGEURLPROVIDER_H

#include <QUrl>
#include <QObject>

class RandomImageUrlProvider : public QObject
{
    Q_OBJECT
public:
    explicit RandomImageUrlProvider(QObject *parent = nullptr);
    QUrl getRandomUrl();
private:
    int randInt(int low, int high);
};

#endif // RANDOMIMAGEURLPROVIDER_H
