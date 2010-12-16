#include "newsdownloader.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewsDownloader w;
    w.show();
    return a.exec();
}
