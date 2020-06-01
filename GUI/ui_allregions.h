/********************************************************************************
** Form generated from reading UI file 'allregions.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLREGIONS_H
#define UI_ALLREGIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AllRegions
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *AllRegions)
    {
        if (AllRegions->objectName().isEmpty())
            AllRegions->setObjectName(QString::fromUtf8("AllRegions"));
        AllRegions->resize(681, 692);
        verticalLayout = new QVBoxLayout(AllRegions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AllRegions);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(AllRegions);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(AllRegions);

        QMetaObject::connectSlotsByName(AllRegions);
    } // setupUi

    void retranslateUi(QDialog *AllRegions)
    {
        AllRegions->setWindowTitle(QCoreApplication::translate("AllRegions", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AllRegions", "Click on region to select:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllRegions: public Ui_AllRegions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLREGIONS_H
