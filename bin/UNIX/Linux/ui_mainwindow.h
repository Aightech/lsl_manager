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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_scanStream;
    QTreeWidget *treeWidget_streams;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_stream;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QSpinBox *spinBox_minVal;
    QLabel *label_17;
    QSpinBox *spinBox_maxVal;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_31;
    QSpinBox *spinBox_heatmapChmin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QSpinBox *spinBox_heatmapHeight;
    QLabel *label_16;
    QSpinBox *spinBox_heatmapWidth;
    QGroupBox *groupBox_2D;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_plot_line;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_all;
    QCheckBox *checkBox;
    QFrame *line;
    QRadioButton *radioButton_solo;
    QGroupBox *groupBox_3D;
    QGridLayout *gridLayout;
    QPushButton *pushButton_plot_heatmap;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 439);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_3->sizePolicy().hasHeightForWidth());
        dockWidget_3->setSizePolicy(sizePolicy1);
        dockWidget_3->setFloating(false);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_7 = new QGridLayout(dockWidgetContents_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton_scanStream = new QPushButton(dockWidgetContents_3);
        pushButton_scanStream->setObjectName(QString::fromUtf8("pushButton_scanStream"));

        gridLayout_7->addWidget(pushButton_scanStream, 0, 0, 1, 1);

        treeWidget_streams = new QTreeWidget(dockWidgetContents_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget_streams->setHeaderItem(__qtreewidgetitem);
        treeWidget_streams->setObjectName(QString::fromUtf8("treeWidget_streams"));

        gridLayout_7->addWidget(treeWidget_streams, 1, 0, 1, 1);

        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget_3);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy2);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_3 = new QGridLayout(dockWidgetContents);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        comboBox_stream = new QComboBox(dockWidgetContents);
        comboBox_stream->setObjectName(QString::fromUtf8("comboBox_stream"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_stream->sizePolicy().hasHeightForWidth());
        comboBox_stream->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(comboBox_stream, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_13 = new QLabel(dockWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_13);

        spinBox_minVal = new QSpinBox(dockWidgetContents);
        spinBox_minVal->setObjectName(QString::fromUtf8("spinBox_minVal"));
        sizePolicy3.setHeightForWidth(spinBox_minVal->sizePolicy().hasHeightForWidth());
        spinBox_minVal->setSizePolicy(sizePolicy3);
        spinBox_minVal->setMinimum(-32000);
        spinBox_minVal->setMaximum(64000);
        spinBox_minVal->setValue(0);

        horizontalLayout_8->addWidget(spinBox_minVal);

        label_17 = new QLabel(dockWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(label_17);

        spinBox_maxVal = new QSpinBox(dockWidgetContents);
        spinBox_maxVal->setObjectName(QString::fromUtf8("spinBox_maxVal"));
        sizePolicy3.setHeightForWidth(spinBox_maxVal->sizePolicy().hasHeightForWidth());
        spinBox_maxVal->setSizePolicy(sizePolicy3);
        spinBox_maxVal->setMinimum(-32000);
        spinBox_maxVal->setMaximum(64000);
        spinBox_maxVal->setValue(100);

        horizontalLayout_8->addWidget(spinBox_maxVal);


        gridLayout_4->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_31 = new QLabel(dockWidgetContents);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);
        label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_20->addWidget(label_31);

        spinBox_heatmapChmin = new QSpinBox(dockWidgetContents);
        spinBox_heatmapChmin->setObjectName(QString::fromUtf8("spinBox_heatmapChmin"));
        sizePolicy3.setHeightForWidth(spinBox_heatmapChmin->sizePolicy().hasHeightForWidth());
        spinBox_heatmapChmin->setSizePolicy(sizePolicy3);
        spinBox_heatmapChmin->setMaximum(1000);
        spinBox_heatmapChmin->setValue(128);

        horizontalLayout_20->addWidget(spinBox_heatmapChmin);


        gridLayout_4->addLayout(horizontalLayout_20, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_12 = new QLabel(dockWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_12);

        spinBox_heatmapHeight = new QSpinBox(dockWidgetContents);
        spinBox_heatmapHeight->setObjectName(QString::fromUtf8("spinBox_heatmapHeight"));
        sizePolicy3.setHeightForWidth(spinBox_heatmapHeight->sizePolicy().hasHeightForWidth());
        spinBox_heatmapHeight->setSizePolicy(sizePolicy3);
        spinBox_heatmapHeight->setMaximum(1000);
        spinBox_heatmapHeight->setValue(13);

        horizontalLayout_7->addWidget(spinBox_heatmapHeight);

        label_16 = new QLabel(dockWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_16);

        spinBox_heatmapWidth = new QSpinBox(dockWidgetContents);
        spinBox_heatmapWidth->setObjectName(QString::fromUtf8("spinBox_heatmapWidth"));
        sizePolicy3.setHeightForWidth(spinBox_heatmapWidth->sizePolicy().hasHeightForWidth());
        spinBox_heatmapWidth->setSizePolicy(sizePolicy3);
        spinBox_heatmapWidth->setMaximum(1000);
        spinBox_heatmapWidth->setValue(5);

        horizontalLayout_7->addWidget(spinBox_heatmapWidth);


        gridLayout_4->addLayout(horizontalLayout_7, 3, 0, 1, 1);

        groupBox_2D = new QGroupBox(dockWidgetContents);
        groupBox_2D->setObjectName(QString::fromUtf8("groupBox_2D"));
        sizePolicy1.setHeightForWidth(groupBox_2D->sizePolicy().hasHeightForWidth());
        groupBox_2D->setSizePolicy(sizePolicy1);
        groupBox_2D->setFlat(false);
        groupBox_2D->setCheckable(false);
        gridLayout_2 = new QGridLayout(groupBox_2D);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_plot_line = new QPushButton(groupBox_2D);
        pushButton_plot_line->setObjectName(QString::fromUtf8("pushButton_plot_line"));
        pushButton_plot_line->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButton_plot_line->sizePolicy().hasHeightForWidth());
        pushButton_plot_line->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(pushButton_plot_line, 0, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        radioButton_all = new QRadioButton(groupBox_2D);
        radioButton_all->setObjectName(QString::fromUtf8("radioButton_all"));
        sizePolicy3.setHeightForWidth(radioButton_all->sizePolicy().hasHeightForWidth());
        radioButton_all->setSizePolicy(sizePolicy3);
        radioButton_all->setChecked(true);

        horizontalLayout_6->addWidget(radioButton_all);

        checkBox = new QCheckBox(groupBox_2D);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_6->addWidget(checkBox);

        line = new QFrame(groupBox_2D);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line);

        radioButton_solo = new QRadioButton(groupBox_2D);
        radioButton_solo->setObjectName(QString::fromUtf8("radioButton_solo"));
        sizePolicy3.setHeightForWidth(radioButton_solo->sizePolicy().hasHeightForWidth());
        radioButton_solo->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(radioButton_solo);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_2D, 4, 0, 1, 1);

        groupBox_3D = new QGroupBox(dockWidgetContents);
        groupBox_3D->setObjectName(QString::fromUtf8("groupBox_3D"));
        sizePolicy1.setHeightForWidth(groupBox_3D->sizePolicy().hasHeightForWidth());
        groupBox_3D->setSizePolicy(sizePolicy1);
        groupBox_3D->setCheckable(false);
        gridLayout = new QGridLayout(groupBox_3D);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_plot_heatmap = new QPushButton(groupBox_3D);
        pushButton_plot_heatmap->setObjectName(QString::fromUtf8("pushButton_plot_heatmap"));
        pushButton_plot_heatmap->setEnabled(true);
        sizePolicy3.setHeightForWidth(pushButton_plot_heatmap->sizePolicy().hasHeightForWidth());
        pushButton_plot_heatmap->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton_plot_heatmap, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3D, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        dockWidget_3->setWindowTitle(QApplication::translate("MainWindow", "LSL Streams:", nullptr));
        pushButton_scanStream->setText(QApplication::translate("MainWindow", "Scan", nullptr));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Parameters", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Min Value:", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Max Value:", nullptr));
        label_31->setText(QApplication::translate("MainWindow", "Start from ch: ", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Width:", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Height:", nullptr));
        groupBox_2D->setTitle(QApplication::translate("MainWindow", "Lines", nullptr));
        pushButton_plot_line->setText(QApplication::translate("MainWindow", "Show", nullptr));
        radioButton_all->setText(QApplication::translate("MainWindow", "All", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "multiplot", nullptr));
        radioButton_solo->setText(QApplication::translate("MainWindow", "Solo", nullptr));
        groupBox_3D->setTitle(QApplication::translate("MainWindow", "3D Heatmap", nullptr));
        pushButton_plot_heatmap->setText(QApplication::translate("MainWindow", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
