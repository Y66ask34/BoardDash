#ifndef ACCOUNTDATA_H
#define ACCOUNTDATA_H

#include <QObject>
#include <QByteArray>
#include <QString>
/**********
 *  Здесь описан класс-контейнер, который принимает и хранит в себе данные об аккаунте, полученные от клиента.
 *  Первичная идея - данные приватны и не имеют возможности к изменению, но имет только способность к получению этих данных.
**********/

class AccountData
{
private:
    QByteArray  account_name,
                password,
                email,
                ip_address;


public:
    AccountData();

    QByteArray getAccountName();
    QByteArray getPassowrd();
    QByteArray getEmail();
    QByteArray getIpAddr();

    ~AccountData() {};

};

#endif // ACCOUNTDATA_H
