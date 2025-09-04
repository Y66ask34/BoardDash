#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    socket = new QTcpSocket(this);
    reconnectTimer = new QTimer(this);

    reconnectTimer->setInterval(6000);
    reconnectTimer->setSingleShot(true);
    reconnectAttempts = 0;

    connect(socket, &QTcpSocket::connected, this, &MainWindow::onConnected),
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::onReadyRead),
    connect(socket, &QTcpSocket::disconnected, this, &MainWindow::onDisconnected),
    connect(reconnectTimer, &QTimer::timeout, this, &MainWindow::onReconnect);

    reconnectTimer->start();
    socket->connectToHost("127.0.0.1", 808);
    ui->setupUi(this);

    qDebug() << "Client is running";

}

MainWindow::~MainWindow()
{
    socket->deleteLater();
    delete ui;
}

void MainWindow::onConnected()
{
    reconnectTimer->stop();
    reconnectAttempts = 0;  // Сбрасывается счетчик переподключений
    qDebug() << "Сonnected to server successfully";
    socket->write("server loh");
}

void MainWindow::onReadyRead()
{
    QByteArray dataFromServer = socket->readAll();
    qDebug() << dataFromServer;
}

void MainWindow::onDisconnected()
{
    qDebug() << "Disconnected from server. ";

    if (!(reconnectTimer->isActive()))
    {
        reconnectTimer->start();
    }

}

void MainWindow::onReconnect()
{
    qDebug() << "Server is not responding, trying to connect . . . ";
    socket->connectToHost("127.0.0.1", 808);
}
