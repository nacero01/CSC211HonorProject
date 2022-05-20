/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_lastName;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *confirmRegister;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit_firstName;
    QLabel *label_Status_3;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(509, 365);
        groupBox = new QGroupBox(RegisterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 40, 301, 310));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 126, 21, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 176, 55, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 226, 50, 16));
        lineEdit_lastName = new QLineEdit(groupBox);
        lineEdit_lastName->setObjectName(QString::fromUtf8("lineEdit_lastName"));
        lineEdit_lastName->setGeometry(QRect(10, 98, 133, 22));
        lineEdit_age = new QLineEdit(groupBox);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(10, 148, 133, 22));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(10, 198, 133, 22));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(10, 248, 133, 22));
        lineEdit_password->setEchoMode(QLineEdit::Normal);
        confirmRegister = new QPushButton(groupBox);
        confirmRegister->setObjectName(QString::fromUtf8("confirmRegister"));
        confirmRegister->setGeometry(QRect(10, 276, 75, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 76, 61, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 26, 61, 16));
        lineEdit_firstName = new QLineEdit(groupBox);
        lineEdit_firstName->setObjectName(QString::fromUtf8("lineEdit_firstName"));
        lineEdit_firstName->setGeometry(QRect(10, 48, 133, 22));
        label_Status_3 = new QLabel(groupBox);
        label_Status_3->setObjectName(QString::fromUtf8("label_Status_3"));
        label_Status_3->setGeometry(QRect(100, 280, 171, 20));

        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterDialog", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterDialog", "Age", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterDialog", "UserName", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterDialog", "Password", nullptr));
        confirmRegister->setText(QCoreApplication::translate("RegisterDialog", "Register", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterDialog", "First Name", nullptr));
        label_Status_3->setText(QCoreApplication::translate("RegisterDialog", "[+] Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
