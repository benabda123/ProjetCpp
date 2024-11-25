#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QTableView>
#include <QSqlQuery>
#include <QDate>
#include <QDebug>
#include <QSqlRecord>
#include <QListView>
#include <QMessageBox>
#include <QDate>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/qprinter.h>
#include <QPrinter>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QSqlError>

//using namespace QtCharts;


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajouter_clicked()
{
    int id_e=ui->id->text().toInt();
    QString nom_e = ui->nom->text();
    QString prenom_e = ui->prenom->text();
    QString adrs_e = ui->adrs->text();
    QString email_e = ui->mail->text();
    int nume_e = ui->nume->text().toInt();
    QString poste_e = ui->poste->text();
    QString DateEmb_e = ui->date->text();
    int salaire_e=ui->salaire->text().toInt();


    //Controle de saisie
    if(id_e < 0 || id_e > 9999) {

           QMessageBox::warning(this, "Erreur", "id doit être max 4 chiffres .");        return ;

    }

    if(nom_e.isEmpty() || !nom_e.at(0).isUpper()) {
          QMessageBox::warning(this, "Erreur", "NOM doit commencer par une lettre majuscule .");        return ;

     }

    if(prenom_e.isEmpty() || !prenom_e.at(0).isUpper()) {
            QMessageBox::warning(this, "Erreur", "PRENOM doit commencer par une lettre majuscule .");        return ;
        }

    if(adrs_e.isEmpty() || adrs_e.length() < 10) {
          QMessageBox::warning(this, "Erreur", "Adresse doit etre rempli en format adresse .");        return ;

       }

    if(nume_e < 10000000 || nume_e > 99999999) {
             QMessageBox::warning(this, "Erreur", "Numero doit être 8 chiffres .");        return ;
          }
    if(salaire_e < 0) {
             QMessageBox::warning(this, "Erreur", "Verifier le salaire .");        return ;
          }




    Employe emp(id_e, nom_e, prenom_e, nume_e, email_e, adrs_e, poste_e, DateEmb_e, salaire_e);
    bool test=emp.ajouter();
    if(test)
    {
        //ui->tableView_2->setModel(emp.afficher());
        ui->tableView->setModel(emp.afficher());


        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("Ajout effectuer\n"
                                          "Cliker Cancel to exit"),QMessageBox::Cancel);
        ui->id->clear();
        ui->nom->clear();
        ui->prenom->clear();
        ui->adrs->clear();
        ui->nume->clear();
        ui->mail->clear();
        ui->poste->clear();
        ui->salaire->clear();
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                              QObject::tr("Ajout non effectuer\n"
                                         "Clicker Cancel to exit"), QMessageBox::Cancel);
}


void MainWindow::on_SupprimerEmp_clicked()
{
    int id_e = ui->lineEdit_IDS->text().toInt();  // Convertir la chaîne saisie en un entier car l'attribut id est de type int
    bool test = emp.supprimer(id_e);

    if (test)
    {
        //ui->tableView_2->setModel(emp.afficher());
        ui->tableView->setModel(emp.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuée.\n"
                                            "Click Cancel to exit."),
                                 QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectuée.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
    }
    ui->lineEdit_IDS->clear();

}
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    //ui->tableView_2->setModel(emp.afficher());
    ui->tableView->setModel(emp.afficher());

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);//
    connect(ui->tableView->selectionModel(), &QItemSelectionModel::selectionChanged,
                this, &MainWindow::onRowSelected);//
}


void MainWindow::on_modifier_clicked()
{
    int id_e(ui->id1->text().toInt());
    QString nom_e(ui->nom1->text());
    QString prenom_e(ui->prenom1->text());
    int nume_e = ui->nume1->text().toInt();
    QString email_e(ui->mail->text());
    QString adrs_e(ui->adrs1->text());
    QString DateEmb_e(ui->date1->text());
    int salaire_e(ui->salaire1->text().toInt());
    QString poste_e(ui->poste1->text());
    Employe emp(id_e,nom_e,prenom_e , nume_e, adrs_e,email_e, poste_e, DateEmb_e,salaire_e );
    bool test = emp.modifier(id_e, nom_e, prenom_e, adrs_e, email_e, nume_e, poste_e, DateEmb_e, salaire_e);

    if (test) {


        ui->tableView->setModel(emp.afficher());
        //ui->tableView_->setModel(emp.afficher());

        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Modification effectuée avec succès.\n"
                                             "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);

    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur de la base de données"),
                              QObject::tr("La modification n'a pas été effectuée.\n"
                                          "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
}

void MainWindow::on_searchEmpButton_clicked()
{
    Employe emp;
    int searchid = ui->rech->text().toInt();
        QSqlQueryModel* model = new QSqlQueryModel();

        qDebug() << "CHERECHER";
        if (emp.rechercher(searchid,emp)) {
            // Record found - update QLineEdit widgets to display the data
            ui->id1->setText(QString::number(emp.getid_e()));
            ui->nom1->setText(emp.getnom_e());
            ui->prenom1->setText(emp.getprenom_e());
            ui->nume1->setText(QString::number(emp.getnume_e()));
            ui->date1->setDate(QDate::fromString(emp.getDateEmb_e()));
            ui->mail1->setText((emp.getemail_e()));
            ui->adrs1->setText((emp.getadrs_e()));
          ui->poste1->setText((emp.getposte_e()));
          ui->salaire1->setText(QString::number(emp.getsalaire_e()));
            // Mettez à jour le modèle pour afficher le résultat dans le QTableView
          // Mettez à jour le modèle pour afficher le résultat dans le QTableView
          model->setQuery("SELECT * FROM Employe WHERE id_e = " + QString::number(searchid));
            ui->tableView->setModel(model);
            ui->rech->clear();

        } else {
            // Handle the case when the record is not found
            QMessageBox::warning(this, "Search Result", "Record not found for ID: " + QString::number(searchid));
        }


}
void MainWindow::on_tableView_activated(const QModelIndex &index)
{   ui->tabWidget->setCurrentIndex(3);
    QString value = ui->tableView->model()->data(index).toString();
    ui->rech->setText(value);
        QSqlQuery qry;

        qry.prepare("select * from EMPLOYE where id_e = :id" );
        qry.bindValue(":id",value);
        if (qry.exec()) {
            while (qry.next()) {
                ui->id1->setText(qry.value(0).toString());
                ui->nom1->setText(qry.value(1).toString());
                ui->prenom1->setText(qry.value(2).toString());
                ui->salaire1->setText(qry.value(7).toString());
                ui->nume1->setText(qry.value(5).toString());
                ui->adrs1->setText(qry.value(3).toString());
                ui->mail1->setText(qry.value(4).toString());
                ui->date1->setDate(qry.value(8).toDate());
                ui->poste1->setText(qry.value(6).toString());


            }

        }

}
void MainWindow::onRowSelected(const QItemSelection &selected, const QItemSelection &deselected)
{

    if (!selected.indexes().isEmpty()) {
            ui->tabWidget->setCurrentIndex(3);
            int row = selected.indexes().first().row();

            QModelIndex index=ui->tableView->model()->index(row,0);
            QString value = ui->tableView->model()->data(index).toString();
             QSqlQuery qry;
            qry.prepare("select * from EMPLOYE where id_e = :id" );
            qry.bindValue(":id",value);
            if (qry.exec()) {
                while (qry.next()) {
            ui->id1->setText(qry.value(0).toString());
            ui->nom1->setText(qry.value(1).toString());
            ui->prenom1->setText(qry.value(2).toString());
            ui->salaire1->setText(qry.value(7).toString());
            ui->nume1->setText(qry.value(5).toString());
            ui->adrs1->setText(qry.value(3).toString());
            ui->mail1->setText(qry.value(4).toString());
            ui->date1->setDate(qry.value(8).toDate());
            ui->poste1->setText(qry.value(6).toString());}}

    }
}

void MainWindow::on_trie1_clicked()
{
    Employe emp ;

        // Supprimez le modèle actuel s'il existe
       if (ui->tableView->model()) {
            delete ui->tableView->model();
        }
           {
            ui->tableView->setModel(emp.AfficherTriesParSalaire());
        }
}
void MainWindow::on_trie22_clicked()
{
    Employe emp ;

        // Supprimez le modèle actuel s'il existe
       if (ui->tableView->model()) {
            delete ui->tableView->model();
        }
           {
            ui->tableView->setModel(emp.AfficherTriesParSalaire1());
        }
}

void MainWindow::on_refreche_clicked() {

    ui->tableView->setModel(nullptr);  // Déconnecter temporairement le modèle actuel
    ui->tableView->setModel(emp.afficher());  // Recharge le modèle de données dans `tableView`
}

void MainWindow::on_printEmpBox_clicked()
{
    // Préparation du contenu HTML pour l'exportation
    QString strStream;
    QTextStream out(&strStream);
    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();
    QString currentDate = QDate::currentDate().toString("yyyy/MM/dd");

    QString logoPath = "C:/Users/ADMIN/Desktop/1x/hc.png";         // Remplacez ce chemin par le chemin réel du logo



    out << "<html>\n"
        "<head>\n"
        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("Liste des Employés")
        << "</head>\n"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<center> <h1>Liste des Employés - " + currentDate + "</h1></center>\n"
        "<br><br><center><table border=1 cellspacing=0 cellpadding=2>\n";


    // Ajouter le logo dans le coin supérieur droit
    out << "<center><div><img src='" << logoPath << "' width='100' height='100'></div></center>\n";


        // En-têtes de table
    out << "<thead><tr bgcolor=#FF2E01><th>Numero</th>";
    for (int column = 0; column < columnCount; column++) {
        if (!ui->tableView->isColumnHidden(column)) {
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
        }
    }
    out << "</tr></thead>\n";

    // Données de la table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr><td>" << row + 1 << "</td>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView->isColumnHidden(column)) {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                out << QString("<td>%1</td>").arg(data.isEmpty() ? "&nbsp;" : data);
            }
        }
        out << "</tr>\n";
    }
    out << "</table></center>\n</body>\n</html>\n";

    // Sélection du fichier pour enregistrer le PDF
    QString fileName = QFileDialog::getSaveFileName(this, "Sauvegarder en PDF", QString(), "*.pdf");
    if (fileName.isEmpty()) {
        return;  // Annuler si aucun fichier n'est sélectionné
    }
    if (QFileInfo(fileName).suffix().isEmpty()) {
        fileName.append(".pdf");
    }

    // Configuration de QPrinter et génération du PDF
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPageSize::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    doc.setHtml(strStream);
    doc.setPageSize(printer.pageRect(QPrinter::Point).size());     // Nécessaire pour ajuster la taille des pages
doc.print(&printer);
}

//QSqlQuery : On exécute une requête SQL pour obtenir le nombre d'employés par département.
//QPieSeries : C'est une série de données pour un graphique en camembert. On ajoute chaque département et son nombre d'employés à cette série.
//QChart et QChartView : Utilisés pour créer et afficher le graphique.
//QMainWindow : On crée une nouvelle fenêtre pour afficher le graphique.



void MainWindow::on_stat_clicked() {
    QPieSeries *series = new QPieSeries();

    QSqlQuery query;
    query.prepare("SELECT "
                  "CASE "
                  "WHEN salaire_e < 1000 THEN 'moins de 1000' "
                  "WHEN salaire_e BETWEEN 1000 AND 2000 THEN '1000-2000' "
                  "WHEN salaire_e > 2000 THEN 'plus de 2000' "
                  "END AS tranche_salaire, "
                  "COUNT(*) AS nombre "
                  "FROM employe "
                  "GROUP BY CASE "
                  "WHEN salaire_e < 1000 THEN 'moins de 1000' "
                  "WHEN salaire_e BETWEEN 1000 AND 2000 THEN '1000-2000' "
                  "WHEN salaire_e > 2000 THEN 'plus de 2000' "
                  "END");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur d'exécution de la requête : " + query.lastError().text());
        return;
    }

    while (query.next()) {
        QString tranche_salaire = query.value(0).toString();
        int count = query.value(1).toInt();
        series->append(tranche_salaire, count);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Nombre d'employés par tranche de salaire");

    // Ajouter une image de fond
    QPixmap background("C:/Users/ADMIN/Desktop/1x/aaaaa.png");
    if (!background.isNull()) {
        chart->setBackgroundBrush(QBrush(background.scaled(chart->size().toSize())));
    } else {
        qDebug() << "Erreur de chargement de l'image de fond";
    }

    // Ajouter un logo en superposition
    QPixmap logo("C:/Users/ADMIN/Desktop/1x/hc.png");
    QGraphicsPixmapItem *logoItem = new QGraphicsPixmapItem(logo);
    logoItem->setPos(chart->plotArea().width() - logo.width() - 10, 10);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->scene()->addItem(logoItem); // Ajouter le logo à la scène du chartView

    QMainWindow *statsWindow = new QMainWindow(this);
    statsWindow->setCentralWidget(chartView);
    statsWindow->resize(600, 400);
    statsWindow->show();
}

