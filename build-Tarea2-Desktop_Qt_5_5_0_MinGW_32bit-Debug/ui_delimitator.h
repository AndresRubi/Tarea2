/********************************************************************************
** Form generated from reading UI file 'delimitator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIMITATOR_H
#define UI_DELIMITATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delimitator
{
public:
    QLineEdit *lineEditName;
    QLineEdit *lineEditLastName;
    QLineEdit *lineEditAge;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonLoad;
    QListWidget *listWidget;

    void setupUi(QWidget *Delimitator)
    {
        if (Delimitator->objectName().isEmpty())
            Delimitator->setObjectName(QStringLiteral("Delimitator"));
        Delimitator->resize(506, 352);
        lineEditName = new QLineEdit(Delimitator);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(90, 30, 113, 20));
        lineEditLastName = new QLineEdit(Delimitator);
        lineEditLastName->setObjectName(QStringLiteral("lineEditLastName"));
        lineEditLastName->setGeometry(QRect(90, 60, 113, 20));
        lineEditAge = new QLineEdit(Delimitator);
        lineEditAge->setObjectName(QStringLiteral("lineEditAge"));
        lineEditAge->setGeometry(QRect(90, 90, 113, 20));
        label = new QLabel(Delimitator);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 47, 13));
        label_2 = new QLabel(Delimitator);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 16));
        label_3 = new QLabel(Delimitator);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 47, 13));
        pushButtonSave = new QPushButton(Delimitator);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(270, 30, 141, 81));
        pushButtonLoad = new QPushButton(Delimitator);
        pushButtonLoad->setObjectName(QStringLiteral("pushButtonLoad"));
        pushButtonLoad->setGeometry(QRect(130, 130, 231, 23));
        listWidget = new QListWidget(Delimitator);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 160, 481, 181));

        retranslateUi(Delimitator);

        QMetaObject::connectSlotsByName(Delimitator);
    } // setupUi

    void retranslateUi(QWidget *Delimitator)
    {
        Delimitator->setWindowTitle(QApplication::translate("Delimitator", "Form", 0));
        lineEditName->setText(QString());
        lineEditLastName->setText(QString());
        label->setText(QApplication::translate("Delimitator", "Name", 0));
        label_2->setText(QApplication::translate("Delimitator", "Last Name", 0));
        label_3->setText(QApplication::translate("Delimitator", "Age", 0));
        pushButtonSave->setText(QApplication::translate("Delimitator", "Save", 0));
        pushButtonLoad->setText(QApplication::translate("Delimitator", "Load File", 0));
    } // retranslateUi

};

namespace Ui {
    class Delimitator: public Ui_Delimitator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIMITATOR_H
