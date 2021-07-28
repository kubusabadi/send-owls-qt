
#include <QApplication>
#include <QPushButton>
#include "gui/mainWindow.h"


int main(int argc, char *argv[]) {
    Q_INIT_RESOURCE(application);

    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
