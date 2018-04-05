#include "datetimeprovider.h"

DateTimeProvider::DateTimeProvider(QObject *parent)
    : QObject(parent) { }

DateTimeProvider::~DateTimeProvider() { }

QDateTime DateTimeProvider::getDateTime()
{
    return QDateTime::currentDateTime();
}

