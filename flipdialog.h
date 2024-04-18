#ifndef FLIPDIALOG_H
#define FLIPDIALOG_H

#include <QDialog>
#include "ui_flipdialog.h" // Include the generated UI header file

namespace Ui {
class FlipDialog;
}

class FlipDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FlipDialog(QWidget *parent = nullptr);
    ~FlipDialog();

    enum FlipDirection {
        Horizontal,
        Vertical
    };

    FlipDirection getFlipDirection() const;

private:
    Ui::FlipDialog *ui;
};

#endif // FLIPDIALOG_H
