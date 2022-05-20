/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QPushButton *login_pushButton;
    QLabel *label_Status;
    QLabel *label_3;
    QPushButton *register_Button;
    QPushButton *Continue_WOAccount_Button;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(481, 354);
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 0, 281, 211));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 61, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 61, 16));
        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(10, 60, 113, 22));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(10, 130, 113, 22));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        login_pushButton = new QPushButton(groupBox);
        login_pushButton->setObjectName(QString::fromUtf8("login_pushButton"));
        login_pushButton->setGeometry(QRect(100, 170, 75, 24));
        label_Status = new QLabel(Login);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));
        label_Status->setGeometry(QRect(10, 320, 231, 16));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 300, 131, 20));
        register_Button = new QPushButton(Login);
        register_Button->setObjectName(QString::fromUtf8("register_Button"));
        register_Button->setGeometry(QRect(380, 320, 75, 24));
        Continue_WOAccount_Button = new QPushButton(Login);
        Continue_WOAccount_Button->setObjectName(QString::fromUtf8("Continue_WOAccount_Button"));
        Continue_WOAccount_Button->setGeometry(QRect(130, 210, 181, 24));
        Continue_WOAccount_Button->setAutoDefault(false);
        Continue_WOAccount_Button->setFlat(true);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        lineEdit_Password->setText(QString());
        login_pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_Status->setText(QCoreApplication::translate("Login", "[+]Status", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Don't have an account?", nullptr));
        register_Button->setText(QCoreApplication::translate("Login", "Register", nullptr));
        Continue_WOAccount_Button->setText(QCoreApplication::translate("Login", "Contine without an account >", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
