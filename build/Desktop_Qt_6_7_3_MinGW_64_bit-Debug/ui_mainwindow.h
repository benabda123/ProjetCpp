/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QLineEdit *prenom;
    QLabel *label_13;
    QLabel *label_11;
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *salaire;
    QLabel *label_10;
    QLineEdit *poste;
    QLabel *label_7;
    QPushButton *ajouter;
    QLineEdit *adrs;
    QLabel *label_6;
    QLabel *label_12;
    QLineEdit *mail;
    QLineEdit *nume;
    QLabel *label_2;
    QLabel *label_14;
    QDateEdit *date;
    QLabel *label_34;
    QTableView *tableView;
    QLineEdit *lineEdit_IDS;
    QPushButton *SupprimerEmp;
    QLineEdit *rech;
    QPushButton *searchEmpButton;
    QPushButton *trie1;
    QPushButton *refreche;
    QLabel *label_17;
    QLabel *label;
    QLabel *label_4;
    QPushButton *trie22;
    QPushButton *printEmpBox;
    QPushButton *stat;
    QWidget *tab_3;
    QWidget *tab_4;
    QLabel *label_20;
    QLabel *label_35;
    QWidget *tab_5;
    QLineEdit *id1;
    QLineEdit *nom1;
    QLineEdit *prenom1;
    QLineEdit *adrs1;
    QLineEdit *mail1;
    QLineEdit *poste1;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QDateEdit *date1;
    QLineEdit *salaire1;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *nume1;
    QPushButton *modifier;
    QLabel *label_33;
    QLabel *label_21;
    QLabel *label_3;
    QWidget *tab_2;
    QLabel *label_15;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1228, 668);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(-10, 0, 1231, 641));
        tabWidget->setStyleSheet(QString::fromUtf8("#centralWidget {\n"
"    background-color: #e0f7fa; /* Couleur de fond */\n"
"    border: 2px solid #00838f; /* Bordure */\n"
"    border-radius: 15px;       /* Coins arrondis */\n"
"    padding: 20px;             /* Espace interne */\n"
"}\n"
"\n"
"/* Exemple pour styliser les boutons \303\240 l'int\303\251rieur du centralWidget */\n"
"#centralWidget QPushButton {\n"
"    background-color: #00838f; /* Couleur de fond des boutons */\n"
"    color: #ffffff;            /* Couleur du texte des boutons */\n"
"    border: none;              /* Supprime la bordure du bouton */\n"
"    padding: 10px;             /* Espace interne des boutons */\n"
"    border-radius: 5px;        /* Coins arrondis pour les boutons */\n"
"}\n"
"\n"
"#centralWidget QPushButton:hover {\n"
"    background-color: #006064; /* Couleur au survol des boutons */\n"
"}\n"
"\n"
"/* Exemple pour styliser les \303\251tiquettes (labels) \303\240 l'int\303\251rieur du centralWidget */\n"
"#centralWidget QLabel {\n"
"    color: #004d40;            /* "
                        "Couleur du texte des labels */\n"
"    font-weight: bold;         /* Met le texte en gras */\n"
"    font-size: 14px;           /* Taille de la police */\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 180, 63, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 30, 251, 41));
        label_5->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 900 italic 13pt \"Segoe UI Black\";\n"
""));
        label_9 = new QLabel(tab);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 330, 121, 20));
        prenom = new QLineEdit(tab);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(130, 200, 181, 31));
        prenom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(140, 480, 63, 20));
        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(140, 430, 63, 20));
        id = new QLineEdit(tab);
        id->setObjectName("id");
        id->setGeometry(QRect(130, 100, 181, 31));
        id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        nom = new QLineEdit(tab);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(130, 150, 181, 31));
        nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        salaire = new QLineEdit(tab);
        salaire->setObjectName("salaire");
        salaire->setGeometry(QRect(130, 450, 181, 31));
        salaire->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(140, 380, 63, 20));
        poste = new QLineEdit(tab);
        poste->setObjectName("poste");
        poste->setGeometry(QRect(130, 400, 181, 31));
        poste->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
"\n"
""));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 130, 63, 20));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(170, 540, 101, 29));
        ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        adrs = new QLineEdit(tab);
        adrs->setObjectName("adrs");
        adrs->setGeometry(QRect(130, 250, 181, 31));
        adrs->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
"\n"
""));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 80, 131, 20));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(140, 230, 63, 20));
        mail = new QLineEdit(tab);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(130, 300, 181, 31));
        mail->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
"\n"
""));
        nume = new QLineEdit(tab);
        nume->setObjectName("nume");
        nume->setGeometry(QRect(130, 500, 181, 31));
        nume->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
"\n"
""));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(900, 0, 351, 211));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../1x/hc.png")));
        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(140, 280, 63, 20));
        date = new QDateEdit(tab);
        date->setObjectName("date");
        date->setGeometry(QRect(130, 350, 181, 31));
        date->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color:#262D60;\n"
"border-radius: 10px\n"
"}\n"
"QDateEdit {\n"
"    color: white;\n"
"}\n"
"QDateEdit {\n"
"    font-family: Arial;\n"
"    font-size: 12px;\n"
"}\n"
"QDateEdit {\n"
"    border: 2px solid #262D60;\n"
"}"));
        label_34 = new QLabel(tab);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(1020, 430, 121, 141));
        label_34->setPixmap(QPixmap(QString::fromUtf8("../1x/hcc.png")));
        tableView = new QTableView(tab);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(400, 240, 811, 311));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"/* Style global du QTableView */\n"
"QTableView {\n"
"    border: 2px solid #262D60;  /* Bordure autour du tableau */\n"
"    border-radius: 50px;         /* Coins plus arrondis */\n"
"    background-color: #cebaa7;   /* Couleur de fond */\n"
"    gridline-color: #d3d3d3;     /* Couleur des lignes de la grille */\n"
"    selection-background-color: #A8D5E2; /* Couleur de fond de la s\303\251lection */\n"
"    alternate-background-color: #e9f5f5; /* Couleur de fond altern\303\251e */\n"
"}\n"
"\n"
"/* Style pour les \303\251l\303\251ments dans QTableView */\n"
"\n"
"/* Style pour les en-t\303\252tes */\n"
"QHeaderView::section {\n"
"    background-color: #262D60; /* Couleur de fond des en-t\303\252tes */\n"
"    color: white;              /* Couleur du texte */\n"
"    padding: 5px;\n"
"    border: 1px solid #d3d3d3; /* Bordure autour des en-t\303\252tes */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Style pour la s\303\251lection (fond gris) */\n"
"QTableView::item:select"
                        "ed {\n"
"    background-color: #D3D3D3;  /* Couleur de fond pour l'\303\251l\303\251ment s\303\251lectionn\303\251 en gris */\n"
"    color: black;               /* Couleur du texte dans la s\303\251lection */\n"
"}\n"
"\n"
"/* Appliquer un style \303\240 la premi\303\250re colonne */\n"
"QTableView::item:column(0) {\n"
"    background-color: red; /* Fond rouge pour la premi\303\250re colonne */\n"
"}\n"
""));
        lineEdit_IDS = new QLineEdit(tab);
        lineEdit_IDS->setObjectName("lineEdit_IDS");
        lineEdit_IDS->setGeometry(QRect(410, 150, 191, 31));
        lineEdit_IDS->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QLineEdit {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        SupprimerEmp = new QPushButton(tab);
        SupprimerEmp->setObjectName("SupprimerEmp");
        SupprimerEmp->setGeometry(QRect(610, 150, 61, 31));
        SupprimerEmp->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../recherche-01.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SupprimerEmp->setIcon(icon);
        rech = new QLineEdit(tab);
        rech->setObjectName("rech");
        rech->setGeometry(QRect(680, 150, 191, 31));
        rech->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QLineEdit {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        searchEmpButton = new QPushButton(tab);
        searchEmpButton->setObjectName("searchEmpButton");
        searchEmpButton->setGeometry(QRect(880, 150, 41, 31));
        searchEmpButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../1x/Plan de travail 1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        searchEmpButton->setIcon(icon1);
        trie1 = new QPushButton(tab);
        trie1->setObjectName("trie1");
        trie1->setGeometry(QRect(420, 200, 191, 31));
        trie1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../1x/1x/trier-01.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        trie1->setIcon(icon2);
        refreche = new QPushButton(tab);
        refreche->setObjectName("refreche");
        refreche->setGeometry(QRect(1130, 550, 61, 29));
        refreche->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../1x/1x/fgfg.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        refreche->setIcon(icon3);
        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 0, 1221, 591));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);"));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../1x/aaaaa.png")));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 561, 601));
        label->setPixmap(QPixmap(QString::fromUtf8("../aaa.png")));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, -10, 211, 131));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../1x/1x/photoProfile-01.png")));
        trie22 = new QPushButton(tab);
        trie22->setObjectName("trie22");
        trie22->setGeometry(QRect(620, 200, 201, 31));
        trie22->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
""));
        trie22->setIcon(icon2);
        printEmpBox = new QPushButton(tab);
        printEmpBox->setObjectName("printEmpBox");
        printEmpBox->setGeometry(QRect(1030, 190, 151, 41));
        printEmpBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../1x/1x/Design_elements_Flat_free_download_buttons_Icons_symbols_03_by_MissChatz.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        printEmpBox->setIcon(icon4);
        stat = new QPushButton(tab);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(860, 190, 161, 41));
        stat->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 127);\n"
"QPushButton {\n"
"    background-color: #CEBAA7; /* Couleur de fond */\n"
"    color: black;               /* Couleur du texte */\n"
"    font-size: 16px;            /* Taille de la police */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #B49B84;  /* Couleur de fond au survol (plus fonc\303\251) */\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #262D60;\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../1x/1x/Mesa de trabajo 1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        stat->setIcon(icon5);
        tabWidget->addTab(tab, QString());
        label_17->raise();
        tableView->raise();
        label->raise();
        label_34->raise();
        label_2->raise();
        id->raise();
        label_6->raise();
        nom->raise();
        label_7->raise();
        label_8->raise();
        prenom->raise();
        label_9->raise();
        poste->raise();
        label_10->raise();
        salaire->raise();
        label_11->raise();
        adrs->raise();
        label_12->raise();
        nume->raise();
        label_13->raise();
        ajouter->raise();
        label_5->raise();
        mail->raise();
        label_14->raise();
        date->raise();
        lineEdit_IDS->raise();
        SupprimerEmp->raise();
        rech->raise();
        searchEmpButton->raise();
        trie1->raise();
        refreche->raise();
        label_4->raise();
        trie22->raise();
        printEmpBox->raise();
        stat->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_20 = new QLabel(tab_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(-50, 170, 951, 361));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../1x/hcc.png")));
        label_35 = new QLabel(tab_4);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(330, 420, 951, 361));
        label_35->setPixmap(QPixmap(QString::fromUtf8("../1x/hcc.png")));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        id1 = new QLineEdit(tab_5);
        id1->setObjectName("id1");
        id1->setGeometry(QRect(340, 100, 181, 31));
        id1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        nom1 = new QLineEdit(tab_5);
        nom1->setObjectName("nom1");
        nom1->setGeometry(QRect(340, 150, 181, 31));
        nom1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        prenom1 = new QLineEdit(tab_5);
        prenom1->setObjectName("prenom1");
        prenom1->setGeometry(QRect(340, 200, 181, 31));
        prenom1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        adrs1 = new QLineEdit(tab_5);
        adrs1->setObjectName("adrs1");
        adrs1->setGeometry(QRect(340, 250, 181, 31));
        adrs1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        mail1 = new QLineEdit(tab_5);
        mail1->setObjectName("mail1");
        mail1->setGeometry(QRect(340, 300, 181, 31));
        mail1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        poste1 = new QLineEdit(tab_5);
        poste1->setObjectName("poste1");
        poste1->setGeometry(QRect(340, 400, 181, 31));
        poste1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        label_23 = new QLabel(tab_5);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(340, 30, 191, 41));
        label_23->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: italic 9pt \"Sitka\";\n"
"font: 900 italic 8pt \"Segoe UI Black\";\n"
"font: 700 11pt \"Segoe UI\";\n"
"\n"
""));
        label_24 = new QLabel(tab_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(350, 80, 131, 20));
        label_25 = new QLabel(tab_5);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(350, 130, 131, 20));
        label_26 = new QLabel(tab_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(350, 180, 131, 20));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(350, 230, 131, 20));
        label_28 = new QLabel(tab_5);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(350, 280, 131, 20));
        label_29 = new QLabel(tab_5);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(350, 330, 131, 20));
        label_30 = new QLabel(tab_5);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(350, 380, 131, 20));
        date1 = new QDateEdit(tab_5);
        date1->setObjectName("date1");
        date1->setGeometry(QRect(340, 350, 181, 31));
        date1->setStyleSheet(QString::fromUtf8("QDateEdit {\n"
"    background-color:#262D60;\n"
"border-radius: 10px\n"
"}\n"
"QDateEdit {\n"
"    color: white;\n"
"}\n"
"QDateEdit {\n"
"    font-family: Arial;\n"
"    font-size: 12px;\n"
"}\n"
"QDateEdit {\n"
"    border: 2px solid #262D60;\n"
"}"));
        salaire1 = new QLineEdit(tab_5);
        salaire1->setObjectName("salaire1");
        salaire1->setGeometry(QRect(340, 450, 181, 31));
        salaire1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        label_31 = new QLabel(tab_5);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(350, 430, 131, 20));
        label_32 = new QLabel(tab_5);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(350, 480, 131, 20));
        nume1 = new QLineEdit(tab_5);
        nume1->setObjectName("nume1");
        nume1->setGeometry(QRect(340, 500, 181, 31));
        nume1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #262D60; /* Couleur de fond */\n"
"    color: white;               /* Couleur du texte */\n"
"    border-radius: 10px;        /* Coins arrondis */\n"
"    border: 2px solid #B49B84;  /* Bordure */\n"
"    padding: 5px;               /* Espacement int\303\251rieur */\n"
"}\n"
""));
        modifier = new QPushButton(tab_5);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(380, 530, 101, 29));
        modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        label_33 = new QLabel(tab_5);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(300, 80, 861, 441));
        label_33->setPixmap(QPixmap(QString::fromUtf8("../1x/hcc.png")));
        label_21 = new QLabel(tab_5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 0, 1221, 591));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../1x/aaaaa.png")));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 10, 561, 601));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../aaa.png")));
        tabWidget->addTab(tab_5, QString());
        label_21->raise();
        label_3->raise();
        label_33->raise();
        id1->raise();
        nom1->raise();
        prenom1->raise();
        adrs1->raise();
        mail1->raise();
        poste1->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        label_30->raise();
        date1->raise();
        salaire1->raise();
        label_31->raise();
        label_32->raise();
        nume1->raise();
        modifier->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 0, 1221, 591));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../1x/aaaaa.png")));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(920, -40, 861, 321));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../1x/hc.png")));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1228, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Prenom", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Ajouter un Employe", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Date Embauche", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Numero", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Salaire", nullptr));
        id->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Poste", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Identifiant", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        mail->setText(QCoreApplication::translate("MainWindow", "@gmail.tn", nullptr));
        label_2->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "Mail", nullptr));
        label_34->setText(QString());
        lineEdit_IDS->setText(QCoreApplication::translate("MainWindow", "id employe a supprimer ", nullptr));
        SupprimerEmp->setText(QCoreApplication::translate("MainWindow", "Supp", nullptr));
        rech->setText(QCoreApplication::translate("MainWindow", "ID de Employe a chercher", nullptr));
        searchEmpButton->setText(QString());
        trie1->setText(QCoreApplication::translate("MainWindow", "Trier Selon le Salaire \342\206\223 ", nullptr));
        refreche->setText(QCoreApplication::translate("MainWindow", "Ref.", nullptr));
        label_17->setText(QString());
        label->setText(QString());
        label_4->setText(QString());
        trie22->setText(QCoreApplication::translate("MainWindow", "Trier Selon le Salaire \342\206\221", nullptr));
        printEmpBox->setText(QCoreApplication::translate("MainWindow", "Exoprter PDF", nullptr));
        stat->setText(QCoreApplication::translate("MainWindow", "Statistique", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "ajouter un employe", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "liste des employe", nullptr));
        label_20->setText(QString());
        label_35->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "supprimer un employe", nullptr));
        id1->setText(QString());
        nom1->setText(QString());
        prenom1->setText(QString());
        adrs1->setText(QString());
        mail1->setText(QString());
        poste1->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "Modifier un Employe", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Nv. Identifiant", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Nv. Nom", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Nv. Prenom", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Nv. Adresse", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Nv. Mail", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Nv. Date Embauche", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Nv. Poste", nullptr));
        salaire1->setText(QString());
        label_31->setText(QCoreApplication::translate("MainWindow", "Nv. Salaire", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Nv. numero", nullptr));
        nume1->setText(QString());
        modifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        label_33->setText(QString());
        label_21->setText(QString());
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Modifier un employe", nullptr));
        label_15->setText(QString());
        label_18->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "recherche d un employe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
