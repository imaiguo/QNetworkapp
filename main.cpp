
#include <QtCore>
#include <QtNetwork>

#include <cstdio>

#include "DownloadManager.h"


int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    DownloadManager manager;
    QCoreApplication::instance()->arguments();
    QTimer::singleShot(0, &manager, SLOT(execute()));

    app.exec();
}
