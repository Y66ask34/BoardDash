#include "mainwindow.h"

#include <QApplication>
#include <QTcpSocket>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("Fusion"));
    MainWindow w;
    w.show();

    QTcpSocket socket;
    socket.connectToHost("127.0.0.1", 808);
    if (socket.waitForConnected())
    {
        qDebug() << "all_good" << Qt::endl;
    }

    QObject::connect(&socket, &QTcpSocket::readyRead,
        [&socket]()
        {
            QByteArray data = socket.readAll();
            qDebug() << "Server data: " << data;
        });

    socket.waitForDisconnected();
    return a.exec();
}
