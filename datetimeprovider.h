#ifndef DATETIMEPROVIDER_H
#define DATETIMEPROVIDER_H

#include <QObject>
#include <QDateTime>

class DateTimeProvider : public QObject
{
    Q_OBJECT
public:
    explicit DateTimeProvider(QObject *parent = 0);
    ~DateTimeProvider();
    QDateTime getDateTime();
signals:

public slots:
};

#endif // DATETIMEPROVIDER_H
