//
// Created by kubus on 26.07.2021.
//

#include "mainWindow.h"

#include <QMenuBar>

MainWindow::MainWindow() : QMainWindow()
{
    createMenus();
}

void MainWindow::createMenus()
{
    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));
}