/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
    QWidget *layoutWidget;
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
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *skew;
    QSlider *horizontalSlider_4;
    QLCDNumber *lcdNumber_4;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *grayscale;
    QPushButton *blackwhitebtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *invertbtn;
    QPushButton *merge;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *Flipbtn;
    QPushButton *addFrame;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *Detect;
    QPushButton *resize;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *tv;
    QPushButton *purple;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *infrared;
    QPushButton *crop;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *sunlight;
    QPushButton *oil;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageDisplay;
    QLabel *imageDisplay_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(309, 0, 1921, 1241));
        background->setPixmap(QPixmap(QString::fromUtf8(":/Downloads-Ddrive/darkblue.png")));
        background->setScaledContents(true);
        background->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        savebtn = new QPushButton(centralwidget);
        savebtn->setObjectName("savebtn");
        savebtn->setGeometry(QRect(1480, 30, 80, 32));
        savebtn->setMaximumSize(QSize(80, 32));
        savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        loadimgbtn = new QPushButton(centralwidget);
        loadimgbtn->setObjectName("loadimgbtn");
        loadimgbtn->setGeometry(QRect(1390, 30, 80, 32));
        loadimgbtn->setMaximumSize(QSize(80, 32));
        loadimgbtn->setCursor(QCursor(Qt::PointingHandCursor));
        resetbtn = new QPushButton(centralwidget);
        resetbtn->setObjectName("resetbtn");
        resetbtn->setGeometry(QRect(1300, 30, 80, 32));
        resetbtn->setMaximumSize(QSize(80, 32));
        resetbtn->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 301, 1041));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Rotatebtn = new QPushButton(layoutWidget);
        Rotatebtn->setObjectName("Rotatebtn");
        Rotatebtn->setCursor(QCursor(Qt::PointingHandCursor));
        Rotatebtn->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_4->addWidget(Rotatebtn);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider->setMinimum(-360);
        horizontalSlider->setMaximum(360);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setMaximumSize(QSize(64, 63));

        horizontalLayout_4->addWidget(lcdNumber);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        blur = new QPushButton(layoutWidget);
        blur->setObjectName("blur");
        blur->setCursor(QCursor(Qt::PointingHandCursor));
        blur->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_6->addWidget(blur);

        horizontalSlider_3 = new QSlider(layoutWidget);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_3);

        lcdNumber_3 = new QLCDNumber(layoutWidget);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setMaximumSize(QSize(64, 64));

        horizontalLayout_6->addWidget(lcdNumber_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lightendarken = new QPushButton(layoutWidget);
        lightendarken->setObjectName("lightendarken");
        lightendarken->setCursor(QCursor(Qt::PointingHandCursor));
        lightendarken->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_5->addWidget(lightendarken);

        horizontalSlider_2 = new QSlider(layoutWidget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_2->setMinimum(-100);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setMaximumSize(QSize(64, 63));

        horizontalLayout_5->addWidget(lcdNumber_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_11 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        skew = new QPushButton(layoutWidget);
        skew->setObjectName("skew");
        skew->setCursor(QCursor(Qt::PointingHandCursor));
        skew->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_7->addWidget(skew);

        horizontalSlider_4 = new QSlider(layoutWidget);
        horizontalSlider_4->setObjectName("horizontalSlider_4");
        horizontalSlider_4->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_4->setMinimum(-180);
        horizontalSlider_4->setMaximum(180);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_4);

        lcdNumber_4 = new QLCDNumber(layoutWidget);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setMaximumSize(QSize(64, 63));

        horizontalLayout_7->addWidget(lcdNumber_4);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        grayscale = new QPushButton(layoutWidget);
        grayscale->setObjectName("grayscale");
        grayscale->setCursor(QCursor(Qt::PointingHandCursor));
        grayscale->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_10->addWidget(grayscale);

        blackwhitebtn = new QPushButton(layoutWidget);
        blackwhitebtn->setObjectName("blackwhitebtn");
        blackwhitebtn->setCursor(QCursor(Qt::PointingHandCursor));
        blackwhitebtn->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_10->addWidget(blackwhitebtn);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        invertbtn = new QPushButton(layoutWidget);
        invertbtn->setObjectName("invertbtn");
        invertbtn->setCursor(QCursor(Qt::PointingHandCursor));
        invertbtn->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_13->addWidget(invertbtn);

        merge = new QPushButton(layoutWidget);
        merge->setObjectName("merge");
        merge->setCursor(QCursor(Qt::PointingHandCursor));
        merge->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_13->addWidget(merge);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        Flipbtn = new QPushButton(layoutWidget);
        Flipbtn->setObjectName("Flipbtn");
        Flipbtn->setCursor(QCursor(Qt::PointingHandCursor));
        Flipbtn->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_12->addWidget(Flipbtn);

        addFrame = new QPushButton(layoutWidget);
        addFrame->setObjectName("addFrame");
        addFrame->setCursor(QCursor(Qt::PointingHandCursor));
        addFrame->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_12->addWidget(addFrame);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        Detect = new QPushButton(layoutWidget);
        Detect->setObjectName("Detect");
        Detect->setCursor(QCursor(Qt::PointingHandCursor));
        Detect->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_11->addWidget(Detect);

        resize = new QPushButton(layoutWidget);
        resize->setObjectName("resize");
        resize->setCursor(QCursor(Qt::PointingHandCursor));
        resize->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_11->addWidget(resize);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        tv = new QPushButton(layoutWidget);
        tv->setObjectName("tv");
        tv->setCursor(QCursor(Qt::PointingHandCursor));
        tv->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_14->addWidget(tv);

        purple = new QPushButton(layoutWidget);
        purple->setObjectName("purple");
        purple->setCursor(QCursor(Qt::PointingHandCursor));
        purple->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_14->addWidget(purple);


        verticalLayout_3->addLayout(horizontalLayout_14);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        infrared = new QPushButton(layoutWidget);
        infrared->setObjectName("infrared");
        infrared->setCursor(QCursor(Qt::PointingHandCursor));
        infrared->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_15->addWidget(infrared);

        crop = new QPushButton(layoutWidget);
        crop->setObjectName("crop");
        crop->setCursor(QCursor(Qt::PointingHandCursor));
        crop->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_15->addWidget(crop);


        verticalLayout_3->addLayout(horizontalLayout_15);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        sunlight = new QPushButton(layoutWidget);
        sunlight->setObjectName("sunlight");
        sunlight->setCursor(QCursor(Qt::PointingHandCursor));
        sunlight->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_8->addWidget(sunlight);

        oil = new QPushButton(layoutWidget);
        oil->setObjectName("oil");
        oil->setCursor(QCursor(Qt::PointingHandCursor));
        oil->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_8->addWidget(oil);


        verticalLayout_3->addLayout(horizontalLayout_8);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(340, 90, 1201, 821));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        imageDisplay = new QLabel(layoutWidget1);
        imageDisplay->setObjectName("imageDisplay");
        imageDisplay->setStyleSheet(QString::fromUtf8("background-color:  rgb(193, 215, 255);"));
        imageDisplay->setScaledContents(false);

        horizontalLayout_2->addWidget(imageDisplay);

        imageDisplay_2 = new QLabel(layoutWidget1);
        imageDisplay_2->setObjectName("imageDisplay_2");
        imageDisplay_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 239, 212);"));
        imageDisplay_2->setScaledContents(false);

        horizontalLayout_2->addWidget(imageDisplay_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 40, 53, 22));
        label->setMaximumSize(QSize(304, 69));
        label->setStyleSheet(QString::fromUtf8("color: white;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(880, 30, 41, 22));
        label_2->setMaximumSize(QSize(304, 69));
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(resize, &QPushButton::clicked, resetbtn, qOverload<>(&QPushButton::click));
        QObject::connect(lightendarken, &QPushButton::clicked, resetbtn, qOverload<>(&QPushButton::click));

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
        skew->setText(QCoreApplication::translate("MainWindow", "Skew", nullptr));
        grayscale->setText(QCoreApplication::translate("MainWindow", "Grayscale", nullptr));
        blackwhitebtn->setText(QCoreApplication::translate("MainWindow", "Black n White", nullptr));
        invertbtn->setText(QCoreApplication::translate("MainWindow", "Invert", nullptr));
        merge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        Flipbtn->setText(QCoreApplication::translate("MainWindow", "Flip", nullptr));
        addFrame->setText(QCoreApplication::translate("MainWindow", "Add Frame", nullptr));
        Detect->setText(QCoreApplication::translate("MainWindow", "Detect Edges", nullptr));
        resize->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
        tv->setText(QCoreApplication::translate("MainWindow", "Den Den Mushi/Old TV", nullptr));
        purple->setText(QCoreApplication::translate("MainWindow", "Purple", nullptr));
        infrared->setText(QCoreApplication::translate("MainWindow", "Infrared", nullptr));
        crop->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
        sunlight->setText(QCoreApplication::translate("MainWindow", "Sunlight", nullptr));
        oil->setText(QCoreApplication::translate("MainWindow", "Oil Painting", nullptr));
        imageDisplay->setText(QString());
        imageDisplay_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Before:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "After:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
