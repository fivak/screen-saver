#ifndef TIMEPRETTYPRINTER_H
#define TIMEPRETTYPRINTER_H

#include <QDateTime>

/**
 * This class is resposible for pretty printing left time to display on screen saver.
 */
class TimePrettyPrinter
{
public:
    TimePrettyPrinter();
    /**
     * Prepare pretty string to display on screen saver.
     * @return left time
     */
    QString printLeftTime(QDateTime currentTime, QDateTime endTime);
private:
    QString secondsToString(qint64 seconds);
};

#endif // TIMEPRETTYPRINTER_H
