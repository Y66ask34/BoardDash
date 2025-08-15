#include "accountdata.h"

AccountData::AccountData() {}

QByteArray AccountData::getAccountName() { return account_name; }

QByteArray AccountData::getPassowrd() { return password; }

QByteArray AccountData::getEmail() { return email; }

QByteArray AccountData::getIpAddr() { return ip_address; }
