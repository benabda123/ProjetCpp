#include "resetpassworddialog.h"
#include "ui_resetpassworddialog.h"
#include <QMessageBox>
#include <QSqlQuery>

ResetPasswordDialog::ResetPasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResetPasswordDialog)
{
    ui->setupUi(this);  // Initialiser l'interface utilisateur
}

ResetPasswordDialog::~ResetPasswordDialog()
{
    delete ui;
}

void ResetPasswordDialog::on_button_reset_clicked()
{
    QString email = ui->emailField->text();
    QString parentName = ui->parentNameField->text();

    QString password = retrievePasswordIfAnswerIsCorrect(email, parentName);
    if (!password.isEmpty()) {
        QMessageBox::information(this, "Votre mot de passe", "Votre mot de passe est : " + password);
        accept();  // Fermer la fenêtre si la vérification est réussie
    } else {
        QMessageBox::warning(this, "Erreur", "Email ou réponse incorrecte.");
    }
}

QString ResetPasswordDialog::retrievePasswordIfAnswerIsCorrect(const QString &email, const QString &parentName)
{
    QSqlQuery query;

    // Préparer la requête pour récupérer le mot de passe et le nom des parents
    query.prepare("SELECT password, parent_name FROM users WHERE adresse = :adresse");
    query.bindValue(":adresse", email);

    if (query.exec() && query.next()) {
        QString storedParentName = query.value("parent_name").toString();  // Récupérer le nom des parents
        QString storedPassword = query.value("password").toString();  // Récupérer le mot de passe

        // Si la réponse à la question de sécurité est correcte, retourner le mot de passe
        if (storedParentName == parentName) {
            return storedPassword;
        }
    }

    return QString();  // Retourne une chaîne vide si la réponse est incorrecte
}
