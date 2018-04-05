#ifndef DATETIMEPROVIDER_H
#define DATETIMEPROVIDER_H

#include <QObject>
#include <QDateTime>

/**
 *  Provides date time operations
 */
class DateTimeProvider : public QObject
{
    Q_OBJECT
public:
    explicit DateTimeProvider(QObject *parent = 0);
    ~DateTimeProvider();
    /**
     * Return current system date time.
     * @return current date time
     */
    QDateTime getDateTime();
};

#endif // DATETIMEPROVIDER_H
