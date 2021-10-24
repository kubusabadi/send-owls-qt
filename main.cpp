
#include <QApplication>
#include <QPushButton>
#include "gui/mainWindow.h"
#include "logic/AppParamsParser.h"


int main(int argc, char *argv[]) {
    AppParamsParser appParamsParser;

    if(appParamsParser.parse(argc, argv) != AppParamsParseResult::OK){
        return 1;
    }

    if(appParamsParser.isNoGui()){
        return 2;
    }

    Q_INIT_RESOURCE(application);

    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
