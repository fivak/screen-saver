#include "timeprettyprinter.h"

TimePrettyPrinter::TimePrettyPrinter() { }

QString TimePrettyPrinter::printLeftTime(QDateTime currentTime, QDateTime endTime)
{
    return secondsToString(currentTime.secsTo(endTime));
}

QString TimePrettyPrinter::secondsToString(qint64 seconds)
{
  const qint64 DAY = 86400;
  qint64 days = seconds / DAY;
  QTime time = QTime(0,0).addSecs(seconds % DAY);
  return QString("%1 days, %2 hours, %3 minutes, %4 seconds")
          .arg(days)
          .arg(time.hour())
          .arg(time.minute())
          .arg(time.second());
}
