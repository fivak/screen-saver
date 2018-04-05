#ifndef TIMEPRETTYPRINTER_H
#define TIMEPRETTYPRINTER_H

#include <QDateTime>

class TimePrettyPrinter
{
public:
    TimePrettyPrinter();
    QString printLeftTime(QDateTime currentTime, QDateTime endTime);
private:
    QString secondsToString(qint64 seconds);
};

#endif // TIMEPRETTYPRINTER_H
