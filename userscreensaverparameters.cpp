#include "userscreensaverparameters.h"

UserScreenSaverParameters::UserScreenSaverParameters(QDateTime endTime, int periodInSeconds) : endTime(endTime), periodInSeconds(periodInSeconds)
{

}

QDateTime UserScreenSaverParameters::getEndTime()
{
    return endTime;
}

int UserScreenSaverParameters::getPeriodInSeconds()
{
    return periodInSeconds;
}
