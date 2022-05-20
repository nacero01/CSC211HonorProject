#ifndef MULTIPLECHOICE_H
#define MULTIPLECHOICE_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class MultipleChoice;
}

class MultipleChoice : public QDialog
{
    Q_OBJECT

public:
    explicit MultipleChoice(QWidget *parent = nullptr);
    void Question();
    void potentilalAnswer();
    void openAnswerFile();
    int correctAnswer = 0;

    ~MultipleChoice();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MultipleChoice *ui;
};

#endif // MULTIPLECHOICE_H
