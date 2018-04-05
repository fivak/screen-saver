#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "screensaver.h"
#include "datetimeprovider.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_start_button_clicked();

private:
    Ui::MainWindow *ui;
    ScreenSaver *screenSaver;
    DateTimeProvider *dateTimeProvider;
    UserScreenSaverParameters* getUserParameters();
};

#endif // MAINWINDOW_H
