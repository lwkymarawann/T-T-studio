#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QImage>
#include <QVector>
#include <QQueue>
// #include <iostream>
#include <QTransform>
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <QDebug>
#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPainter>
#include <QInputDialog>
#include <QPushButton>
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QFormLayout>
#include <QRandomGenerator>
#include <QtGui>
#include <QRgb>
#include <cmath>
#include <QColor>
#include <QColorDialog>
#include <QMovie>
#include "imagecropwidget.h"
#include "stripedframewidget.h"


StripedFrameWidget::StripedFrameWidget(const QColor& color1, const QColor& color2, int width, QWidget *parent)
    : QWidget(parent), color1_(color1), color2_(color2), width_(width) {}

void StripedFrameWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Define the rectangle for the frame
    QRect frameRect = rect().adjusted(width_ / 2, width_ / 2, -width_ / 2, -width_ / 2);

    // Fill the background with color1
    painter.fillRect(rect(), color1_);

    // Draw the striped frame
    painter.setPen(Qt::NoPen);
    painter.setBrush(color2_);
    painter.drawRect(frameRect);

    // Calculate the width and height of each stripe
    int stripeWidth = width_ * 2;
    int numRows = height() / stripeWidth + 2;

    // Draw the horizontal stripes
    for (int i = 0; i < numRows; ++i) {
        QRect stripeRect = frameRect;
        stripeRect.setTop(stripeWidth * i);
        stripeRect.setHeight(stripeWidth);
        painter.fillRect(stripeRect, (i % 2 == 0) ? color1_ : color2_);
    }
}

static int z;
static int lightendarken;
static QImage bwimage;
int imageIn = 0;
static int q;
static QImage resizedImg;

void blackNwhite(QImage &image) {
    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            QRgb pixel = image.pixel(x, y);
            int intensity = qGray(pixel); // Get the grayscale intensity of the pixel
            if (intensity < 127) {
                // If intensity is less than 127, set the pixel to black
                image.setPixel(x, y, qRgb(0, 0, 0)); // Black color
            } else {
                // Otherwise, set the pixel to white
                image.setPixel(x, y, qRgb(255, 255, 255)); // White color
            }
        }
    }
}







QImage addFrameToImage(const QImage &image, int frameWidth, const QColor &color1, const QColor &color2) {
    const int numFrames = 3; // Total number of frames

    // Create a new image with the same dimensions as the input image
    QImage framedImage(image.size(), image.format());

    // Create a painter to draw on the new image
    QPainter painter(&framedImage);

    // Draw the original image onto the new image
    painter.drawImage(QPoint(0, 0), image);

    // Draw the frames
    for (int i = 0; i < numFrames; ++i) {
        // Calculate frame thickness for this frame
        int currentFrameWidth = frameWidth / 10 * (i + 1);
        if (currentFrameWidth > 12) {
            currentFrameWidth = 12; // Limit white frame thickness to 12 pixels
        }

        // Calculate frame color
        QColor frameColor = (i % 2 == 0) ? color1 : Qt::white;

        // Calculate frame rectangle
        QRect frameRect(i * currentFrameWidth, i * currentFrameWidth, image.width() - 2 * i * currentFrameWidth, image.height() - 2 * i * currentFrameWidth);

        // Ensure that the frame does not cover the entire image
        int maxFrameWidth = qMin(frameRect.width(), frameRect.height()) / 2;
        if (currentFrameWidth > maxFrameWidth) {
            currentFrameWidth = maxFrameWidth;
        }

        // Draw only the border of the frame
        painter.setPen(frameColor);
        for (int j = 0; j < currentFrameWidth; ++j) {
            QRect borderRect = frameRect.adjusted(j, j, -j, -j);
            painter.drawRect(borderRect);
        }
    }

    return framedImage;
}

static QImage framedFile;

void edges(const QImage& inputImage, QImage& outputImage) {
    outputImage = inputImage.convertToFormat(QImage::Format_ARGB32);

    int width = inputImage.width();
    int height = inputImage.height();

    // Iterate through each pixel of the image
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            // Get the color of the current pixel
            QRgb pixel = inputImage.pixel(x, y);

            // Get the grayscale value of the pixel
            int gray = qGray(pixel);

            // Perform edge detection using a simple Sobel operator
            // You can replace this with more advanced edge detection algorithms if needed
            int edgeMagnitude = qAbs(qGray(inputImage.pixel(x - 1, y - 1)) +
                                     2 * qGray(inputImage.pixel(x - 1, y)) +
                                     qGray(inputImage.pixel(x - 1, y + 1)) -
                                     qGray(inputImage.pixel(x + 1, y - 1)) -
                                     2 * qGray(inputImage.pixel(x + 1, y)) -
                                     qGray(inputImage.pixel(x + 1, y + 1)));

            // Threshold the edge magnitude
            if (edgeMagnitude > 100) { // Adjust the threshold value as needed
                outputImage.setPixel(x, y, QColor(Qt::black).rgb()); // Set edge pixels to black
            } else {
                outputImage.setPixel(x, y, QColor(Qt::white).rgb()); // Set non-edge pixels to white
            }
        }
    }
}

void oil(QImage &image, double gammaValue) {
    // Iterate through each pixel
    for (int y = 0; y < image.height(); ++y) {
        QRgb *scanLine = reinterpret_cast<QRgb*>(image.scanLine(y));
        for (int x = 0; x < image.width(); ++x) {
            QRgb &pixel = scanLine[x];

            // Extract RGB components
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Apply gamma adjustment to each color channel
            red = qBound(0, static_cast<int>(255.0 * pow(red / 255.0, gammaValue)), 255);
            green = qBound(0, static_cast<int>(255.0 * pow(green / 255.0, gammaValue)), 255);
            blue = qBound(0, static_cast<int>(255.0 * pow(blue / 255.0, gammaValue)), 255);

            // Set the adjusted pixel color
            pixel = qRgb(red, green, blue);
        }
    }
}






void DenDen(QImage &image) {
    if (image.isNull()) {
        qDebug() << "Invalid image!";
        return;
    }

    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            // Get the color of the current pixel
            QRgb pixel = image.pixel(x, y);

            int redNoise = rand() % 101 - 50;
            int greenNoise = rand() % 101 - 50;
            int blueNoise = rand() % 101 - 50;

            int newRed = qBound(0, qRed(pixel) + redNoise, 255);
            int newGreen = qBound(0, qGreen(pixel) + greenNoise, 255);
            int newBlue = qBound(0, qBlue(pixel) + blueNoise, 255);

            if (rand() % 5 == 0) {
                newRed = qBound(0, newRed + rand() % 101 - 50, 255);
                newGreen = qBound(0, newGreen + rand() % 101 - 50, 255);
                newBlue = qBound(0, newBlue + rand() % 101 - 50, 255);
            }



            image.setPixel(x, y, qRgb(newRed, newGreen, newBlue));
        }
    }
}

void MainWindow::resize(QImage &image) {
    // Get the width from the user
    bool ok;
    int width = QInputDialog::getInt(this, tr("Enter New Dimensions"),
                                     tr("Width:"), image.width(),
                                     1, 10000, 1, &ok);
    if (!ok) return;

    // Get the height from the user
    int height = QInputDialog::getInt(this, tr("Enter New Dimensions"),
                                      tr("Height:"), image.height(),
                                      1, 10000, 1, &ok);
    if (!ok) return;

    // Resize the image while maintaining aspect ratio
    image = image.scaled(QSize(width, height), Qt::KeepAspectRatio);
    QPixmap pix = QPixmap::fromImage(image);
    ui->imageDisplay_2->setPixmap(pix.scaled(QSize(width, height), Qt::KeepAspectRatio));
}



void skewImage(const QImage& inputImage, QImage& outputImage, int angle) {
    if (inputImage.isNull()) {
        qDebug() << "Input image is null!";
        return;
    }

    qreal angleRad = qDegreesToRadians(-angle);
    qreal shearX = -qTan(angleRad);

    int newWidth = inputImage.width() + qAbs(inputImage.height() * shearX);
    int newHeight = inputImage.height();

    outputImage = QImage(newWidth, newHeight, inputImage.format());
    outputImage.fill(Qt::transparent);

    QPainter painter(&outputImage);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);


    painter.setTransform(QTransform().shear(shearX, 0));


    painter.drawImage(QPoint(0, 0), inputImage);


    painter.end();
}








void addSunlight(QImage &image) {
    int width = image.width();
    int height = image.height();

    // Iterate through each pixel in the image
    for (int y = 0; y < height; ++y) {
        // Calculate the factor for the current row's intensity
        double intensityFactor = static_cast<double>(height - y) / height;

        // Increase opacity for both top and bottom parts
        int alpha = qMin(static_cast<int>(50 * (1.0 - intensityFactor)), 255);

        // Iterate through each pixel in the current row
        for (int x = 0; x < width; ++x) {
            // Get the color of the current pixel
            QRgb pixel = image.pixel(x, y);

            // Separate the color channels
            int red = qRed(pixel);
            int green = qGreen(pixel);
            int blue = qBlue(pixel);

            // Calculate the yellowish tint based on the intensity factor
            red = qMin(255, red + static_cast<int>((255 - red) * intensityFactor));
            green = qMin(255, green + static_cast<int>((255 - green) * intensityFactor));
            // Blue is reduced to give a yellowish tint
            blue = static_cast<int>(blue + (255 - blue) * intensityFactor * 0.5);

            // Set the new color for the pixel with increased opacity
            image.setPixel(x, y, qRgba(red, green, blue, alpha));
        }
    }
}








void MainWindow::Frame(QImage &background, QImage &selectedImage, QString &position) {
    // First, create an information dialog to display the original width and height
    QDialog infoDialog(this);
    QVBoxLayout infoLayout(&infoDialog);

    int originalWidth = selectedImage.width();
    int originalHeight = selectedImage.height();

    QLabel originalWidthLabel("Original Width: " + QString::number(originalWidth), &infoDialog);
    QLabel originalHeightLabel("Original Height: " + QString::number(originalHeight), &infoDialog);

    infoLayout.addWidget(&originalWidthLabel);
    infoLayout.addWidget(&originalHeightLabel);

    QPushButton infoOkButton("OK", &infoDialog);
    infoLayout.addWidget(&infoOkButton);

    connect(&infoOkButton, &QPushButton::clicked, &infoDialog, &QDialog::accept);

    infoDialog.setWindowTitle("Original Image Information");
    infoDialog.exec();

    // Second, create a dialog to prompt the user for the desired width and height
    QDialog dialog(this);
    QVBoxLayout layout(&dialog);

    QLineEdit widthLineEdit(&dialog);
    QLineEdit heightLineEdit(&dialog);

    layout.addWidget(new QLabel("Enter Width:", &dialog));
    layout.addWidget(&widthLineEdit);
    layout.addWidget(new QLabel("Enter Height:", &dialog));
    layout.addWidget(&heightLineEdit);

    QPushButton acceptButton("OK", &dialog);
    layout.addWidget(&acceptButton);

    connect(&acceptButton, &QPushButton::clicked, &dialog, &QDialog::accept);

    if (dialog.exec() == QDialog::Accepted) {
        int width = widthLineEdit.text().toInt();
        int height = heightLineEdit.text().toInt();

        QPoint pos;

        QSize scaledSize = selectedImage.size();
        scaledSize.scale(width, height, Qt::KeepAspectRatio);

        if (position == "TopRight") {
            pos = QPoint(background.width() - scaledSize.width(), 0);
        } else if (position == "BottomRight") {
            pos = QPoint(background.width() - scaledSize.width(), background.height() - scaledSize.height());
        } else if (position == "TopLeft") {
            pos = QPoint(0, 0);
        } else if (position == "BottomLeft") {
            pos = QPoint(0, background.height() - scaledSize.height());
        } else {
            qDebug() << "Invalid position specified!";
            return;
        }

        // Draw the scaled processed image onto the background at the calculated position
        QPainter painter(&background);
        painter.drawImage(QRect(pos, scaledSize), selectedImage);
        painter.end();

        // Update the display
        ui->imageDisplay_2->setPixmap(QPixmap::fromImage(background));
        ui->imageDisplay_2->adjustSize();
    }
}






void crop(QImage &image) {
    int originalWidth = image.width();
    int originalHeight = image.height();


    QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
   QMessageBox msgBox;
    msgBox.setWindowTitle("Original Size");
    msgBox.setText(QString("Original Width: %1\nOriginal Height: %2").arg(originalWidth).arg(originalHeight));
    msgBox.setIconPixmap(icon.pixmap(QSize(64, 64)));
    msgBox.exec();

    // Display the image in a custom widget
    ImageCropWidget cropWidget(image);
    cropWidget.show();

    // Wait for the widget to close
    cropWidget.exec();

    // Retrieve the cropped image
    image = cropWidget.getCroppedImage();

}



void merge(const QImage &image, const QString &outputImage, QWidget *parent) {
    // Check if the image is null
    if (image.isNull()) {
        qDebug() << "Failed to load first image";
        return;
    }

    // Open a file dialog to choose the second image
    QString secondImagePath = QFileDialog::getOpenFileName(parent, "Select Second Image", "", "Images (*.png *.jpg *.bmp)");

    if (secondImagePath.isEmpty()) {
        qDebug() << "No second image selected";
        return;
    }

    // Load the second image
    QImage secondImage(secondImagePath);
    if (secondImage.isNull()) {
        qDebug() << "Failed to load second image";
        return;
    }

    // Resize the second image to match the size of the first image without maintaining aspect ratio
    secondImage = secondImage.scaled(image.size(), Qt::IgnoreAspectRatio);

    // Create a QPixmap to draw onto
    QPixmap mergedPixmap(image.size());
    mergedPixmap.fill(Qt::transparent);

    // QPainter to draw onto the pixmap
    QPainter painter(&mergedPixmap);

    // Draw the first image
    painter.drawImage(0, 0, image);

    // Set opacity for both images
    painter.setOpacity(0.5);

    // Draw the second image with opacity
    painter.drawImage(0, 0, secondImage);

    // Save the merged image
    if (!mergedPixmap.save(outputImage)) {
        qDebug() << "Failed to save merged image";
    }
}

QImage normalFrame(const QImage &image, int width, const QColor &color) {
    // Create a new image with extra space for the frame
    QImage framedImage(image.width() + 2 * width, image.height() + 2 * width, image.format());

    // Fill the new image with the frame color
    framedImage.fill(color);

    // Draw the original image onto the new image with an offset for the frame
    QPainter painter(&framedImage);
    painter.drawImage(width, width, image);
    painter.end();

    return framedImage;
}


void grayScale(QImage &image)
{
    image = image.convertToFormat(QImage::Format_Grayscale8);
}

void purple(QImage &image){
    // Loop through each pixel in the image
    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            // Get the color of the current pixel
            QRgb color = image.pixel(x, y);

            // Extract individual color channels
            int red = qRed(color);
            int green = qGreen(color);
            int blue = qBlue(color);
            int newRed = qMin(255, red + 50);
            int newGreen = qMax(0, green - 50);
            int newBlue = qMin(255, blue + 50);


            image.setPixel(x, y, qRgb(newRed, newGreen, newBlue));
        }
    }
}


QImage sepia(const QImage& image) {
    if (image.isNull()) {
        return QImage();
    }

    QImage resultImage = image;

    int width = image.width();
    int height = image.height();

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            QRgb pixel = image.pixel(x, y);

            // Calculate new color components with sepia effect
            int newRed = qRed(pixel) * 0.393 + qGreen(pixel) * 0.769 + qBlue(pixel) * 0.189;
            int newGreen = qRed(pixel) * 0.349 + qGreen(pixel) * 0.686 + qBlue(pixel) * 0.168;
            int newBlue = qRed(pixel) * 0.272 + qGreen(pixel) * 0.534 + qBlue(pixel) * 0.131;

            // Clamp values to [0, 255]
            newRed = qBound(0, newRed, 255);
            newGreen = qBound(0, newGreen, 255);
            newBlue = qBound(0, newBlue, 255);

            resultImage.setPixel(x, y, qRgb(newRed, newGreen, newBlue));
        }
    }

    return resultImage;
}
void infrared(QImage &image){

    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {

            QRgb color = image.pixel(x, y);


            int red = qRed(color);
            int green = qGreen(color);
            int blue = qBlue(color);
            int newRed = qMin(255, red + 100);
            int newGreen = qMax(0, green - 50);
            int newBlue = qMax(0, blue - 50);

            image.setPixel(x, y, qRgb(newRed, newGreen, newBlue));
        }
    }
}

void blurImage(QImage &image, int blurRadius) {
    QImage originalImage = image.copy();

    for (int y = 0; y < image.height(); y += 1) {
        for (int x = 0; x < image.width(); x += 1) {
            int sumRed = 0, sumGreen = 0, sumBlue = 0, count = 0;
            for (int dy = -blurRadius; dy <= blurRadius; ++dy) {
                for (int dx = -blurRadius; dx <= blurRadius; ++dx) {
                    int nx = qBound(0, x +   dx, image.width() - 1);
                    int ny = qBound(0, y + dy, image.height() - 1);
                    QRgb pixel = originalImage.pixel(nx, ny);
                    sumRed += qRed(pixel);
                    sumGreen += qGreen(pixel);
                    sumBlue += qBlue(pixel);
                    ++count;
                }
            }

            int avgRed = sumRed / count;
            int avgGreen = sumGreen / count;
            int avgBlue = sumBlue / count;
            image.setPixel(x, y, qRgb(avgRed, avgGreen, avgBlue));
        }
    }
}

void makeBrighter(QImage &image, int lightendarken) {
    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            QRgb pixel = image.pixel(x, y);
            int red = qRed(pixel) + lightendarken;
            int green = qGreen(pixel) + lightendarken;
            int blue = qBlue(pixel) + lightendarken;
            red = qBound(0, red, 255);
            green = qBound(0, green, 255);
            blue = qBound(0, blue, 255);
            image.setPixel(x, y, qRgb(red, green, blue));
        }
    }
}

void makeDarker(QImage &image, int intensity) {

    for (int y = 0; y < image.height(); ++y) {
        for (int x = 0; x < image.width(); ++x) {
            QRgb pixel = image.pixel(x, y);
            int red = qRed(pixel) - intensity;
            int green = qGreen(pixel) - intensity;
            int blue = qBlue(pixel) - intensity;

            red = qBound(0, red, 255);
            green = qBound(0, green, 255);
            blue = qBound(0, blue, 255);
            image.setPixel(x, y, qRgb(red, green, blue));
        }
    }
}

void invertImage(QImage &image) {
    for (int y = 0; y < image.height(); ++y) {
        QRgb *scanLine = reinterpret_cast<QRgb*>(image.scanLine(y));
        for (int x = 0; x < image.width(); ++x) {
            *scanLine = qRgb(255 - qRed(*scanLine),
                             255 - qGreen(*scanLine),
                             255 - qBlue(*scanLine));
            ++scanLine;
        }
    }
}


QImage flip(const QImage &image) {
    QImage flippedImage = image.mirrored(true, false);
    return flippedImage;
}

QImage convertToBlackAndWhite(const QImage &image) {
    QImage bwImage = image.convertToFormat(QImage::Format_Grayscale8);

    for (int y = 0; y < bwImage.height(); ++y) {
        for (int x = 0; x < bwImage.width(); ++x) {
            // Get the pixel value at (x, y)
            QRgb pixel = bwImage.pixel(x, y);

            int average = qGray(pixel);

            (bwImage.setPixel(x, y, qRgb(average, average, average)));
            bwimage = QImage(bwImage);
        }
    }

    return bwImage;
}


void flipVertically(QImage &image) {
    image = image.mirrored(false, true);
    QImage file_namee = image;
}

// Function to flip the image horizontally
void flipHorizontally(QImage &image) {
    image = image.mirrored(true, false);
    QImage file_namee = image;
}

// Function to prompt the user for flipping direction and apply the flip
void flipImage(QImage &image) {
    QMessageBox msgBox;
    QString option1;
    QString option2;
    msgBox.setWindowTitle("FLIP");
    msgBox.setText("How do you want to flip this image");
    QPushButton *option1Button = msgBox.addButton(("vertically"), QMessageBox::AcceptRole);
    QPushButton *option2Button = msgBox.addButton(("Horizontally"), QMessageBox::AcceptRole);
    msgBox.exec();

    if (msgBox.clickedButton() == option1Button) {
        flipVertically(image);
    } else if (msgBox.clickedButton() == option2Button){
        flipHorizontally(image);
    }
}

void addFrameWithLines(QImage &image) {

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon resetIcon("D://Qt//projects//PhotoshopGui//TweakStoreFiles//icons//reset.png");
    QIcon saveIcon("D://Qt//projects//PhotoshopGui//TweakStoreFiles//icons//download-file.png");
    QIcon loadIcon("D://Qt//projects//PhotoshopGui//TweakStoreFiles//icons//folder-upload (1).png");

    ui->resetbtn->setIcon(resetIcon);
    ui->savebtn->setIcon(saveIcon);
    ui->loadimgbtn->setIcon(loadIcon);

    QSize iconSize(23,23 );
    ui->resetbtn->setIconSize(iconSize);
    ui->savebtn->setIconSize(iconSize);
    ui->loadimgbtn->setIconSize(iconSize);


    ui->horizontalSlider_4->setStyleSheet("QSlider { width: 0; height: 0; } QSlider::handle { visibility: hidden; }");
    ui->horizontalSlider_3->setStyleSheet("QSlider { width: 0; height: 0; } QSlider::handle { visibility: hidden; }");
    ui->horizontalSlider->setStyleSheet("QSlider { width: 0; height: 0; } QSlider::handle { visibility: hidden; }");
    ui->horizontalSlider_2->setStyleSheet("QSlider { width: 0; height: 0; } QSlider::handle { visibility: hidden; }");



    showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loadimgbtn_clicked()
{

    QString file_name = QFileDialog::getOpenFileName(this, tr("Open file"), QDir::homePath(), tr("Image (*.png *.xpm *jpg)"));


    if(!file_name.isEmpty()){
        int imagen = 1;
        imageIn = imagen;
        QMessageBox::information(this ,"...." , file_name);
        QImage img(file_name);
        QPixmap pix = QPixmap::fromImage(img);
        originalFile = QImage(file_name);
        int w = ui->imageDisplay->width();
        int h = ui->imageDisplay->height();
        ui->imageDisplay->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
        file_namee = QImage(file_name);
    }
    ui->horizontalSlider_3->setStyleSheet("");
    ui->horizontalSlider->setStyleSheet("");
    ui->horizontalSlider_2->setStyleSheet("");
    ui->horizontalSlider_4->setStyleSheet("");

    ui->label_4->setText("0");
    ui->label_5->setText("0");
    ui->label_6->setText("0");
    ui->label_7->setText("0");



}



void MainWindow::on_savebtn_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
        QString savePath = QFileDialog::getSaveFileName(this, "Save Image", QDir::homePath(), "Images (*.png *.jpg *.bmp)");
        if (savePath.isEmpty()) {
            qDebug() << "No save path selected.";
            return;
        }

        if (!file_namee.save(savePath)) {
            qDebug() << "Failed to save image.";
            qDebug() << "Error: " << file_namee.save(savePath);
            return;
        }


        QPixmap pix = QPixmap::fromImage(file_namee);
        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

        QMessageBox::information(this, "Image saved successfully to:", savePath);
    }
}

void MainWindow::on_resetbtn_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    file_namee = originalFile;
    QPixmap pix = QPixmap::fromImage(originalFile);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));



    rotateDeg = 0;
    ui->horizontalSlider_3->setValue(0);
    ui->horizontalSlider->setValue(0);
    ui->horizontalSlider_2->setValue(0);
    ui->horizontalSlider_4->setValue(0);
    }

}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    rotateDeg = value;
    QString tmp = tr("%1").arg(value);
    ui->label_4->setText(QString(tmp));


}

void MainWindow::on_Rotatebtn_clicked()
{
    if(imageIn == 0){
        rotateDeg = 0;
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
        ui->horizontalSlider->setValue(0);

    }
    else if(imageIn == 1){

        file_namee = file_namee.transformed(QTransform().rotate(rotateDeg));

        // Update QLabel with the rotated image
        QPixmap pix = QPixmap::fromImage(file_namee);
        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        rotateDeg = 0;
        finalFile = file_namee;
        file_namee = originalFile;



    }

}

void MainWindow::on_blackwhitebtn_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
        blackNwhite(file_namee);
        QPixmap pix = QPixmap::fromImage(file_namee);
        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }
}



void MainWindow::on_invertbtn_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
        invertImage(file_namee);
        QPixmap pix = QPixmap::fromImage(file_namee);
        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }

}



void MainWindow::on_Flipbtn_clicked()
{
    if(imageIn == 0){
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
        flipImage(file_namee);
        QPixmap pix = QPixmap::fromImage(file_namee);
        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    }
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    lightendarken = value;
    QString tmp = tr("%1").arg(value);
    ui->label_6->setText(QString(tmp));

}

void MainWindow::on_lightendarken_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
        ui->horizontalSlider_2->setValue(0);
    } else if (imageIn == 1) {
        makeDarker(file_namee, lightendarken);
        QPixmap pix = QPixmap::fromImage(file_namee);
        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));


    }

}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    z = value;
    QString tmp = tr("%1").arg(value);
    ui->label_5->setText(QString(tmp));
}



void MainWindow::on_blur_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){

    blurImage(file_namee, z);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }


}





void MainWindow::on_infrared_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    infrared(file_namee);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }

}




void MainWindow::on_grayscale_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    grayScale(file_namee);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }
}


void MainWindow::on_purple_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    purple(file_namee);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }
}




void MainWindow::on_merge_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if (imageIn == 1) {
        QString savePath = "D://Downloads-Ddrive//merged_image.png"; // Provide a valid path where you want to save the merged image
        merge(file_namee, savePath, this);
        QPixmap pix(savePath);
        if (!pix.isNull()) {
            int w = ui->imageDisplay_2->width();
            int h = ui->imageDisplay_2->height();
            ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        } else {
            qDebug() << "Failed to load merged image";
        }
    }
}


void MainWindow::on_crop_clicked() {
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    // Create an instance of ImageCropWidget with the original image
    ImageCropWidget cropWidget(originalFile);

    // Connect the cropRegionSelected signal to a slot that updates the UI
    connect(&cropWidget, &ImageCropWidget::cropRegionSelected, this, &MainWindow::updateCroppedImage);

    // Execute the dialog
    int result = cropWidget.exec();

    // Check if the user accepted the dialog
    if (result == QDialog::Accepted) {
        // No need to retrieve the cropped image here; it will be handled by the slot
        // Update the original image with the cropped one if necessary
        // originalFile = croppedImage;

        // The UI update will be handled by the slot connected to cropRegionSelected signal
    }
}
}



void MainWindow::updateCroppedImage(const QRect& rect) {
    // Crop the original image using the selected region (rect)
    QImage croppedImage = originalFile.copy(rect.normalized());

    // Update the UI to display the cropped image
    QPixmap pix = QPixmap::fromImage(croppedImage);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (cropping && event->button() == Qt::LeftButton) {
        startCropPos = event->pos();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (cropping) {
        endCropPos = event->pos();
        update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if (cropping && event->button() == Qt::LeftButton) {
        endCropPos = event->pos();
        cropping = false;

        // Calculate the selected region
        QRect selectedRect(startCropPos, endCropPos);

        // Crop the image using the selected region
        QImage croppedImage = originalFile.copy(selectedRect);
        // Do something with the cropped image, like displaying it in another widget or saving it
    }
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QMainWindow::paintEvent(event);

    if (cropping) {
        QPainter painter(this);
        painter.setBrush(QColor(255, 255, 255, 128));
        QRect cropRect(startCropPos, endCropPos);
        painter.drawRect(cropRect);
    }
}





void MainWindow::on_resize_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){


    resize(file_namee);
    }
}



void MainWindow::on_addFrame_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1) {

        QColor frameColor = QColorDialog::getColor(Qt::black, this, tr("Select Frame Color"), QColorDialog::DontUseNativeDialog);
        if (!frameColor.isValid()) // If the user cancels the dialog or picks an invalid color
            return;

        bool ok;
        int frameWidth = QInputDialog::getInt(this, tr("Frame Width"), tr("Enter Frame Width:"), 10, 1, 100, 1, &ok);
        if (!ok)
            return;

        QColor frameColor2(Qt::white);
        QMessageBox msgBox;
        QString option1;
        QString option2;
        msgBox.setWindowTitle("Frame");
        msgBox.setText("What type of frame would you like?");
        QPushButton *option1Button = msgBox.addButton(("Frame"), QMessageBox::AcceptRole);
        QPushButton *option2Button = msgBox.addButton(("Fancy Frame"), QMessageBox::AcceptRole);
        msgBox.exec();

        if (msgBox.clickedButton() == option1Button) {
            QImage framedImage = normalFrame(file_namee, frameWidth, frameColor);
            int w = ui->imageDisplay_2->width();
            int h = ui->imageDisplay_2->height();
            ui->imageDisplay_2->setPixmap(QPixmap::fromImage(framedImage).scaled(w, h, Qt::KeepAspectRatio));
        } else if (msgBox.clickedButton() == option2Button){
            QImage framedImage = addFrameToImage(file_namee, frameWidth, frameColor , frameColor2);
            int w = ui->imageDisplay_2->width();
            int h = ui->imageDisplay_2->height();
            ui->imageDisplay_2->setPixmap(QPixmap::fromImage(framedImage).scaled(w, h, Qt::KeepAspectRatio));
        }

        // Display the framed image

    }
}



void MainWindow::on_Frame_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
        QString file1 = QFileDialog::getOpenFileName(this, tr("Open file"), QDir::homePath(), tr("Image (*.png *.xpm *jpg)"));
        if(file1.isEmpty()) return;

        QImage pic(file1);
        if(pic.isNull()) {
            QMessageBox::warning(this, tr("Error"), tr("Failed to load image."));
            return;
        }

        QString position;
        QMessageBox msgBox;
        msgBox.setWindowTitle(tr("Choose A Corner"));
        msgBox.setText(tr("Please Choose one of the following Positions"));
        QPushButton *option1Button = msgBox.addButton(tr("Top Right"), QMessageBox::AcceptRole);
        QPushButton *option2Button = msgBox.addButton(tr("Bottom Right"), QMessageBox::AcceptRole);
        QPushButton *option3Button = msgBox.addButton(tr("Top Left"), QMessageBox::AcceptRole);
        QPushButton *option4Button = msgBox.addButton(tr("Bottom Left"), QMessageBox::AcceptRole);
        msgBox.exec();

        if (msgBox.clickedButton() == option1Button)
            position = "TopRight";
        else if (msgBox.clickedButton() == option2Button)
            position = "BottomRight";
        else if (msgBox.clickedButton() == option3Button)
            position = "TopLeft";
        else if (msgBox.clickedButton() == option4Button)
            position = "BottomLeft";
        else
            return;

        Frame(file_namee, pic, position);

        int w = ui->imageDisplay_2->width();
        int h = ui->imageDisplay_2->height();
        ui->imageDisplay_2->setPixmap(QPixmap::fromImage(file_namee).scaled(w, h, Qt::KeepAspectRatio));

    }
}





/*
void MainWindow::on_addFrame_clicked()
{
    if (imageIn == 0) {
QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D://Downloads-Ddrive//LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    QString frame = QFileDialog::getOpenFileName(this, tr("Open file"), QDir::homePath(), tr("Image (*.png *.xpm *jpg)"));
    QMessageBox msgBox;
    msgBox.setWindowTitle(tr("Choose Resized Option"));
    msgBox.setText(tr("Choose one of the following options for the resized picture:"));

    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QString option1;
    QString option2;
    QString option3;
    QString option4;

    QPushButton *option1Button = msgBox.addButton(tr("Top Right").arg(option1), QMessageBox::AcceptRole);
    QPushButton *option2Button = msgBox.addButton(tr("Bottom Right").arg(option2), QMessageBox::AcceptRole);
    QPushButton *option3Button = msgBox.addButton(tr("Top Left").arg(option3), QMessageBox::AcceptRole);
    QPushButton *option4Button = msgBox.addButton(tr("Bottom Left").arg(option4), QMessageBox::AcceptRole);
    QImage framee(frame);
    msgBox.exec();
    if (msgBox.clickedButton() == option1Button){

        QPixmap pix = QPixmap::fromImage(framee);
        int w = ui->imageDisplay_4->width();
        int h = ui->imageDisplay_4->height();
        ui->imageDisplay_4->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        ui->imageDisplay_4->setStyleSheet("");


    }
    else if (msgBox.clickedButton() == option2Button){
        QPixmap pix = QPixmap::fromImage(framee);
        int w = ui->imageDisplay_3->width();
        int h = ui->imageDisplay_3->height();
        ui->imageDisplay_3->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        ui->imageDisplay_3->setStyleSheet("");

    }
    else if (msgBox.clickedButton() == option3Button){
        QPixmap pix = QPixmap::fromImage(framee);
        int w = ui->imageDisplay_5->width();
        int h = ui->imageDisplay_5->height();
        ui->imageDisplay_5->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        ui->imageDisplay_5->setStyleSheet("");

    }
    else if (msgBox.clickedButton() == option4Button){
        QPixmap pix = QPixmap::fromImage(framee);
        int w = ui->imageDisplay_6->width();
        int h = ui->imageDisplay_6->height();
        ui->imageDisplay_6->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        ui->imageDisplay_6->setStyleSheet("");

    }
}
*/




void MainWindow::on_Detect_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    edges(file_namee , finalFile);
    QPixmap pix = QPixmap::fromImage(finalFile);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }
}


void MainWindow::on_sunlight_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    addSunlight(file_namee);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }
}


void MainWindow::on_oil_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    oil(file_namee , 1.5);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }

}



void MainWindow::on_skew_clicked() {
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    } else if (imageIn == 1) {
        QImage finalFile;
        QColor backgroundColor = QColor(207, 246, 255);
        skewImage(file_namee, finalFile, q);

        // Determine the maximum width and height for the display area
        int maxWidth = ui->imageDisplay_2->width();
        int maxHeight = ui->imageDisplay_2->height();

        // Scale down the skewed image if its dimensions exceed the maximum
        finalFile = finalFile.scaled(maxWidth, maxHeight, Qt::KeepAspectRatio);

        // Update the UI to display the skewed image
        QPixmap pix = QPixmap::fromImage(finalFile);
        ui->imageDisplay_2->setPixmap(pix);
    }
}


void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    q = value;
    QString tmp = tr("%1").arg(value);
    ui->label_7->setText(QString(tmp));

}


void MainWindow::on_tv_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    DenDen(file_namee);
    QPixmap pix = QPixmap::fromImage(file_namee);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }

}


// void MainWindow::on_pushButton_clicked()
// {
//     if (imageIn == 0) {
//         QMessageBox msgBox;
//         msgBox.setWindowTitle("No Image");
//         msgBox.setText("Please import an image first.");
//         msgBox.exec();
//     }
//     else if(imageIn == 1){
//         addFrameWithLines(file_namee);
//         QPixmap pix = QPixmap::fromImage(file_namee);
//         int w = ui->imageDisplay_2->width();
//         int h = ui->imageDisplay_2->height();
//         ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
//     }

// }



void MainWindow::on_sepia_clicked()
{
    if (imageIn == 0) {
        QMessageBox msgBox;
        msgBox.setWindowTitle("No Image");
        msgBox.setText("Please import an image first.");
        QIcon icon("D:/Downloads-Ddrive/LogoForPhotoshop-removebg-preview.png");
        msgBox.setWindowIcon(icon);
        msgBox.exec();
    }
    else if(imageIn == 1){
    QImage newpic = sepia(file_namee);
    QPixmap pix = QPixmap::fromImage(newpic);
    int w = ui->imageDisplay_2->width();
    int h = ui->imageDisplay_2->height();
    ui->imageDisplay_2->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    }
}

