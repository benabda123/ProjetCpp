#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLCDNumber>
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextDocument>
#include <QTextStream>
#include <QComboBox>
#include <QTabWidget>
#include <QObject>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QDateEdit>
#include <QComboBox>
#include <QDialog>
#include<QFileDialog>
#include <QtCharts/QPieSlice>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QPixmap>
#include <QImage>
#include "employe.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ajouter_clicked();


     void on_modifier_clicked();

     void on_tableView_activated(const QModelIndex &index);

     void onRowSelected(const QItemSelection &selected, const QItemSelection &deselected);

     void on_SupprimerEmp_clicked();


     void on_searchEmpButton_clicked();
     void on_trie1_clicked();
     void on_trie22_clicked();

     void on_refreche_clicked();
     void on_printEmpBox_clicked();

     void on_stat_clicked();






private:
     Ui::MainWindow *ui;
     Employe emp;

};
#endif // MAINWINDOW_H
