//
// Created by kubus on 26.07.2021.
//

#ifndef SEND_OWLS_QT_MAINWINDOW_H
#define SEND_OWLS_QT_MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();

private:
    void createMenus();

};

#endif //SEND_OWLS_QT_MAINWINDOW_H
