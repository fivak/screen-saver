#include "screensaver.h"
#include "ui_screensaver.h"

#include <QScreen>
#include <QGuiApplication>

ScreenSaver::ScreenSaver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScreenSaver)
{
    ui->setupUi(this);
}

ScreenSaver::~ScreenSaver()
{
    delete ui;
}

void ScreenSaver::show(UserScreenSaverParameters* params)
{
    this->setModal(true);
    int width = this->getScreenSize().width();
    int height =this->getScreenSize().height();
    this->setFixedSize(width ,height);
    ui->dateTimeLabel->setText(params->getEndTime().toString());
    ui->period->setText(QString::number(params->getPeriodInSeconds()));
    this->exec();
}

QRect ScreenSaver::getScreenSize()
{
    return QGuiApplication::primaryScreen()->geometry();
}
