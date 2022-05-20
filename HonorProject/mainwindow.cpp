#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   aboutdialog = new aboutDialog(this);
   aboutdialog->show();

}


void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    Login login;
    login.setModal(true);
    login.exec();
}

