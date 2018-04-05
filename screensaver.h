#ifndef SCREENSAVER_H
#define SCREENSAVER_H

#include <QTimer>
#include <QDialog>
#include <QScreen>
#include <QPixmap>
#include <QGuiApplication>

#include "filedownloader.h"
#include "datetimeprovider.h"
#include "timeprettyprinter.h"
#include "randomimageurlprovider.h"
#include "userscreensaverparameters.h"

namespace Ui {
class ScreenSaver;
}

class ScreenSaver : public QDialog
{
    Q_OBJECT

public:
    explicit ScreenSaver(QWidget *parent = 0, DateTimeProvider *dateTimeProvider = 0, UserScreenSaverParameters *userScreenSaverParameters = 0);
    ~ScreenSaver();
    void show();
public slots:
    void setImage();
    void updateTime();
    void updateImage();
private:
    QPixmap image;
    Ui::ScreenSaver *ui;
    QTimer *timeTimer;
    QTimer *imageTimer;
    FileDownloader *fileDownloader;
    DateTimeProvider *dateTimeProvider;
    TimePrettyPrinter *timePrettyPrinter;
    RandomImageUrlProvider *randomImageUrlProvider;
    UserScreenSaverParameters *userScreenSaverParameters;

    void prepareImage();
    QRect getScreenSize();
};

#endif // SCREENSAVER_H
