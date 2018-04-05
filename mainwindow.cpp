#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datetimeprovider.h"
#include "userscreensaverparameters.h"
#include "screensaver.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    dateTimeProvider(new DateTimeProvider(this))
{
    ui->setupUi(this);
    ui->period_input->setValue(2);
    ui->date_time_input->setCalendarPopup(true);
    ui->date_time_input->setDateTime(dateTimeProvider->getDateTime().addSecs(60));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dateTimeProvider;
}

void MainWindow::on_start_button_clicked()
{
    ScreenSaver *screenSaver = new ScreenSaver(this, dateTimeProvider, getUserParameters());
    screenSaver->show();
}

UserScreenSaverParameters* MainWindow::getUserParameters()
{
    return new UserScreenSaverParameters(ui->date_time_input->dateTime(),
                                         ui->period_input->value());
}

