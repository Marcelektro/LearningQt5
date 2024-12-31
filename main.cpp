#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // custom dark theme
    app.setStyleSheet(
        "QWidget { background-color: #121214; color: #ffffff; } "
        "QPushButton { background-color: #1e1e1e; color: #ffffff; border: 1px solid #555555; padding: 10px; border-radius: 5px; } "
        "QPushButton:hover { background-color: #333333; } "
        "QPushButton:pressed { background-color: #555555; } "
        "QMessageBox { color: #ffffff; } "
    );

    QWidget window;
    window.setWindowTitle("Hello QT5");
    window.resize(854, 480);

    QVBoxLayout layout;
    layout.setAlignment(Qt::AlignCenter);

    QLabel headerLine("Hello, world! :D");
    headerLine.setAlignment(Qt::AlignCenter);
    const QFont headerLineFont("Arial", 50);
    headerLine.setFont(headerLineFont);
    layout.addWidget(&headerLine);

    QLabel subHeaderLine("Click the button below to see a message box.");
    subHeaderLine.setAlignment(Qt::AlignCenter);
    subHeaderLine.setStyleSheet("font-size: 15pt; margin-bottom: 20px;");
    layout.addWidget(&subHeaderLine);


    QPushButton button("Click Me!");
    layout.addWidget(&button);

    QObject::connect(&button, &QPushButton::clicked, [&] {
        QMessageBox::information(&window, "Hello", "Hello, world!");
    });

    window.setLayout(&layout);
    window.show();

    return QApplication::exec();
}
