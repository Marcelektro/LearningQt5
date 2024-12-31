#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Hello QT5");
    window.resize(854, 480);

    QVBoxLayout layout;
    layout.setAlignment(Qt::AlignCenter);

    QPushButton button("Click Me!");
    layout.addWidget(&button);

    QObject::connect(&button, &QPushButton::clicked, [&] {
        QMessageBox::information(&window, "Hello", "Hello, world!");
    });

    window.setLayout(&layout);
    window.show();

    return QApplication::exec();
}
