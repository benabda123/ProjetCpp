#include "connection.h"
#include "mainwindow.h"
#include "login.h" // Inclure le header de la classe Login
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Création de la connexion à la base de données
    connection c;
    bool test = c.createconnect();

    if (!test) {
        QMessageBox::critical(nullptr, QObject::tr("Database Error"),
                              QObject::tr("Connection to the database failed.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
        return -1; // Arrêter l'application si la base de données n'est pas connectée
    }

    // Afficher la fenêtre de login
    login login;
    if (login.exec() == QDialog::Accepted) { // Si l'authentification réussit
        MainWindow w;
        w.show();

        QMessageBox::information(nullptr, QObject::tr("Database Connected"),
                                  QObject::tr("Connection successful.\n"
                                              "Welcome!"),
                                  QMessageBox::Ok);

        return a.exec(); // Démarrer l'application principale
    } else {
        QMessageBox::information(nullptr, QObject::tr("Authentication Failed"),
                                  QObject::tr("Login was cancelled or failed.\n"
                                              "Click OK to exit."),
                                  QMessageBox::Ok);
        return 0; // Quitter si l'utilisateur ferme ou échoue le login
    }
}
