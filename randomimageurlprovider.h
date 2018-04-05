#ifndef RANDOMIMAGEURLPROVIDER_H
#define RANDOMIMAGEURLPROVIDER_H

#include <QUrl>
#include <QObject>

/**
 * This class is responsible for generating random url.
 */
class RandomImageUrlProvider : public QObject
{
    Q_OBJECT
public:
    explicit RandomImageUrlProvider(QObject *parent = nullptr);
    /**
     * Return random url to image.
     * @return random url
     */
    QUrl getRandomUrl();
private:
    int randInt(int low, int high);
};

#endif // RANDOMIMAGEURLPROVIDER_H
