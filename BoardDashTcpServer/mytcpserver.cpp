#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include<QString>

MyTcpServer::~MyTcpServer()
{

    mTcpServer->close();
    //server_status=0;
}

MyTcpServer::MyTcpServer(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this);

    connect(mTcpServer, &QTcpServer::newConnection,
            this, &MyTcpServer::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 808)){
        qDebug() << "server is not started";
    } else {
        //server_status=1;
        qDebug() << "server is started";
    }
}

void MyTcpServer::checkClientNextAction(QByteArray action)
{
    /**********
     * Здесь пока что условные названия для действий, которые я держу в голове и условно выписываю
     * reg - регистрация нового пользователя (дальше будет передача данных пользователя и добавление данных в таблицу БД)
     * auth - вход пользователя, проверка наличия пользователя в БД, вывод доски для него, если юзер существует
     *
     **********/
    if (action == "reg")
        regNewUser();

    else if (action == "auth")
        authExtUser();
}

void MyTcpServer::slotNewConnection(){
    //   if(server_status==1){
    mTcpSocket = mTcpServer->nextPendingConnection();
    // Здесь должна быть реализация прослушивания данных для следующего действия со стороны клиента.

    mTcpSocket->write("Hello, World!!! I am echo server!\r\n");
    connect(mTcpSocket, &QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
    connect(mTcpSocket,&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);
    // }
}

void MyTcpServer::slotServerRead(){
    QString res = "";
    while(mTcpSocket->bytesAvailable()>0)
    {
        QByteArray array =mTcpSocket->readAll();
        qDebug()<<array<<"\n";
        if(array=="\x01")
        {
            mTcpSocket->write(res.toUtf8());
            res = "";
        }
        else
            res.append(array);
    }
    mTcpSocket->write(res.toUtf8());

}

void MyTcpServer::slotClientDisconnected(){
    mTcpSocket->close();
}
