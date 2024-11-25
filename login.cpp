#include "login.h"
#include "qsqlquery.h"
#include "ui_login.h"
#include <QMessageBox>
#include "resetpassworddialog.h"



login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}
bool login::isAuthenticated() const
{
    return authenticated;
}

void login::on_loginn_clicked()
{
    QString adresse = ui->mail->text();
    QString password = ui->lineEditPassword->text();

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM users WHERE adresse = :adresse AND password = :password");
    query.bindValue(":adresse", adresse);
    query.bindValue(":password", password);

    if (query.exec() && query.next() && query.value(0).toInt() > 0) {
        authenticated = true;
        accept();
    } else {
        QMessageBox::warning(this, "Erreur", "Adresse ou mot de passe incorrect !");
    }}
void login::on_forgotPasswordButton_clicked()
{
    ResetPasswordDialog resetDialog(this);  // Créer une instance de la fenêtre de réinitialisation
    resetDialog.exec();  // Afficher la fenêtre en mode modal
}
