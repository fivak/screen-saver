#ifndef USERSCREENSAVERPARAMETERS_H
#define USERSCREENSAVERPARAMETERS_H

#include <QUrl>
#include <QDateTime>

/**
 * This class stores user parameters.
 */
class UserScreenSaverParameters
{
private:
    QDateTime endTime;
    int periodInSeconds;
public:
    UserScreenSaverParameters(QDateTime endTime, int periodInSeconds);
    /**
     * This method return end time which define when screen saver should hide..
     * @return end time
     */
    QDateTime getEndTime();
    /**
     * This method period in seconds which is used to reloading image.
     * @return period
     */
    int getPeriodInSeconds();
};

#endif // USERSCREENSAVERPARAMETERS_H
