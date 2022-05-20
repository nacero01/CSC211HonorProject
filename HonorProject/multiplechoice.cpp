#include "multiplechoice.h"
#include "ui_multiplechoice.h"


MultipleChoice::MultipleChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MultipleChoice)
{
    ui->setupUi(this);


        ui->label_Question->setText("<html><head/><body><p align=center><span style=font-size:9pt;>What is the greenhouse effect?</span></p></body></html>");
        ui->label_Potential_Answer_1->setText("1. Certain gases in the atmosphere trap heat and warm the Earth");
        ui->label_Potential_Answer_2->setText("2. Life on Earth 'exhales' gas that warms up the atmosphere");
        ui->label_Potential_Answer_3->setText("3. The tilt of the Earth changes the amount of solar \nenergy the Earth receives");
        ui->label_Potential_Answer_4->setText("4. The Sun is putting out more radiant energy over time");

        ui->label_Question_2->setText("<html><head/><body><p align=center><span style=font-size:9pt;>If the greenhouse effect is natural, then why is today's"
                                      "</span></p><p align=center><span style= font-size:9pt;>climate change a bad thing?</span></p>\n </span></p></body></html>");
        ui->label_Potential_Answer_5->setText("1. Humans have altered a natural process and exaggerated\n changes that might normally occur over millions of years.");
        ui->label_Potential_Answer_6->setText("2. Once released into the atmosphere, greenhouse gases \nremain potent for many years, making it difficult to reverse the process.");
        ui->label_Potential_Answer_7->setText("3. Abrupt changes to the climate system may have unintended \noutcomes that may pose challenges for societies, like more \nextreme weather, spread of diseases, a decline in marine life,\n or an alteration of ocean circulation patterns.");
        ui->label_Potential_Answer_8->setText("4. All of the above");

        ui->label_Question_3->setText("<html><head/><body><p align=center><span style=font-size:9pt;>Which activities are the largest contributors of greenhouse gases?</span></p></body></html>");
        ui->label_Potential_Answer_9->setText("1. Industry");
        ui->label_Potential_Answer_10->setText("2. Transportation");
        ui->label_Potential_Answer_11->setText("3. Landfills");
        ui->label_Potential_Answer_12->setText("4. Agriculture");

        ui->label_Question_4->setText("<html><head/><body><p align=center><span style=font-size:8pt;>How much has CO2 in the atmosphere increased since the Industrial</span></p>"
                                      "<p align=center><span style= font-size:8pt;>Revolution?In the 10,000 years before the Industrial Revolution in 1751,</span></p>"
                                      "<p align=center><span style= font-size:8pt;>carbon dioxide levels rose less than 1 percent.Since then,they've risen by: </span></p></body></html>");
        ui->label_Potential_Answer_13->setText("1. 11 percent");
        ui->label_Potential_Answer_14->setText("2. 49 percent");
        ui->label_Potential_Answer_15->setText("3. 62 percent");
        ui->label_Potential_Answer_16->setText("4. 90 percent");

        ui->label_Question_5->setText("<html><head/><body><p align=center><span style=font-size:9pt;>How has the global average temperature</span></p>"
                                      "<p align=center><span style= font-size:9pt;>changed since the Industrial Revolution?</span></p></body></html>");
        ui->label_Potential_Answer_17->setText("1. Cooler by 0.1 degree C (0.2 degree F");
        ui->label_Potential_Answer_18->setText("2. The temperature has gone up and down, \nbut remains overall the same");
        ui->label_Potential_Answer_19->setText("3. Warmer by 0.1 degree C (0.2 degree F)");
        ui->label_Potential_Answer_20->setText("4. Warmer by more than 1 degree C (2.1 degrees F)");

        ui->label_Question_6->setText("<html><head/><body><p align=center><span style=font-size:9pt;>How does the rate of today's warming compare</span></p>"
                                      "<p align=center><span style= font-size:9pt;>to previous episodes of rapid climate change on Earth?</span></p></body></html>");
        ui->label_Potential_Answer_21->setText("1. Today's climate warming is about as fast as \nthe temperature swings that have happened in Earth's past.");
        ui->label_Potential_Answer_22->setText("2. Past changes in the climate have been faster\n than the changes we're seeing today.");
        ui->label_Potential_Answer_23->setText("3. Today, the Earth's climate is changing much \nfaster than it has changed in the past.");
        ui->label_Potential_Answer_24->setText("4. Today, the Earth's climate is changing much \nslower than it has changed in the past.");



}

void MultipleChoice::Question()
{/*
    QFile file("MultipleChoiceQuestion.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");
    }
    else
    {
    ui->label_Potential_Answer_3->setText("File is open");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->label_Question->setText(text);
}*/

/*
    std::vector<int> here_are_your_line;
    QFile file("MultipleChoiceQuestion.txt");
    // basic error checking
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    // read the contents line by line
    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        QDataStream ds(line);
        int int_in_line = 0;
        ds >> int_in_line;
        here_are_your_line.push_back(int_in_line);
    }*/
   /* QString str;
    QFile file("MultipleChoiceQuestion.txt");
    if(file.open(QIODevice::ReadOnly))
      {
        QTextStream stream(&file);
        stream >> str;
        file.close();
    }*/
  /*  QFile file(filename);
    if(!file.exist())
    {
        qCritical() << "File not found";
        return;
    }
    if(!file.open(QIODevice::ReadOnly))

    {
        qCritical() << file.errorString();
    }

    QTextStream stream(&file);
*/
}

//void MultipleChoice::Question()
//{
    /*
        QString filename="MultipleChoiceQuestion.txt";
        QFile file(filename);
        if(!file.exists()){
            qDebug() << "NO existe el archivo "<<filename;
        }else{
            qDebug() << filename<<" encontrado...";
        }
        QString line;
        ui->label_Question->clear();
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&file);
            while (!stream.atEnd()){
                line = stream.readLine();
                ui->label_Question->setText("HI");
                qDebug() << "linea: "<<line;
            }
        }
        file.close();
    }*/

MultipleChoice::~MultipleChoice()
{
    delete ui;
}


void MultipleChoice::on_pushButton_clicked()
{
    QString UserAnswer1 = ui->lineEdit_Answer->text();
    QString UserAnswer2 = ui->lineEdit_Answer_2->text();
    QString UserAnswer3 = ui->lineEdit_Answer_3->text();
    QString UserAnswer4 = ui->lineEdit_Answer_4->text();
    QString UserAnswer5 = ui->lineEdit_Answer_5->text();
    QString UserAnswer6 = ui->lineEdit_Answer_6->text();
    if (UserAnswer1 == '1')
    {
        ui->label->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#00ff00;>Correct</span></p></body></html>");
    }
    else
    {
        ui->label->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#ff0000;>Incorrect</span></p></body></html>");
    }

    if (UserAnswer2 == '4')
    {
        ui->label_2->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#00ff00;>Correct</span></p></body></html>");
    }
    else
    {
        ui->label_2->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#ff0000;>Incorrect</span></p></body></html>");
    }
    if (UserAnswer3 == '2')
    {
        ui->label_3->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#00ff00;>Correct</span></p></body></html>");
    }
    else
    {
        ui->label_3->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#ff0000;>Incorrect</span></p></body></html>");
    }
    if (UserAnswer4 == '2')
    {
        ui->label_4->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#00ff00;>Correct</span></p></body></html>");
    }
    else
    {
        ui->label_4->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#ff0000;>Incorrect</span></p></body></html>");
    }
    if (UserAnswer5 == '4')
    {
        ui->label_5->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#00ff00;>Correct</span></p></body></html>");
    }
    else
    {
        ui->label_5->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#ff0000;>Incorrect</span></p></body></html>");
    }
    if (UserAnswer6 == '3')
    {
        ui->label_6->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#00ff00;>Correct</span></p></body></html>");
    }
    else
    {
        ui->label_6->setText("<html><head/><body><p align=center><span style= font-size:9pt;color:#ff0000;>Incorrect</span></p></body></html>");
    }
  //  ui->result_Label->setText(tr("result: %1 /6").arg(correctAnswer));
}

