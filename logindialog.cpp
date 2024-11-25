#include "login.h"
#include "logindialog.h"
#include "ui_login.h"
#include "connection.h" // Pour utiliser la connexion à la base de données
#include <QSqlQuery>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog() {
    delete ui;
}

void LoginDialog::on_button_login_clicked() {
    QString email = ui->mail->text();
    QString password = ui->pass->text();

    if (authenticate(email, password)) {
        accept(); // Fermer la fenêtre de login si succès
    } else {
        QMessageBox::warning(this, "Erreur", "Email ou mot de passe incorrect.");
    }
}

bool LoginDialog::authenticate(const QString &email, const QString &password) {
    QSqlQuery query;
    query.prepare("SELECT password FROM responsables WHERE email = :email");
    query.bindValue(":email", email);

    if (query.exec() && query.next()) {
        QString storedPassword = query.value(0).toString();
        return (password == storedPassword);
    }
    return false;
}
