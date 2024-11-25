#include "connection.h"


connection::connection()
{

}
bool connection::createconnect()
{
db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("CPP_Project");//inserer le nom de la source de données
db.setUserName("Adam");//inserer nom de l'utilisateur
db.setPassword("stylesight");//inserer mot de passe de cet utilisateur

if (db.open()) test=true;
 return  test;
}
void connection::closeConnection(){db.close();}
