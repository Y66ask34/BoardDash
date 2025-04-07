#include "mytcpserver.h"
#include <QCoreApplication>


/**********
 * Ближайший план разработки: Сделать передачу и вход по аккаунту, затем Создание базы данных зарегестрированных клиентов
 **********/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyTcpServer server;
    return a.exec();
}
