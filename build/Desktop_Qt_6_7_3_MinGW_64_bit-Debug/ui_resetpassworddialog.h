/********************************************************************************
** Form generated from reading UI file 'resetpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPASSWORDDIALOG_H
#define UI_RESETPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ResetPasswordDialog
{
public:
    QLineEdit *emailField;
    QLineEdit *parentNameField;
    QPushButton *button_reset;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_17;

    void setupUi(QDialog *ResetPasswordDialog)
    {
        if (ResetPasswordDialog->objectName().isEmpty())
            ResetPasswordDialog->setObjectName("ResetPasswordDialog");
        ResetPasswordDialog->resize(508, 362);
        emailField = new QLineEdit(ResetPasswordDialog);
        emailField->setObjectName("emailField");
        emailField->setGeometry(QRect(170, 90, 181, 26));
        emailField->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}"));
        parentNameField = new QLineEdit(ResetPasswordDialog);
        parentNameField->setObjectName("parentNameField");
        parentNameField->setGeometry(QRect(170, 150, 171, 26));
        parentNameField->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        button_reset = new QPushButton(ResetPasswordDialog);
        button_reset->setObjectName("button_reset");
        button_reset->setGeometry(QRect(210, 200, 93, 29));
        button_reset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #262D60; /* Couleur de fond normale */\n"
"    color: white;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
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
        label = new QLabel(ResetPasswordDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 70, 111, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(ResetPasswordDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 130, 121, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_17 = new QLabel(ResetPasswordDialog);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(-10, -10, 1221, 591));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../1x/aaaaa.png")));
        label_17->raise();
        emailField->raise();
        parentNameField->raise();
        button_reset->raise();
        label->raise();
        label_2->raise();

        retranslateUi(ResetPasswordDialog);

        QMetaObject::connectSlotsByName(ResetPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *ResetPasswordDialog)
    {
        ResetPasswordDialog->setWindowTitle(QCoreApplication::translate("ResetPasswordDialog", "Dialog", nullptr));
        button_reset->setText(QCoreApplication::translate("ResetPasswordDialog", "Restore", nullptr));
        label->setText(QCoreApplication::translate("ResetPasswordDialog", "Adresse : ", nullptr));
        label_2->setText(QCoreApplication::translate("ResetPasswordDialog", "Nom de parent", nullptr));
        label_17->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResetPasswordDialog: public Ui_ResetPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORDDIALOG_H
