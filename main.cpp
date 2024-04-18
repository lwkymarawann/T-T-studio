#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>

class MyApp : public QApplication {
public:
    MyApp(int& argc, char** argv) : QApplication(argc, argv) {
        // Set the application icon
        QPixmap pixmap("D://Qt//projects//PhotoshopGui//TweakStoreFiles//icons//LogoForPhotoshop-removebg-preview.ico");
        QIcon icon(pixmap.scaled(512, 512));
        setWindowIcon(icon);
    }

    bool notify(QObject* receiver, QEvent* event) override {
        // Intercept window creation events and set the icon for new windows/dialogs
        if (event->type() == QEvent::WindowActivate) {
            QWidget* widget = qobject_cast<QWidget*>(receiver);
            if (widget && !widget->windowIcon().isNull()) {
                widget->setWindowIcon(QApplication::windowIcon());
            }
        }
        return QApplication::notify(receiver, event);
    }
};

int main(int argc, char *argv[]) {
    MyApp a(argc, argv);

    // Create the main window
    MainWindow w;
    w.setWindowTitle("TweakStore");

    // Apply Fusion style
    QApplication::setStyle(QStyleFactory::create("Fusion"));

    // Set the dark color palette
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(13, 27, 42));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(53,53,53));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53,53,53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::white);
    a.setPalette(darkPalette);

    // Show the main window
    w.show();

    // Run the application event loop
    return a.exec();
}
