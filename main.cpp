#include "mainwindow.h"
#include <QApplication>
/**
 * https://wiki.qt.io/Download_Data_from_URL
 * http://doc.qt.io/qt-5/qimage.html#loadFromData
 * http://doc.qt.io/qt-5/qpixmap.html
 * https://kursy.okno.pw.edu.pl/mgr/pluginfile.php/4851/mod_resource/content/2/tematy_projekt%C3%B3w_v2.pdf
 * https://github.com/cmdrkotori/qscreensaver
 *
 *
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
