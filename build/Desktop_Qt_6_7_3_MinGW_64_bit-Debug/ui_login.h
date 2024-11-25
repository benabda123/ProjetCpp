/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *loginn;
    QLineEdit *mail;
    QLineEdit *lineEditPassword;
    QPushButton *forgotPasswordButton;
    QLabel *label_17;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(705, 398);
        loginn = new QPushButton(login);
        loginn->setObjectName("loginn");
        loginn->setGeometry(QRect(480, 270, 93, 29));
        loginn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #262D60; /* Couleur de fond normale */\n"
"    color: white;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    \n"
"    \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #1E253E;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:  #CEBAA7;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
""));
        mail = new QLineEdit(login);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(150, 200, 281, 26));
        mail->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"          /* Coins arrondis */\n"
"  ;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        lineEditPassword = new QLineEdit(login);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(150, 260, 281, 26));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"   \n"
"  \n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        forgotPasswordButton = new QPushButton(login);
        forgotPasswordButton->setObjectName("forgotPasswordButton");
        forgotPasswordButton->setGeometry(QRect(190, 300, 161, 29));
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(255, 255, 255);      /* Texte blanc */\n"
"    background: none;               /* Pas de fond */\n"
"    border: none;                   /* Pas de bordure */\n"
"    text-decoration: underline;     /* Texte soulign\303\251 */\n"
"    font-size: 16px;                /* Taille de la police */\n"
"    padding: 0;                     /* Supprime les marges autour du texte */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: rgb(200, 200, 200);      /* Texte l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    text-decoration: none;          /* Supprime le soulignement au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: rgb(150, 150, 150);      /* Texte encore plus fonc\303\251 lorsque l'on clique */\n"
"}\n"
""));
        label_17 = new QLabel(login);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(-30, 10, 1221, 591));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../1x/aaaaa.png")));
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 170, 63, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 230, 131, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 80, 351, 211));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../1x/hc.png")));
        label_17->raise();
        loginn->raise();
        mail->raise();
        lineEditPassword->raise();
        forgotPasswordButton->raise();
        label->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        loginn->setText(QCoreApplication::translate("login", "Login", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("login", "Mot de passe oublier", nullptr));
        label_17->setText(QString());
        label->setText(QCoreApplication::translate("login", "Adresse : ", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Mot de Passe :", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
