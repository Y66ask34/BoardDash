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

    cache_database.setHostName("127.0.0.1");
    cache_database.setDatabaseName("DashBoardMainDb");
    cache_database.setUserName("Jessy_Pigman");
    cache_database.setPassword("191030777");
    cache_database.setPort(5432);   // ОБЯЗАТЕЛЬНО УКАЗАТЬ ЭТОТ ЖЕ ПОРТ ПРИ СОЗДАНИИ БАЗЫ ДАННЫХ

    connect(mTcpServer, &QTcpServer::newConnection,
            this, &MyTcpServer::slotNewConnection);

    if (!cache_database.open()) {
        qDebug() << "Failed to connect to database:" << cache_database.lastError().text();
    } else {
        qDebug() << "database connected";
    }

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

bool MyTcpServer::regNewUser()
{
    /**********
     *  Механизм работы: Клиент отправляет запрос на регистрацию, и после получения ответа отправляет регистрационные данные,
     *  сервер проверяет наличие данных, заносит данные в БД, если требуется, или возвращает ошибку.
    **********/



    return true;
}

bool MyTcpServer::authExtUser()
{
    /**********
     *  Механизм работы: Клиент отправляет запрос на вход, и после получения ответа отправляет регистрационные данные,
     *  сервер проверяет наличие данных, вызывает метод передачи данных на доску к клиенту или возвращает ошибку.
    **********/
    return true;
}

void MyTcpServer::dbquest(QString request)
{
    QString result;
    if (main_db_query.exec(request))
    {
        while(main_db_query.next())
        {
            for (int counter = 0; counter < 5; counter++)
            {
                result = main_db_query.value(counter).toString();
                qDebug() << result;
            }
        }
    }
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
