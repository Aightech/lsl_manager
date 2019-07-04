/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton_play;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_5;
    QSpinBox *spinBox_loop;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_addStep;
    QPushButton *pushButton_rmStep;
    QPushButton *pushButton_clearStep;
    QPushButton *pushButton_desactivate;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_open;
    QPushButton *pushButton_save;
    QCommandLinkButton *button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(773, 530);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_3->addWidget(comboBox);

        pushButton_play = new QPushButton(centralWidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        pushButton_play->setFont(font);

        horizontalLayout_3->addWidget(pushButton_play);


        gridLayout->addLayout(horizontalLayout_3, 7, 0, 1, 7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setFont(font);
        spinBox->setMinimum(1);
        spinBox->setMaximum(5000);
        spinBox->setValue(1000);

        horizontalLayout_2->addWidget(spinBox);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        spinBox_loop = new QSpinBox(centralWidget);
        spinBox_loop->setObjectName(QString::fromUtf8("spinBox_loop"));
        spinBox_loop->setFont(font);
        spinBox_loop->setMinimum(1);
        spinBox_loop->setMaximum(10);
        spinBox_loop->setValue(5);

        horizontalLayout_2->addWidget(spinBox_loop);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 7);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_addStep = new QPushButton(centralWidget);
        pushButton_addStep->setObjectName(QString::fromUtf8("pushButton_addStep"));
        pushButton_addStep->setFont(font);

        horizontalLayout->addWidget(pushButton_addStep);

        pushButton_rmStep = new QPushButton(centralWidget);
        pushButton_rmStep->setObjectName(QString::fromUtf8("pushButton_rmStep"));
        pushButton_rmStep->setFont(font);

        horizontalLayout->addWidget(pushButton_rmStep);

        pushButton_clearStep = new QPushButton(centralWidget);
        pushButton_clearStep->setObjectName(QString::fromUtf8("pushButton_clearStep"));
        pushButton_clearStep->setFont(font);

        horizontalLayout->addWidget(pushButton_clearStep);

        pushButton_desactivate = new QPushButton(centralWidget);
        pushButton_desactivate->setObjectName(QString::fromUtf8("pushButton_desactivate"));
        pushButton_desactivate->setFont(font);

        horizontalLayout->addWidget(pushButton_desactivate);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 7);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 0, 2, 1, 5);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font);

        gridLayout->addWidget(tableWidget, 3, 0, 1, 7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setFont(font);

        horizontalLayout_4->addWidget(pushButton_open);

        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setFont(font);

        horizontalLayout_4->addWidget(pushButton_save);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 6);

        button = new QCommandLinkButton(centralWidget);
        button->setObjectName(QString::fromUtf8("button"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy1);
        button->setMaximumSize(QSize(80, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        button->setIcon(icon);
        button->setIconSize(QSize(80, 80));

        gridLayout->addWidget(button, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Hand:", nullptr));
        pushButton_play->setText(QApplication::translate("MainWindow", "Play", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Step Period (ms):", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Loop:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "File path: ", nullptr));
        pushButton_addStep->setText(QApplication::translate("MainWindow", "Add Step", nullptr));
        pushButton_rmStep->setText(QApplication::translate("MainWindow", "Remove Step", nullptr));
        pushButton_clearStep->setText(QApplication::translate("MainWindow", "Clear All", nullptr));
        pushButton_desactivate->setText(QApplication::translate("MainWindow", "Desactivate Finger", nullptr));
        pushButton_open->setText(QApplication::translate("MainWindow", "Open", nullptr));
        pushButton_save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
