#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include "multiplechoice.h"

namespace Ui {
class Game;
}

class Game : public QDialog
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void on_multipleChoice_Button_clicked();

private:
    Ui::Game *ui;
};

#endif // GAME_H
