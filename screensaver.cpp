#include "screensaver.h"
#include "ui_screensaver.h"

ScreenSaver::ScreenSaver(QWidget *parent,
                         DateTimeProvider *dateTimeProvider,
                         UserScreenSaverParameters *userScreenSaverParameters) :
    QDialog(parent),
    ui(new Ui::ScreenSaver),
    timeTimer(new QTimer(this)),
    imageTimer(new QTimer(this)),
    dateTimeProvider(dateTimeProvider),
    timePrettyPrinter(new TimePrettyPrinter),
    randomImageUrlProvider(new RandomImageUrlProvider()),
    userScreenSaverParameters(userScreenSaverParameters)
{
    ui->setupUi(this);
    this->setModal(true);
    this->setFixedSize(this->getScreenSize().width(), this->getScreenSize().height());

    image = QPixmap(":/resources/img/image.png");
    this->prepareImage();

    connect(timeTimer, SIGNAL(timeout()), this, SLOT(updateTime()));
    connect(imageTimer, SIGNAL(timeout()), this, SLOT(updateImage()));
}

ScreenSaver::~ScreenSaver()
{
    delete ui;
    delete timeTimer;
    delete imageTimer;
    delete fileDownloader;
}

void ScreenSaver::show()
{
    timeTimer->start(1000);
    imageTimer->start(1000 * userScreenSaverParameters->getPeriodInSeconds());
    this->exec();
    timeTimer->stop();
    imageTimer->stop();
}

void ScreenSaver::updateImage()
{
    fileDownloader = new FileDownloader(randomImageUrlProvider->getRandomUrl(), this);
    connect(fileDownloader, SIGNAL(downloaded()), this, SLOT(setImage()));
}

void ScreenSaver::setImage()
{
    image.loadFromData(fileDownloader->downloadedData());
    this->prepareImage();
}

void ScreenSaver::updateTime()
{
    QDateTime endTime = userScreenSaverParameters->getEndTime();
    QDateTime currentTime = dateTimeProvider->getDateTime();
    if (currentTime.operator>=(endTime)) {
        timeTimer->stop();
        imageTimer->stop();
        this->close();
    } else {
        ui->label->setText(timePrettyPrinter->printLeftTime(currentTime, endTime));
    }
}

void ScreenSaver::prepareImage()
{
    ui->image->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    ui->image->setFixedSize(this->getScreenSize().width(), this->getScreenSize().height());
    ui->image->setPixmap(image.scaled(ui->image->width(), ui->image->height()));
}

QRect ScreenSaver::getScreenSize()
{
    return QGuiApplication::primaryScreen()->geometry();
}
