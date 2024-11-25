#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>

#include <QSqlQueryModel>


class Employe
{
public:
    Employe(){};
    Employe(int , QString , QString , int , QString adrs_e, QString , QString , QString , int);
    int getid_e();
    int getnume_e();
    int getsalaire_e();
    QString getnom_e();
    QString getprenom_e();
    QString getposte_e();
    QString getemail_e();
    QString getadrs_e();
    QString getDateEmb_e();
    QString getmdp();
    void setmdp(QString mdp);
    void setMotDePasse(QString motDePasse); // Nouvelle méthode pour définir le mot de passe
    QString hashPassword(const QString &password); // Nouvelle méthode pour vérifier le mot de passe

    void setid_e(int id);
    void setnume_e(int nume);
    void setsalaire_e(int  salaire);
    void setnom_e(QString nom);
    void setprenom_e(QString prenom);
    void setmail_e(QString mail);
    void setadrs_e(QString adrs);
    void setposte_e(QString poste);
    void setDateEmb_e(QString dateEmb);
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int);
    bool modifier(int , QString , QString , QString , QString , int , QString , QString , int);
    bool rechercher(int id_e, Employe &emp);
    QSqlQueryModel *AfficherTriesParSalaire();


    QSqlQueryModel *AfficherTriesParSalaire1();


    bool verifierMotDePasse(QString MotDePasse);





private:
    QString nom_e,prenom_e,adrs_e,email_e,poste_e,mdp;
    int id_e,nume_e,salaire_e;

    QString  DateEmb_e;
};

#endif // EMPLOYE_H
