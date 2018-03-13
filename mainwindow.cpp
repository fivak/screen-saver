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
    ui->period_input->setValue(5);
    ui->date_time_input->setCalendarPopup(true);
    ui->date_time_input->setDateTime(dateTimeProvider->getDateTime().addSecs(60));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dateTimeProvider;
}

UserScreenSaverParameters* MainWindow::getUserParameters()
{
    return new UserScreenSaverParameters(ui->date_time_input->dateTime(), ui->period_input->value());
}

void MainWindow::on_start_button_clicked()
{
    ScreenSaver screenSaver;
    screenSaver.show(getUserParameters());
}
