/********************************************************************************
** Form generated from reading UI file 'mainwindowFixBackground.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWFIXBACKGROUND_H
#define UI_MAINWINDOWFIXBACKGROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
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
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *imageDisplay_3;
    QLabel *imageDisplay_4;
    QPushButton *resetbtn;
    QPushButton *loadimgbtn;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *Rotatebtn_2;
    QSlider *horizontalSlider_5;
    QLCDNumber *lcdNumber_5;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *blur_2;
    QSlider *horizontalSlider_6;
    QLCDNumber *lcdNumber_6;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *lightendarken_2;
    QSlider *horizontalSlider_7;
    QLCDNumber *lcdNumber_7;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *skew_2;
    QSlider *horizontalSlider_8;
    QLCDNumber *lcdNumber_8;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *grayscale_2;
    QPushButton *blackwhitebtn_2;
    QSpacerItem *verticalSpacer_15;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *invertbtn_2;
    QPushButton *merge_2;
    QSpacerItem *verticalSpacer_16;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *Flipbtn_2;
    QPushButton *addFrame_2;
    QSpacerItem *verticalSpacer_17;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *Detect_2;
    QPushButton *resize_2;
    QSpacerItem *verticalSpacer_18;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *tv_2;
    QPushButton *purple_2;
    QSpacerItem *verticalSpacer_19;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *infrared_2;
    QPushButton *crop_2;
    QSpacerItem *verticalSpacer_20;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *sunlight_2;
    QPushButton *oil_2;
    QPushButton *savebtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1551, 885);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1920, 1080));
        label->setStyleSheet(QString::fromUtf8("border-style: none;\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/background 4k.jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(743, 0, 304, 32));
        label_2->setMaximumSize(QSize(304, 69));
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(325, 40, 1201, 821));
        groupBox->setMinimumSize(QSize(1201, 821));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        imageDisplay_3 = new QLabel(groupBox);
        imageDisplay_3->setObjectName("imageDisplay_3");
        imageDisplay_3->setStyleSheet(QString::fromUtf8(""));
        imageDisplay_3->setScaledContents(false);

        horizontalLayout_3->addWidget(imageDisplay_3);

        imageDisplay_4 = new QLabel(groupBox);
        imageDisplay_4->setObjectName("imageDisplay_4");
        imageDisplay_4->setStyleSheet(QString::fromUtf8(""));
        imageDisplay_4->setScaledContents(false);

        horizontalLayout_3->addWidget(imageDisplay_4);

        resetbtn = new QPushButton(centralwidget);
        resetbtn->setObjectName("resetbtn");
        resetbtn->setGeometry(QRect(1108, 0, 80, 32));
        resetbtn->setMaximumSize(QSize(80, 32));
        resetbtn->setCursor(QCursor(Qt::PointingHandCursor));
        loadimgbtn = new QPushButton(centralwidget);
        loadimgbtn->setObjectName("loadimgbtn");
        loadimgbtn->setGeometry(QRect(1249, 0, 80, 32));
        loadimgbtn->setMaximumSize(QSize(80, 32));
        loadimgbtn->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(325, 0, 304, 32));
        label_3->setMaximumSize(QSize(304, 69));
        label_3->setStyleSheet(QString::fromUtf8("color: white;"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(-1, 0, 318, 861));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        Rotatebtn_2 = new QPushButton(groupBox_2);
        Rotatebtn_2->setObjectName("Rotatebtn_2");
        Rotatebtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        Rotatebtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_9->addWidget(Rotatebtn_2);

        horizontalSlider_5 = new QSlider(groupBox_2);
        horizontalSlider_5->setObjectName("horizontalSlider_5");
        horizontalSlider_5->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_5->setMinimum(-360);
        horizontalSlider_5->setMaximum(360);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_5);

        lcdNumber_5 = new QLCDNumber(groupBox_2);
        lcdNumber_5->setObjectName("lcdNumber_5");
        lcdNumber_5->setMaximumSize(QSize(64, 63));

        horizontalLayout_9->addWidget(lcdNumber_5);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        blur_2 = new QPushButton(groupBox_2);
        blur_2->setObjectName("blur_2");
        blur_2->setCursor(QCursor(Qt::PointingHandCursor));
        blur_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_16->addWidget(blur_2);

        horizontalSlider_6 = new QSlider(groupBox_2);
        horizontalSlider_6->setObjectName("horizontalSlider_6");
        horizontalSlider_6->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_6->setMaximum(10);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        horizontalLayout_16->addWidget(horizontalSlider_6);

        lcdNumber_6 = new QLCDNumber(groupBox_2);
        lcdNumber_6->setObjectName("lcdNumber_6");
        lcdNumber_6->setMaximumSize(QSize(64, 64));

        horizontalLayout_16->addWidget(lcdNumber_6);


        verticalLayout_4->addLayout(horizontalLayout_16);

        verticalSpacer_12 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_12);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        lightendarken_2 = new QPushButton(groupBox_2);
        lightendarken_2->setObjectName("lightendarken_2");
        lightendarken_2->setCursor(QCursor(Qt::PointingHandCursor));
        lightendarken_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;\n"
""));

        horizontalLayout_17->addWidget(lightendarken_2);

        horizontalSlider_7 = new QSlider(groupBox_2);
        horizontalSlider_7->setObjectName("horizontalSlider_7");
        horizontalSlider_7->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_7->setMinimum(-100);
        horizontalSlider_7->setMaximum(100);
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(horizontalSlider_7);

        lcdNumber_7 = new QLCDNumber(groupBox_2);
        lcdNumber_7->setObjectName("lcdNumber_7");
        lcdNumber_7->setMaximumSize(QSize(64, 63));

        horizontalLayout_17->addWidget(lcdNumber_7);


        verticalLayout_4->addLayout(horizontalLayout_17);

        verticalSpacer_13 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_13);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        skew_2 = new QPushButton(groupBox_2);
        skew_2->setObjectName("skew_2");
        skew_2->setCursor(QCursor(Qt::PointingHandCursor));
        skew_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_18->addWidget(skew_2);

        horizontalSlider_8 = new QSlider(groupBox_2);
        horizontalSlider_8->setObjectName("horizontalSlider_8");
        horizontalSlider_8->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_8->setMinimum(-90);
        horizontalSlider_8->setMaximum(90);
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        horizontalLayout_18->addWidget(horizontalSlider_8);

        lcdNumber_8 = new QLCDNumber(groupBox_2);
        lcdNumber_8->setObjectName("lcdNumber_8");
        lcdNumber_8->setMaximumSize(QSize(64, 63));

        horizontalLayout_18->addWidget(lcdNumber_8);


        verticalLayout_4->addLayout(horizontalLayout_18);

        verticalSpacer_14 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_14);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        grayscale_2 = new QPushButton(groupBox_2);
        grayscale_2->setObjectName("grayscale_2");
        grayscale_2->setCursor(QCursor(Qt::PointingHandCursor));
        grayscale_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_19->addWidget(grayscale_2);

        blackwhitebtn_2 = new QPushButton(groupBox_2);
        blackwhitebtn_2->setObjectName("blackwhitebtn_2");
        blackwhitebtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        blackwhitebtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_19->addWidget(blackwhitebtn_2);


        verticalLayout_4->addLayout(horizontalLayout_19);

        verticalSpacer_15 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_15);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        invertbtn_2 = new QPushButton(groupBox_2);
        invertbtn_2->setObjectName("invertbtn_2");
        invertbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        invertbtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_20->addWidget(invertbtn_2);

        merge_2 = new QPushButton(groupBox_2);
        merge_2->setObjectName("merge_2");
        merge_2->setCursor(QCursor(Qt::PointingHandCursor));
        merge_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_20->addWidget(merge_2);


        verticalLayout_4->addLayout(horizontalLayout_20);

        verticalSpacer_16 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_16);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        Flipbtn_2 = new QPushButton(groupBox_2);
        Flipbtn_2->setObjectName("Flipbtn_2");
        Flipbtn_2->setCursor(QCursor(Qt::PointingHandCursor));
        Flipbtn_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_21->addWidget(Flipbtn_2);

        addFrame_2 = new QPushButton(groupBox_2);
        addFrame_2->setObjectName("addFrame_2");
        addFrame_2->setCursor(QCursor(Qt::PointingHandCursor));
        addFrame_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_21->addWidget(addFrame_2);


        verticalLayout_4->addLayout(horizontalLayout_21);

        verticalSpacer_17 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_17);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        Detect_2 = new QPushButton(groupBox_2);
        Detect_2->setObjectName("Detect_2");
        Detect_2->setCursor(QCursor(Qt::PointingHandCursor));
        Detect_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_22->addWidget(Detect_2);

        resize_2 = new QPushButton(groupBox_2);
        resize_2->setObjectName("resize_2");
        resize_2->setCursor(QCursor(Qt::PointingHandCursor));
        resize_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_22->addWidget(resize_2);


        verticalLayout_4->addLayout(horizontalLayout_22);

        verticalSpacer_18 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_18);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        tv_2 = new QPushButton(groupBox_2);
        tv_2->setObjectName("tv_2");
        tv_2->setCursor(QCursor(Qt::PointingHandCursor));
        tv_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_23->addWidget(tv_2);

        purple_2 = new QPushButton(groupBox_2);
        purple_2->setObjectName("purple_2");
        purple_2->setCursor(QCursor(Qt::PointingHandCursor));
        purple_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_23->addWidget(purple_2);


        verticalLayout_4->addLayout(horizontalLayout_23);

        verticalSpacer_19 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_19);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        infrared_2 = new QPushButton(groupBox_2);
        infrared_2->setObjectName("infrared_2");
        infrared_2->setCursor(QCursor(Qt::PointingHandCursor));
        infrared_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_24->addWidget(infrared_2);

        crop_2 = new QPushButton(groupBox_2);
        crop_2->setObjectName("crop_2");
        crop_2->setCursor(QCursor(Qt::PointingHandCursor));
        crop_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_24->addWidget(crop_2);


        verticalLayout_4->addLayout(horizontalLayout_24);

        verticalSpacer_20 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_20);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        sunlight_2 = new QPushButton(groupBox_2);
        sunlight_2->setObjectName("sunlight_2");
        sunlight_2->setCursor(QCursor(Qt::PointingHandCursor));
        sunlight_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_25->addWidget(sunlight_2);

        oil_2 = new QPushButton(groupBox_2);
        oil_2->setObjectName("oil_2");
        oil_2->setCursor(QCursor(Qt::PointingHandCursor));
        oil_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: dark gray;"));

        horizontalLayout_25->addWidget(oil_2);


        verticalLayout_4->addLayout(horizontalLayout_25);

        savebtn = new QPushButton(centralwidget);
        savebtn->setObjectName("savebtn");
        savebtn->setGeometry(QRect(1390, 0, 80, 32));
        savebtn->setMaximumSize(QSize(80, 32));
        savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "After:", nullptr));
        imageDisplay_3->setText(QString());
        imageDisplay_4->setText(QString());
        resetbtn->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        loadimgbtn->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Before:", nullptr));
        Rotatebtn_2->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        blur_2->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        lightendarken_2->setText(QCoreApplication::translate("MainWindow", "lighten/darken", nullptr));
        skew_2->setText(QCoreApplication::translate("MainWindow", "Skew", nullptr));
        grayscale_2->setText(QCoreApplication::translate("MainWindow", "Grayscale", nullptr));
        blackwhitebtn_2->setText(QCoreApplication::translate("MainWindow", "Black n White", nullptr));
        invertbtn_2->setText(QCoreApplication::translate("MainWindow", "Invert", nullptr));
        merge_2->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        Flipbtn_2->setText(QCoreApplication::translate("MainWindow", "Flip", nullptr));
        addFrame_2->setText(QCoreApplication::translate("MainWindow", "Add Frame", nullptr));
        Detect_2->setText(QCoreApplication::translate("MainWindow", "Detect Edges", nullptr));
        resize_2->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
        tv_2->setText(QCoreApplication::translate("MainWindow", "Den Den Mushi/Old TV", nullptr));
        purple_2->setText(QCoreApplication::translate("MainWindow", "Purple", nullptr));
        infrared_2->setText(QCoreApplication::translate("MainWindow", "Infrared", nullptr));
        crop_2->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
        sunlight_2->setText(QCoreApplication::translate("MainWindow", "Sunlight", nullptr));
        oil_2->setText(QCoreApplication::translate("MainWindow", "Oil Painting", nullptr));
        savebtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWFIXBACKGROUND_H
