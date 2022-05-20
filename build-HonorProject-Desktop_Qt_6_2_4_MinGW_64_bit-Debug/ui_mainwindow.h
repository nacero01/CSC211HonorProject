/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *Image;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *credit_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(806, 588);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 510, 75, 24));
        pushButton->setMinimumSize(QSize(71, 0));
        Image = new QLabel(centralwidget);
        Image->setObjectName(QString::fromUtf8("Image"));
        Image->setGeometry(QRect(0, 0, 801, 551));
        Image->setPixmap(QPixmap(QString::fromUtf8("../../Pictures/download.png")));
        Image->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 40, 481, 241));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setTextFormat(Qt::RichText);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 410, 231, 24));
        pushButton_2->setFlat(true);
        credit_Button = new QPushButton(centralwidget);
        credit_Button->setObjectName(QString::fromUtf8("credit_Button"));
        credit_Button->setGeometry(QRect(200, 510, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        Image->raise();
        pushButton->raise();
        label_2->raise();
        pushButton_2->raise();
        credit_Button->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 806, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        Image->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#a50aff;\">Hello and Welcome</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#a50aff;\">to ANI Climate Change Game.</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#a50aff;\">I hope you enjoy your stay and learn plenty!</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Click here to continue", nullptr));
        credit_Button->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
