#ifndef STRIPEDFRAMEWIDGET_H
#define STRIPEDFRAMEWIDGET_H

#include <QWidget>

class StripedFrameWidget : public QWidget {
    Q_OBJECT

public:
    StripedFrameWidget(const QColor& color1, const QColor& color2, int width, QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QColor color1_;
    QColor color2_;
    int width_;
};

#endif // STRIPEDFRAMEWIDGET_H
