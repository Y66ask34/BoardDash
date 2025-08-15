#include "mytcpserver.h"
#include <QCoreApplication>


/**********
 * Ближайший план разработки: Сделать передачу и вход по аккаунту, затем Создание базы данных зарегестрированных клиентов
 **********/

/**********
     *
 **********/

// шаблон блока комментариев


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyTcpServer server;
    server.dbquest("select * from Accounts where id = 1;");



    return a.exec();
}
