#ifndef IMAGECROPWIDGET_H
#define IMAGECROPWIDGET_H

#include <QDialog>
#include <QImage>
#include <QMouseEvent>
#include <QPainter>
#include <QApplication>


class ImageCropWidget : public QDialog {
    Q_OBJECT

public:
    ImageCropWidget(const QImage& image, QWidget *parent = nullptr)
        : QDialog(parent), image(image), dragging(false) {
        setFixedSize(image.size());
        setMouseTracking(true);
    }

    QImage getCroppedImage() const {
        return croppedImage;
    }

protected:
    void mousePressEvent(QMouseEvent *event) override {
        if (event->button() == Qt::LeftButton) {
            startDragPos = event->pos();
            dragging = true;
        }
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        if (dragging) {
            endDragPos = event->pos();
            update();
        }
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        if (dragging) {
            endDragPos = event->pos();
            dragging = false;

            // Calculate the selected region
            QRect selectedRect = QRect(startDragPos, endDragPos).normalized();

            // Emit signal with selected region
            emit cropRegionSelected(selectedRect);

            // Close the widget
            accept();
        }
    }

    void paintEvent(QPaintEvent *event) {
        QPainter painter(this);
        painter.drawImage(0, 0, image);

        if (dragging) {
            painter.setBrush(QColor(255, 255, 255, 128));
            painter.drawRect(QRect(startDragPos, endDragPos));
        }
    }


signals:
    void cropRegionSelected(const QRect& rect);

private:
    QImage image;  // Original unscaled image
    QImage scaledImage;  // Scaled image for display
    bool dragging;
    QPoint startDragPos;
    QPoint endDragPos;
    QImage croppedImage;


};

#endif // IMAGECROPWIDGET_H
