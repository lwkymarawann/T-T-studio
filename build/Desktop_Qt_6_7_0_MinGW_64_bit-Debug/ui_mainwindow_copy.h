/********************************************************************************
** Form generated from reading UI file 'mainwindow_copy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_COPY_H
#define UI_MAINWINDOW_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QPushButton *savebtn;
    QPushButton *loadimgbtn;
    QPushButton *resetbtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Rotatebtn;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *blur;
    QSlider *horizontalSlider_3;
    QLCDNumber *lcdNumber_3;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *lightendarken;
    QSlider *horizontalSlider_2;
    QLCDNumber *lcdNumber_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageDisplay;
    QLabel *imageDisplay_2;
    QLabel *loadImgFirst;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1874, 1102);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(-10, -10, 1920, 1080));
        background->setPixmap(QPixmap(QString::fromUtf8(":/background 4k.jpeg")));
        background->setScaledContents(true);
        background->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        savebtn = new QPushButton(centralwidget);
        savebtn->setObjectName("savebtn");
        savebtn->setGeometry(QRect(1790, 34, 80, 32));
        savebtn->setMaximumSize(QSize(80, 32));
        savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        loadimgbtn = new QPushButton(centralwidget);
        loadimgbtn->setObjectName("loadimgbtn");
        loadimgbtn->setGeometry(QRect(1702, 34, 80, 32));
        loadimgbtn->setMaximumSize(QSize(80, 32));
        loadimgbtn->setCursor(QCursor(Qt::PointingHandCursor));
        resetbtn = new QPushButton(centralwidget);
        resetbtn->setObjectName("resetbtn");
        resetbtn->setGeometry(QRect(1614, 34, 80, 32));
        resetbtn->setMaximumSize(QSize(80, 32));
        resetbtn->setCursor(QCursor(Qt::PointingHandCursor));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 1, 290, 1031));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Rotatebtn = new QPushButton(widget);
        Rotatebtn->setObjectName("Rotatebtn");
        Rotatebtn->setCursor(QCursor(Qt::PointingHandCursor));
        Rotatebtn->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_4->addWidget(Rotatebtn);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider->setMinimum(-360);
        horizontalSlider->setMaximum(360);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setMaximumSize(QSize(64, 63));

        horizontalLayout_4->addWidget(lcdNumber);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        blur = new QPushButton(widget);
        blur->setObjectName("blur");
        blur->setCursor(QCursor(Qt::PointingHandCursor));
        blur->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_6->addWidget(blur);

        horizontalSlider_3 = new QSlider(widget);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_3);

        lcdNumber_3 = new QLCDNumber(widget);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setMaximumSize(QSize(64, 64));

        horizontalLayout_6->addWidget(lcdNumber_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lightendarken = new QPushButton(widget);
        lightendarken->setObjectName("lightendarken");
        lightendarken->setCursor(QCursor(Qt::PointingHandCursor));
        lightendarken->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_5->addWidget(lightendarken);

        horizontalSlider_2 = new QSlider(widget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_2->setMinimum(-100);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);

        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setMaximumSize(QSize(64, 63));

        horizontalLayout_5->addWidget(lcdNumber_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_10->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_10->addWidget(pushButton_6);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_13->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_13->addWidget(pushButton_12);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_12->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_12->addWidget(pushButton_10);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_11->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_11->addWidget(pushButton_8);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_13->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_14->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_14->addWidget(pushButton_14);


        verticalLayout_3->addLayout(horizontalLayout_14);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_15->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_15->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_16->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_15->addWidget(pushButton_16);


        verticalLayout_3->addLayout(horizontalLayout_15);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        pushButton_17 = new QPushButton(widget);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_17->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_16->addWidget(pushButton_17);

        pushButton_18 = new QPushButton(widget);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_18->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_16->addWidget(pushButton_18);


        verticalLayout_3->addLayout(horizontalLayout_16);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_8->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_8->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_8);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(300, 96, 1521, 821));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        imageDisplay = new QLabel(widget1);
        imageDisplay->setObjectName("imageDisplay");

        horizontalLayout_2->addWidget(imageDisplay);

        imageDisplay_2 = new QLabel(widget1);
        imageDisplay_2->setObjectName("imageDisplay_2");

        horizontalLayout_2->addWidget(imageDisplay_2);

        loadImgFirst = new QLabel(centralwidget);
        loadImgFirst->setObjectName("loadImgFirst");
        loadImgFirst->setGeometry(QRect(660, 39, 304, 22));
        loadImgFirst->setMaximumSize(QSize(304, 69));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(301, 39, 53, 22));
        label->setMaximumSize(QSize(304, 69));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(611, 39, 41, 22));
        label_2->setMaximumSize(QSize(304, 69));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        background->setText(QString());
        savebtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        loadimgbtn->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        resetbtn->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        Rotatebtn->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        blur->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        lightendarken->setText(QCoreApplication::translate("MainWindow", "lighten/darken", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Grayscale", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Black n White", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Invert", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Flip", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Add Frame", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Detect Edges", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Den Den Mushi/Old TV", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "Purple", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Infrared", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Skew", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Sunlight", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Oil Painting", nullptr));
        imageDisplay->setText(QString());
        imageDisplay_2->setText(QString());
        loadImgFirst->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Before:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "After:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_COPY_H
