#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QDialog>
#include <QMessageBox>
#include "administratorwindow.h"
#include "storemanagerwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_login_button_clicked();

private:
    Ui::LoginWindow *ui;
    AdministratorWindow *adminWindow;  // Pointer to an instance of an AdmininstratorWindow class object.
    StoreManagerWindow *managerWindow; // Pointer to an instance of an StoreManagerWindow class object.
};

#endif // LOGINWINDOW_H
