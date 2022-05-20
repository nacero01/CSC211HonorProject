/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QGroupBox *groupBox;
    QLabel *label_Status_2;
    QPushButton *multipleChoice_Button;
    QPushButton *trueOrFalse_Button;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QDialog *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QString::fromUtf8("Game"));
        Game->resize(332, 170);
        groupBox = new QGroupBox(Game);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(-10, -10, 341, 181));
        label_Status_2 = new QLabel(groupBox);
        label_Status_2->setObjectName(QString::fromUtf8("label_Status_2"));
        label_Status_2->setGeometry(QRect(70, 150, 201, 16));
        multipleChoice_Button = new QPushButton(groupBox);
        multipleChoice_Button->setObjectName(QString::fromUtf8("multipleChoice_Button"));
        multipleChoice_Button->setGeometry(QRect(70, 20, 181, 24));
        trueOrFalse_Button = new QPushButton(groupBox);
        trueOrFalse_Button->setObjectName(QString::fromUtf8("trueOrFalse_Button"));
        trueOrFalse_Button->setGeometry(QRect(70, 50, 181, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 80, 181, 24));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 110, 181, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-20, 0, 451, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/Saved Pictures/Climate.png")));
        label->setScaledContents(true);
        label->raise();
        label_Status_2->raise();
        multipleChoice_Button->raise();
        trueOrFalse_Button->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QDialog *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Game", "GroupBox", nullptr));
        label_Status_2->setText(QCoreApplication::translate("Game", "<html><head/><body><p><span style=\" font-weight:700; color:#f80004;\">[+] Status</span></p></body></html>", nullptr));
        multipleChoice_Button->setText(QCoreApplication::translate("Game", "Mutiple Choice", nullptr));
        trueOrFalse_Button->setText(QCoreApplication::translate("Game", "True or False", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Game", "Vocabulary", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Game", "Survey", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
