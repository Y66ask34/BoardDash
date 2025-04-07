#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QtNetwork>
#include <QByteArray>
#include <QDebug>

// Реализовать метод для прослушивания следующего действия со стороны клиента.

class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer(QObject *parent = nullptr);

    void checkClientNextAction(QByteArray action);
    bool regNewUser();  // регистрация пользователя (не реализовано)
    bool authExtUser(); // авторизация пользователя (не реализовано)

    ~MyTcpServer();
public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();
private:
    QTcpServer * mTcpServer;
    QTcpSocket * mTcpSocket;
    //int server_status;
};
#endif // MYTCPSERVER_H
