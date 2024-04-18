#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QPushButton>
#include <QMouseEvent>
#include <QPainter>
#include "imagecropwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QImage getCroppedImage() const {
        return croppedImage;
    }




private slots:
    void on_loadimgbtn_clicked();
    void on_savebtn_clicked();
    void on_resetbtn_clicked();
    void on_horizontalSlider_2_valueChanged(int value);
    void on_Rotatebtn_clicked();
    void on_blackwhitebtn_clicked();
    void on_invertbtn_clicked();
    void on_Flipbtn_clicked();
    void on_Frame_clicked();
    void on_lightendarken_clicked();
    void on_horizontalSlider_valueChanged(int value);
    void on_blur_clicked();
    void on_horizontalSlider_3_valueChanged(int value);
    void on_infrared_clicked();
    void on_grayscale_clicked();
    void on_purple_clicked();
    void on_merge_clicked();
    void on_crop_clicked();
    void on_resize_clicked();
    void on_addFrame_clicked();
    void on_Detect_clicked();
    void on_sunlight_clicked();
    void on_oil_clicked();
    void on_skew_clicked();
    void on_horizontalSlider_4_valueChanged(int value);
    void on_tv_clicked();
    void resize(QImage &image);
    void Frame(QImage &background, QImage &selectedImage, QString &position);
    void on_sepia_clicked();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;
    QImage originalFile;
    QImage file_namee;
    int rotateDeg;
    QString clickreset;
    int resetslider;
    QImage finalFile;

    // For cropping
    bool cropping;
    QPoint startCropPos;
    QPoint endCropPos;
    QImage croppedImage;
public slots:
    void cropRegionSelected(const QRect& rect) {
        // Crop the image based on the selected region
        QImage image;
        croppedImage = image.copy(rect.normalized());
    }
    void updateCroppedImage(const QRect& rect);
};

#endif // MAINWINDOW_H
