#ifndef RESETPASSWORDDIALOG_H
#define RESETPASSWORDDIALOG_H

#include <QDialog>

namespace Ui {
class ResetPasswordDialog;
}

class ResetPasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ResetPasswordDialog(QWidget *parent = nullptr);
    ~ResetPasswordDialog();

private slots:
    void on_button_reset_clicked(); // Slot pour gérer le clic du bouton

private:
    Ui::ResetPasswordDialog *ui;  // Interface utilisateur générée
    QString retrievePasswordIfAnswerIsCorrect(const QString &email, const QString &parentName);
};

#endif // RESETPASSWORDDIALOG_H
