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

private slots:
    void setEmailCredentials();
    void importEmailsFromCSV();

private:
    void createMenuActions();
    void createMenus();

    QMenu* fileMenu;
    QToolBar* fileToolBar;
    QAction* importCVS;
    QAction* setCredentials;

};

#endif //SEND_OWLS_QT_MAINWINDOW_H
