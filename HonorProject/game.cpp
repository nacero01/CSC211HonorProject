#include "game.h"
#include "login.h"
#include "ui_game.h"

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    Login connection;
    if(!connection.dbOpen())
    {
        ui->label_Status_2->setText("Lost Connecttion to DB !");
    }
    else
    {
        ui->label_Status_2->setText("Still Connected to DB !");
    }
}

Game::~Game()
{
    delete ui;
}

void Game::on_multipleChoice_Button_clicked()
{
    this->hide();
    MultipleChoice M;
    M.setModal(true);
    M.exec();
}

