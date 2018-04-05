#ifndef USERSCREENSAVERPARAMETERS_H
#define USERSCREENSAVERPARAMETERS_H

#include <QUrl>
#include <QDateTime>

class UserScreenSaverParameters
{
private:
    QDateTime endTime;
    int periodInSeconds;
public:
    UserScreenSaverParameters(QDateTime endTime, int periodInSeconds);
    QDateTime getEndTime();
    int getPeriodInSeconds();
};

#endif // USERSCREENSAVERPARAMETERS_H
