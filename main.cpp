
#include <QtCore>
#include <QtNetwork>

#include <cstdio>

#include "DownloadManager.h"


int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    qDebug()<<"QSslSocket="<<QSslSocket::sslLibraryBuildVersionString();
    qDebug() << "OpenSSL支持情况:" << QSslSocket::supportsSsl();

    DownloadManager manager;
    QTimer::singleShot(0, &manager, SLOT(execute()));

    app.exec();
}
