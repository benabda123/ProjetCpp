#include "employe.h"
#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QDebug>
#include <QRegularExpression>
#include <QMessageBox>
#include <QSqlError>
#include <QCryptographicHash>


Employe::Employe(int id_e, QString nom_e, QString prenom_e, int nume_e, QString adrs_e, QString email_e, QString poste_e, QString DateEmb_e, int salaire_e )
{
    this->id_e=id_e;
    this->nom_e=nom_e;
    this->prenom_e=prenom_e;
    this->adrs_e=adrs_e;
    this->email_e=email_e;
    this->nume_e=nume_e;
    this->poste_e=poste_e;
    this->DateEmb_e=DateEmb_e;
    this->salaire_e=salaire_e;
    //this->mdp=mdp;
}
void Employe::setMotDePasse(QString MotDePasse) {
    this->mdp = MotDePasse;
}

bool Employe::verifierMotDePasse(QString MotDePasse) {
    // Comparer le mot de passe fourni avec celui enregistré
    return (this->mdp == MotDePasse);
}
QString Employe::hashPassword(const QString &password) {
    QByteArray passwordBytes = password.toUtf8();
    QByteArray hashBytes = QCryptographicHash::hash(passwordBytes, QCryptographicHash::Sha256);
    QString hashedPassword = QString::fromLatin1(hashBytes.toHex());
    return hashedPassword;
}



QString Employe::getmdp() {
    return mdp;
}

int Employe::getid_e()
{
    return id_e;
}

int Employe::getnume_e()

{
    return nume_e;
}

int  Employe::getsalaire_e()
{
    return salaire_e;
}

QString Employe::getposte_e()
{
    return poste_e;
}

QString Employe::getnom_e()
{
    return nom_e;
}

QString Employe::getprenom_e()
{
    return prenom_e;
}

QString Employe::getadrs_e()
{
    return adrs_e;
}

QString Employe::getemail_e()
{
    return email_e;
}

QString Employe::getDateEmb_e()
{
    return DateEmb_e;
}

void Employe::setid_e(int id)
{
    id_e = id;
}

void Employe::setnume_e(int nume)
{
    nume_e = nume;
}

void Employe::setsalaire_e(int  salaire)
{
    salaire_e = salaire;
}

void Employe::setmail_e(QString mail)
{
    email_e = mail;
}

void Employe::setnom_e(QString nom)
{
    nom_e = nom;
}

void Employe::setprenom_e(QString prenom)
{
    prenom_e = prenom;
}

void Employe::setadrs_e(QString adrs)
{
    adrs_e = adrs;
}

void Employe::setposte_e(QString poste)
{
    poste_e = poste;
}

void Employe::setDateEmb_e(QString dateemb)
{
    DateEmb_e = dateemb;
}

bool Employe::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(id_e);
    QString res2=QString::number(nume_e);
    QString res3=QString::number(salaire_e);

    query.prepare("INSERT INTO Employe (ID_E, NOM_E, PRENOM_E, NUME_E, MAIL_E, ADRS_E,  DATEEMB_E, SALAIRE_E, POSTE_E) "
                  "VALUES (:id, :nom, :prenom, :numero, :adresseMail, :adresse, :dateemb, :salaire, :poste)");
    query.bindValue(":id", res);              // Correspond à ID_E
    query.bindValue(":nom", nom_e);           // Correspond à NOM_E
    query.bindValue(":prenom", prenom_e);     // Correspond à PRENOM_E
    query.bindValue(":numero", res2);         // Correspond à NUME_E
    query.bindValue(":adresseMail", email_e);  // Correspond à MAIL_E
    query.bindValue(":adresse", adrs_e);      // Correspond à ADRS_E
    query.bindValue(":dateemb", DateEmb_e);   // Correspond à DATEEMB_E
    query.bindValue(":salaire", res3);        // Correspond à SALAIRE_E
    query.bindValue(":poste", poste_e);       // Correspond à POSTE_E

    return query.exec();
}

bool Employe::supprimer(int id_e)
{
    QSqlQuery query;
    QString res=QString::number(id_e);
    query.prepare("DELETE FROM EMPLOYE WHERE ID_E = :id_e");
    query.bindValue(":id_e", res);

    return query.exec();
}

QSqlQueryModel *Employe::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Employe");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_e"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_e"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom_e"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail_e"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("adrs_e"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("nume_e"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("poste"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("salaire"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("dateemb"));
    return model;
}


bool Employe::modifier(int id_e, QString nom_e, QString prenom_e, QString adrs_e, QString email_e, int nume_e, QString poste_e, QString DateEmb_e, int salaire_e)
{
    QSqlQuery query;
    QString res=QString::number(id_e);
    QString res2=QString::number(nume_e);
    QString res3=QString::number(salaire_e);
    query.prepare("UPDATE Employe SET NOM_E = :nom, PRENOM_E = :prenom, NUME_E = :numero, "
                  "MAIL_E = :adresseMail, ADRS_E = :adresse,  "
                  "DATEEMB_E = :dateemb, SALAIRE_E = :salaire, POSTE_E = :poste "
                  "WHERE ID_E = :id");
    query.bindValue(":id", res);
    query.bindValue(":nom", nom_e);
    query.bindValue(":prenom", prenom_e);
    query.bindValue(":numero", res2);
    query.bindValue(":adresseMail", email_e);
    query.bindValue(":adresse", adrs_e);
    query.bindValue(":dateemb", DateEmb_e);
    query.bindValue(":salaire", res3);
    query.bindValue(":poste", poste_e);

    return query.exec();
}

bool Employe::rechercher(int id_e, Employe &emp)
{
    // Utilisez une requête paramétrée pour éviter les problèmes de sécurité (SQL injection)
    QSqlQuery query;
    query.prepare("SELECT * FROM EMPLOYE WHERE id_e = :id");
    query.bindValue(":id", id_e);  // Corriger le paramètre pour être ":id" au lieu de ":id_e"

    // Exécute la requête et vérifie s'il y a un résultat
    if (query.exec() && query.first()) {
        // Remplir l'objet 'emp' avec les données
        emp.id_e = query.value("id_e").toInt();
        emp.nom_e = query.value("nom_e").toString();
        emp.prenom_e = query.value("prenom_e").toString();
        emp.nume_e = query.value("nume_e").toInt();
        emp.email_e = query.value("mail_e").toString();
        emp.adrs_e = query.value("adrs_e").toString();
        emp.DateEmb_e = query.value("dateemb_e").toString();
        emp.salaire_e = query.value("salaire_e").toInt();
        emp.poste_e = query.value("poste_e").toString();

        return true; // Enregistrement trouvé
    } else {
        qDebug() << "Erreur lors de la recherche du record :" << query.lastError().text();
        return false; // Aucun enregistrement trouvé
    }
}
QSqlQueryModel *Employe::AfficherTriesParSalaire()
{
QSqlQueryModel *model = new QSqlQueryModel();
model->setQuery("SELECT * FROM EMPLOYE ORDER BY SALAIRE_E ASC"
                "");  // Assurez-vous de remplacer "datedecreation" par le nom réel de votre colonne de date

// Assurez-vous d'ajuster les en-têtes en fonction de votre modèle de données
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_e"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_e"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom_e"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail_e"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("adrs_e"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("nume_e"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("poste"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("salaire"));
model->setHeaderData(8, Qt::Horizontal, QObject::tr("dateemb"));
return model ;
}

QSqlQueryModel *Employe::AfficherTriesParSalaire1()
{
QSqlQueryModel *model = new QSqlQueryModel();
model->setQuery("SELECT * FROM EMPLOYE ORDER BY SALAIRE_E DESC"
                "");  // Assurez-vous de remplacer "datedecreation" par le nom réel de votre colonne de date

// Assurez-vous d'ajuster les en-têtes en fonction de votre modèle de données
model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_e"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_e"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom_e"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail_e"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("adrs_e"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("nume_e"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("poste"));
model->setHeaderData(7, Qt::Horizontal, QObject::tr("salaire"));
model->setHeaderData(8, Qt::Horizontal, QObject::tr("dateemb"));
return model ;
}
