#ifndef SCREENSAVER_H
#define SCREENSAVER_H

#include <QDialog>
#include "userscreensaverparameters.h"

namespace Ui {
class ScreenSaver;
}

class ScreenSaver : public QDialog
{
    Q_OBJECT

public:
    explicit ScreenSaver(QWidget *parent = 0);
    ~ScreenSaver();

    void show(UserScreenSaverParameters* params);
private:
    Ui::ScreenSaver *ui;
    QRect getScreenSize();
};

#endif // SCREENSAVER_H
