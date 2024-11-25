#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
      bool isAuthenticated() const;
private slots:
    void on_loginn_clicked();
    void on_forgotPasswordButton_clicked();


private:
    Ui::login *ui;
    bool authenticated;

};

#endif // LOGIN_H
