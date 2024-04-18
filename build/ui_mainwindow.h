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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout;
    QPushButton *savebtn;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *loadimgbtn;
    QPushButton *resetbtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Rotatebtn;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *blur;
    QSlider *horizontalSlider_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *lightendarken;
    QSlider *horizontalSlider_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *skew;
    QSlider *horizontalSlider_4;
    QLabel *label_7;
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
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Frame;
    QPushButton *sepia;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLabel *label_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imageDisplay;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *imageDisplay_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1626, 999);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        savebtn = new QPushButton(centralwidget);
        savebtn->setObjectName("savebtn");
        savebtn->setMinimumSize(QSize(56, 29));
        savebtn->setMaximumSize(QSize(80, 55));
        savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        savebtn->setStyleSheet(QString::fromUtf8("color: rgb(6, 170, 255);\n"
"background-color: rgba(235, 101, 44 , 0);\n"
"border-radius: 10px;\n"
"border: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(6, 170, 255);"));
        savebtn->setIconSize(QSize(86, 28));

        gridLayout->addWidget(savebtn, 0, 17, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(304, 23));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(5, 149, 223);\n"
"font: 19pt \"Segoe Script\";\n"
""));

        gridLayout->addWidget(label_2, 0, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 11, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(142, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 6, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 14, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(25, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 19, 1, 1);

        loadimgbtn = new QPushButton(centralwidget);
        loadimgbtn->setObjectName("loadimgbtn");
        loadimgbtn->setMinimumSize(QSize(56, 32));
        loadimgbtn->setMaximumSize(QSize(80, 55));
        loadimgbtn->setCursor(QCursor(Qt::PointingHandCursor));
        loadimgbtn->setStyleSheet(QString::fromUtf8("color: rgb(6, 170, 255);\n"
"background-color: rgba(235, 101, 44 , 0);\n"
"border-radius: 10px;\n"
"border: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(6, 170, 255);"));
        loadimgbtn->setIconSize(QSize(86, 28));

        gridLayout->addWidget(loadimgbtn, 0, 15, 1, 1);

        resetbtn = new QPushButton(centralwidget);
        resetbtn->setObjectName("resetbtn");
        resetbtn->setMinimumSize(QSize(56, 27));
        resetbtn->setMaximumSize(QSize(80, 55));
        resetbtn->setCursor(QCursor(Qt::PointingHandCursor));
        resetbtn->setStyleSheet(QString::fromUtf8("color: rgb(6, 170, 255);\n"
"background-color: rgba(235, 101, 44 , 0);\n"
"border-radius: 10px;\n"
"border: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(6, 170, 255);"));
        resetbtn->setIconSize(QSize(35, 28));

        gridLayout->addWidget(resetbtn, 0, 13, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(290, 827));
        groupBox->setMaximumSize(QSize(312, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8("color: white;\n"
"\n"
"border-radius: 10px;\n"
"border: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(6, 170, 255);\n"
"font: 12pt \"Segoe Script\";\n"
"font: bold;"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(207, 41));
        label_8->setMaximumSize(QSize(207, 41));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("border-style: none;"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/TweakStoreFiles/icons/TweakStore.png")));
        label_8->setScaledContents(true);

        verticalLayout_3->addWidget(label_8, 0, Qt::AlignLeft);

        verticalSpacer_12 = new QSpacerItem(20, 29, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Rotatebtn = new QPushButton(groupBox);
        Rotatebtn->setObjectName("Rotatebtn");
        Rotatebtn->setMinimumSize(QSize(104, 47));
        Rotatebtn->setCursor(QCursor(Qt::PointingHandCursor));
        Rotatebtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"	transition-duration: background color 1s ;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));
        Rotatebtn->setIconSize(QSize(25, 32));

        horizontalLayout_4->addWidget(Rotatebtn);

        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider->setMinimum(-360);
        horizontalSlider->setMaximum(360);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(64, 41));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        blur = new QPushButton(groupBox);
        blur->setObjectName("blur");
        blur->setMinimumSize(QSize(104, 41));
        blur->setCursor(QCursor(Qt::PointingHandCursor));
        blur->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));
        blur->setIconSize(QSize(25, 32));

        horizontalLayout_6->addWidget(blur);

        horizontalSlider_3 = new QSlider(groupBox);
        horizontalSlider_3->setObjectName("horizontalSlider_3");
        horizontalSlider_3->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(64, 41));

        horizontalLayout_6->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lightendarken = new QPushButton(groupBox);
        lightendarken->setObjectName("lightendarken");
        lightendarken->setMinimumSize(QSize(152, 41));
        lightendarken->setCursor(QCursor(Qt::PointingHandCursor));
        lightendarken->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_5->addWidget(lightendarken);

        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_2->setMinimum(-100);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(64, 41));
        label_6->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_5->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_11 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        skew = new QPushButton(groupBox);
        skew->setObjectName("skew");
        skew->setMinimumSize(QSize(104, 41));
        skew->setCursor(QCursor(Qt::PointingHandCursor));
        skew->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_7->addWidget(skew);

        horizontalSlider_4 = new QSlider(groupBox);
        horizontalSlider_4->setObjectName("horizontalSlider_4");
        horizontalSlider_4->setCursor(QCursor(Qt::SizeHorCursor));
        horizontalSlider_4->setMinimum(0);
        horizontalSlider_4->setMaximum(90);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_4);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(64, 41));

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        grayscale = new QPushButton(groupBox);
        grayscale->setObjectName("grayscale");
        grayscale->setMinimumSize(QSize(37, 47));
        grayscale->setCursor(QCursor(Qt::PointingHandCursor));
        grayscale->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_10->addWidget(grayscale);

        blackwhitebtn = new QPushButton(groupBox);
        blackwhitebtn->setObjectName("blackwhitebtn");
        blackwhitebtn->setMinimumSize(QSize(0, 47));
        blackwhitebtn->setCursor(QCursor(Qt::PointingHandCursor));
        blackwhitebtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_10->addWidget(blackwhitebtn);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        invertbtn = new QPushButton(groupBox);
        invertbtn->setObjectName("invertbtn");
        invertbtn->setMinimumSize(QSize(0, 47));
        invertbtn->setCursor(QCursor(Qt::PointingHandCursor));
        invertbtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_13->addWidget(invertbtn);

        merge = new QPushButton(groupBox);
        merge->setObjectName("merge");
        merge->setMinimumSize(QSize(0, 47));
        merge->setCursor(QCursor(Qt::PointingHandCursor));
        merge->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_13->addWidget(merge);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        Flipbtn = new QPushButton(groupBox);
        Flipbtn->setObjectName("Flipbtn");
        Flipbtn->setMinimumSize(QSize(0, 47));
        Flipbtn->setCursor(QCursor(Qt::PointingHandCursor));
        Flipbtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_12->addWidget(Flipbtn);

        addFrame = new QPushButton(groupBox);
        addFrame->setObjectName("addFrame");
        addFrame->setMinimumSize(QSize(0, 47));
        addFrame->setCursor(QCursor(Qt::PointingHandCursor));
        addFrame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_12->addWidget(addFrame);


        verticalLayout_3->addLayout(horizontalLayout_12);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        Detect = new QPushButton(groupBox);
        Detect->setObjectName("Detect");
        Detect->setMinimumSize(QSize(0, 47));
        Detect->setCursor(QCursor(Qt::PointingHandCursor));
        Detect->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_11->addWidget(Detect);

        resize = new QPushButton(groupBox);
        resize->setObjectName("resize");
        resize->setMinimumSize(QSize(0, 47));
        resize->setCursor(QCursor(Qt::PointingHandCursor));
        resize->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_11->addWidget(resize);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        tv = new QPushButton(groupBox);
        tv->setObjectName("tv");
        tv->setMinimumSize(QSize(0, 47));
        tv->setCursor(QCursor(Qt::PointingHandCursor));
        tv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_14->addWidget(tv);

        purple = new QPushButton(groupBox);
        purple->setObjectName("purple");
        purple->setMinimumSize(QSize(0, 47));
        purple->setCursor(QCursor(Qt::PointingHandCursor));
        purple->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_14->addWidget(purple);


        verticalLayout_3->addLayout(horizontalLayout_14);

        verticalSpacer_8 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        infrared = new QPushButton(groupBox);
        infrared->setObjectName("infrared");
        infrared->setMinimumSize(QSize(0, 47));
        infrared->setCursor(QCursor(Qt::PointingHandCursor));
        infrared->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_15->addWidget(infrared);

        crop = new QPushButton(groupBox);
        crop->setObjectName("crop");
        crop->setMinimumSize(QSize(0, 47));
        crop->setCursor(QCursor(Qt::PointingHandCursor));
        crop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_15->addWidget(crop);


        verticalLayout_3->addLayout(horizontalLayout_15);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        sunlight = new QPushButton(groupBox);
        sunlight->setObjectName("sunlight");
        sunlight->setMinimumSize(QSize(0, 47));
        sunlight->setCursor(QCursor(Qt::PointingHandCursor));
        sunlight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_8->addWidget(sunlight);

        oil = new QPushButton(groupBox);
        oil->setObjectName("oil");
        oil->setMinimumSize(QSize(0, 47));
        oil->setCursor(QCursor(Qt::PointingHandCursor));
        oil->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_8->addWidget(oil);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer_10 = new QSpacerItem(20, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Frame = new QPushButton(groupBox);
        Frame->setObjectName("Frame");
        Frame->setMinimumSize(QSize(0, 47));
        Frame->setCursor(QCursor(Qt::PointingHandCursor));
        Frame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_3->addWidget(Frame);

        sepia = new QPushButton(groupBox);
        sepia->setObjectName("sepia");
        sepia->setMinimumSize(QSize(0, 47));
        sepia->setCursor(QCursor(Qt::PointingHandCursor));
        sepia->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(13, 27, 42);\n"
"    background-color: rgb(171, 237, 253);\n"
"    border-radius: 10px;\n"
"    border: 2px solid rgb(7, 152, 228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(6, 170, 255);\n"
"	background-color: rgba(235, 101, 44 , 0);\n"
"	border-radius: 10px;\n"
"	border: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(6, 170, 255);\n"
"}"));

        horizontalLayout_3->addWidget(sepia);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 16, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(304, 23));
        label->setStyleSheet(QString::fromUtf8("color: rgb(5, 149, 223);\n"
"font: 19pt \"Segoe Script\";\n"
""));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 54));
        label_3->setMaximumSize(QSize(12, 16777215));

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(500, 904));
        frame->setMaximumSize(QSize(516, 16777208));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-color:rgb(6, 170, 255);\n"
"border-width: 3px;\n"
"border-radius: 20px;\n"
"background-color:rgb(207, 246, 255);"));
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        imageDisplay = new QLabel(frame);
        imageDisplay->setObjectName("imageDisplay");
        imageDisplay->setMinimumSize(QSize(0, 0));
        imageDisplay->setMaximumSize(QSize(562, 788));
        imageDisplay->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-width: 0 px;"));
        imageDisplay->setFrameShape(QFrame::NoFrame);
        imageDisplay->setFrameShadow(QFrame::Plain);
        imageDisplay->setLineWidth(0);
        imageDisplay->setMidLineWidth(0);
        imageDisplay->setScaledContents(false);

        horizontalLayout_2->addWidget(imageDisplay);


        gridLayout->addWidget(frame, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(19, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(500, 904));
        frame_2->setMaximumSize(QSize(516, 16777208));
        frame_2->setAutoFillBackground(false);
        frame_2->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-color:rgb(6, 170, 255);\n"
"border-width: 3px;\n"
"border-radius: 20px;\n"
"background-color:rgb(207, 246, 255);"));
        horizontalLayout_9 = new QHBoxLayout(frame_2);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        imageDisplay_2 = new QLabel(frame_2);
        imageDisplay_2->setObjectName("imageDisplay_2");
        imageDisplay_2->setMinimumSize(QSize(0, 0));
        imageDisplay_2->setMaximumSize(QSize(562, 788));
        imageDisplay_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-width: 0 px;"));
        imageDisplay_2->setFrameShape(QFrame::NoFrame);
        imageDisplay_2->setFrameShadow(QFrame::Plain);
        imageDisplay_2->setLineWidth(0);
        imageDisplay_2->setMidLineWidth(0);
        imageDisplay_2->setScaledContents(false);

        horizontalLayout_9->addWidget(imageDisplay_2);


        gridLayout->addWidget(frame_2, 1, 5, 1, 14);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(resize, &QPushButton::clicked, resetbtn, qOverload<>(&QPushButton::click));
        QObject::connect(addFrame, &QPushButton::clicked, resetbtn, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        savebtn->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "After:", nullptr));
        loadimgbtn->setText(QString());
        resetbtn->setText(QString());
        label_8->setText(QString());
        Rotatebtn->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        label_4->setText(QString());
        blur->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        label_5->setText(QString());
        lightendarken->setText(QCoreApplication::translate("MainWindow", "Lighter-Darken", nullptr));
        label_6->setText(QString());
        skew->setText(QCoreApplication::translate("MainWindow", "Skew", nullptr));
        label_7->setText(QString());
        grayscale->setText(QCoreApplication::translate("MainWindow", "GrayScale", nullptr));
        blackwhitebtn->setText(QCoreApplication::translate("MainWindow", "Black n White", nullptr));
        invertbtn->setText(QCoreApplication::translate("MainWindow", "Invert", nullptr));
        merge->setText(QCoreApplication::translate("MainWindow", "Merge", nullptr));
        Flipbtn->setText(QCoreApplication::translate("MainWindow", "Flip", nullptr));
        addFrame->setText(QCoreApplication::translate("MainWindow", "Add Frame", nullptr));
        Detect->setText(QCoreApplication::translate("MainWindow", "Detect Edges", nullptr));
        resize->setText(QCoreApplication::translate("MainWindow", "Resize", nullptr));
        tv->setText(QCoreApplication::translate("MainWindow", "Old-TV", nullptr));
        purple->setText(QCoreApplication::translate("MainWindow", "Purple", nullptr));
        infrared->setText(QCoreApplication::translate("MainWindow", "Infrared", nullptr));
        crop->setText(QCoreApplication::translate("MainWindow", "Crop", nullptr));
        sunlight->setText(QCoreApplication::translate("MainWindow", "Sunlight", nullptr));
        oil->setText(QCoreApplication::translate("MainWindow", "Oil Painting", nullptr));
        Frame->setText(QCoreApplication::translate("MainWindow", "Add to corner", nullptr));
        sepia->setText(QCoreApplication::translate("MainWindow", "Sepia", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Before:", nullptr));
        label_3->setText(QString());
        imageDisplay->setText(QString());
        imageDisplay_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
