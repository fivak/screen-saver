#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "datetimeprovider.h"
#include "userscreensaverparameters.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    dateTimeProvider(new DateTimeProvider(this))
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete dateTimeProvider;
}

void MainWindow::on_button_clicked()
{
    UserScreenSaverParameters params = UserScreenSaverParameters(dateTimeProvider->getDateTime(), 2);
    ui->label->setText(params.getEndTime().toString());
}
