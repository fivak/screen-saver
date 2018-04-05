#ifndef FILEDOWNLOADER_H
#define FILEDOWNLOADER_H

#include <QObject>
#include <QByteArray>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>

/**
 * This class is responsilble for downloading image from external server.
 */
class FileDownloader : public QObject
{
 Q_OBJECT
 public:
  explicit FileDownloader(QUrl imageUrl, QObject *parent = 0);
  virtual ~FileDownloader();

  /**
   * Return downloaded data from external resource.
   * @return downloaded data
   */
  QByteArray downloadedData() const;

 signals:
  /**
   * Emit signal that data is downloaded.
   */
  void downloaded();

 private slots:
  void fileDownloaded(QNetworkReply* pReply);

 private:
  QByteArray data;
  QNetworkAccessManager networkAccessManager;
};

#endif // FILEDOWNLOADER_H
