#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <accountdata.h>

#include <QtNetwork>
#include <QtSql>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QByteArray>
#include <QDebug>
#include <QVector>

// Реализовать метод для прослушивания следующего действия со стороны клиента.

/**********
     * Заметка: При отсутствии данных QSqlQuery возвращает пустоту.
 **********/


class MyTcpServer : public QObject
{
    Q_OBJECT

private:
    QTcpServer * mTcpServer;
    QTcpSocket * mTcpSocket;
    QSqlDatabase cache_database = QSqlDatabase::addDatabase("QPSQL");
    QSqlQuery main_db_query;

public:
    explicit MyTcpServer(QObject *parent = nullptr);

    void checkClientNextAction(QByteArray action);
    bool regNewUser();  // регистрация пользователя (не реализовано)
    bool authExtUser(); // авторизация пользователя (не реализовано)
    void dbquest(QString request); // ТЕСТОВЫЙ МЕТОД ДЛЯ БАЗЫ ДАННЫХ

    ~MyTcpServer();
public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();
};
#endif // MYTCPSERVER_H
