#ifndef NEWSDOWNLOADER_H
#define NEWSDOWNLOADER_H

#include <QtGui/QMainWindow>
#include "ui_newsdownloader.h"

class NewsDownloader : public QMainWindow
{
    Q_OBJECT

public:
    NewsDownloader(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~NewsDownloader();

private:
    Ui::NewsDownloaderClass ui;
};

#endif // NEWSDOWNLOADER_H
