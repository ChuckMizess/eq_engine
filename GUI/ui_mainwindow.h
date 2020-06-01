/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btn_search;
    QPushButton *btn_load_data;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_3;
    QLabel *med;
    QLabel *lbl_column;
    QLineEdit *line_column;
    QPushButton *btn_calculate;
    QLabel *min;
    QLabel *lbl_med;
    QSpacerItem *verticalSpacer_2;
    QLabel *lbl_min;
    QLabel *lbl_max;
    QPushButton *pushButton;
    QLineEdit *line_year_from;
    QLineEdit *line_file;
    QLineEdit *line_region;
    QPushButton *btn_all_regions;
    QLabel *lbl_file;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_load_years;
    QLineEdit *line_year_to;
    QLabel *lbl_region;
    QLabel *lbl_years;
    QVBoxLayout *verticalLayout;
    QCustomPlot *widget;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2000, 1600);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_search = new QPushButton(centralwidget);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_search->sizePolicy().hasHeightForWidth());
        btn_search->setSizePolicy(sizePolicy1);
        btn_search->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout->addWidget(btn_search, 0, 3, 1, 1);

        btn_load_data = new QPushButton(centralwidget);
        btn_load_data->setObjectName(QString::fromUtf8("btn_load_data"));
        sizePolicy1.setHeightForWidth(btn_load_data->sizePolicy().hasHeightForWidth());
        btn_load_data->setSizePolicy(sizePolicy1);
        btn_load_data->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout->addWidget(btn_load_data, 4, 3, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        med = new QLabel(centralwidget);
        med->setObjectName(QString::fromUtf8("med"));
        med->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(med, 9, 2, 1, 1);

        lbl_column = new QLabel(centralwidget);
        lbl_column->setObjectName(QString::fromUtf8("lbl_column"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl_column->sizePolicy().hasHeightForWidth());
        lbl_column->setSizePolicy(sizePolicy2);
        lbl_column->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(lbl_column, 0, 0, 1, 1);

        line_column = new QLineEdit(centralwidget);
        line_column->setObjectName(QString::fromUtf8("line_column"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_column->sizePolicy().hasHeightForWidth());
        line_column->setSizePolicy(sizePolicy3);
        line_column->setMinimumSize(QSize(360, 0));
        line_column->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout_3->addWidget(line_column, 2, 0, 1, 1);

        btn_calculate = new QPushButton(centralwidget);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));
        sizePolicy1.setHeightForWidth(btn_calculate->sizePolicy().hasHeightForWidth());
        btn_calculate->setSizePolicy(sizePolicy1);
        btn_calculate->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout_3->addWidget(btn_calculate, 4, 0, 1, 1, Qt::AlignRight);

        min = new QLabel(centralwidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(min, 8, 2, 1, 1);

        lbl_med = new QLabel(centralwidget);
        lbl_med->setObjectName(QString::fromUtf8("lbl_med"));
        sizePolicy2.setHeightForWidth(lbl_med->sizePolicy().hasHeightForWidth());
        lbl_med->setSizePolicy(sizePolicy2);
        lbl_med->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(lbl_med, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 9, 0, 1, 1);

        lbl_min = new QLabel(centralwidget);
        lbl_min->setObjectName(QString::fromUtf8("lbl_min"));
        sizePolicy2.setHeightForWidth(lbl_min->sizePolicy().hasHeightForWidth());
        lbl_min->setSizePolicy(sizePolicy2);
        lbl_min->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(lbl_min, 6, 0, 1, 1);

        lbl_max = new QLabel(centralwidget);
        lbl_max->setObjectName(QString::fromUtf8("lbl_max"));
        sizePolicy2.setHeightForWidth(lbl_max->sizePolicy().hasHeightForWidth());
        lbl_max->setSizePolicy(sizePolicy2);
        lbl_max->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(lbl_max, 7, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout_3->addWidget(pushButton, 5, 0, 1, 1, Qt::AlignRight);


        verticalLayout_3->addLayout(gridLayout_3);


        gridLayout->addLayout(verticalLayout_3, 13, 1, 1, 2);

        line_year_from = new QLineEdit(centralwidget);
        line_year_from->setObjectName(QString::fromUtf8("line_year_from"));
        sizePolicy3.setHeightForWidth(line_year_from->sizePolicy().hasHeightForWidth());
        line_year_from->setSizePolicy(sizePolicy3);
        line_year_from->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout->addWidget(line_year_from, 6, 1, 1, 1);

        line_file = new QLineEdit(centralwidget);
        line_file->setObjectName(QString::fromUtf8("line_file"));
        sizePolicy3.setHeightForWidth(line_file->sizePolicy().hasHeightForWidth());
        line_file->setSizePolicy(sizePolicy3);
        line_file->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout->addWidget(line_file, 1, 1, 1, 3);

        line_region = new QLineEdit(centralwidget);
        line_region->setObjectName(QString::fromUtf8("line_region"));
        sizePolicy3.setHeightForWidth(line_region->sizePolicy().hasHeightForWidth());
        line_region->setSizePolicy(sizePolicy3);
        line_region->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(line_region, 3, 1, 1, 3);

        btn_all_regions = new QPushButton(centralwidget);
        btn_all_regions->setObjectName(QString::fromUtf8("btn_all_regions"));
        sizePolicy1.setHeightForWidth(btn_all_regions->sizePolicy().hasHeightForWidth());
        btn_all_regions->setSizePolicy(sizePolicy1);
        btn_all_regions->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout->addWidget(btn_all_regions, 4, 1, 1, 1);

        lbl_file = new QLabel(centralwidget);
        lbl_file->setObjectName(QString::fromUtf8("lbl_file"));
        sizePolicy2.setHeightForWidth(lbl_file->sizePolicy().hasHeightForWidth());
        lbl_file->setSizePolicy(sizePolicy2);
        lbl_file->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(lbl_file, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        btn_load_years = new QPushButton(centralwidget);
        btn_load_years->setObjectName(QString::fromUtf8("btn_load_years"));
        sizePolicy1.setHeightForWidth(btn_load_years->sizePolicy().hasHeightForWidth());
        btn_load_years->setSizePolicy(sizePolicy1);
        btn_load_years->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(btn_load_years, 6, 3, 1, 1);

        line_year_to = new QLineEdit(centralwidget);
        line_year_to->setObjectName(QString::fromUtf8("line_year_to"));
        sizePolicy3.setHeightForWidth(line_year_to->sizePolicy().hasHeightForWidth());
        line_year_to->setSizePolicy(sizePolicy3);
        line_year_to->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\""));

        gridLayout->addWidget(line_year_to, 6, 2, 1, 1);

        lbl_region = new QLabel(centralwidget);
        lbl_region->setObjectName(QString::fromUtf8("lbl_region"));
        sizePolicy2.setHeightForWidth(lbl_region->sizePolicy().hasHeightForWidth());
        lbl_region->setSizePolicy(sizePolicy2);
        lbl_region->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(lbl_region, 2, 1, 1, 1);

        lbl_years = new QLabel(centralwidget);
        lbl_years->setObjectName(QString::fromUtf8("lbl_years"));
        sizePolicy2.setHeightForWidth(lbl_years->sizePolicy().hasHeightForWidth());
        lbl_years->setSizePolicy(sizePolicy2);
        lbl_years->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(lbl_years, 5, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(widget);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy5);

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 0, 0, 14, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_search->setText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        btn_load_data->setText(QCoreApplication::translate("MainWindow", "Load data", nullptr));
        med->setText(QString());
        lbl_column->setText(QCoreApplication::translate("MainWindow", "Input number of column:", nullptr));
        btn_calculate->setText(QCoreApplication::translate("MainWindow", "Calculate and draw", nullptr));
        min->setText(QString());
        lbl_med->setText(QCoreApplication::translate("MainWindow", "Mediana:", nullptr));
        lbl_min->setText(QCoreApplication::translate("MainWindow", "Minimum:", nullptr));
        lbl_max->setText(QCoreApplication::translate("MainWindow", "Maximum:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add new graph", nullptr));
        btn_all_regions->setText(QCoreApplication::translate("MainWindow", "See all regions", nullptr));
        lbl_file->setText(QCoreApplication::translate("MainWindow", "File:", nullptr));
        btn_load_years->setText(QCoreApplication::translate("MainWindow", "Load years", nullptr));
        lbl_region->setText(QCoreApplication::translate("MainWindow", "Input region:", nullptr));
        lbl_years->setText(QCoreApplication::translate("MainWindow", "Input borders by year:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
