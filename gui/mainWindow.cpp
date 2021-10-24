//
// Created by kubusabadi on 26.07.2021.
//

#include "mainWindow.h"

#include <QMenuBar>
#include <QtWidgets>

MainWindow::MainWindow() : QMainWindow()
{
    setWindowTitle(tr("Send Owls"));
    setGeometry(40,40, 800, 600);

    createMenus();
    createMenuActions();
}

void MainWindow::createMenus()
{
   fileMenu = menuBar()->addMenu(tr("&File"));
   fileToolBar = addToolBar(tr("File"));
}

void MainWindow::createMenuActions()
{
    setCredentials = new QAction(tr("&Set Credentials"), this);
    fileMenu->addAction(setCredentials);
    connect(setCredentials, &QAction::triggered, this, &MainWindow::setEmailCredentials);

    importCVS = new QAction(tr("&Import CSV..."), this);
    fileMenu->addAction(importCVS);
    connect(importCVS, &QAction::triggered, this, &MainWindow::importEmailsFromCSV);

    const QIcon newIcon = QIcon::fromTheme("document-new", QIcon(":/images/register.png"));
    auto *newAct = new QAction(newIcon, tr("&New"), this);
    newAct->setShortcuts(QKeySequence::New);
    newAct->setStatusTip(tr("Create a new file"));
    connect(newAct, &QAction::triggered, this, &MainWindow::importEmailsFromCSV);
    fileToolBar->addAction(newAct);

    const QIcon openIcon = QIcon::fromTheme("document-open", QIcon(":/images/csv.png"));
    QAction *openAct = new QAction(openIcon, tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);
    openAct->setStatusTip(tr("Open an existing file"));
    connect(openAct, &QAction::triggered, this, &MainWindow::setEmailCredentials);
    fileToolBar->addAction(openAct);

    const QIcon sendOwlIcon = QIcon::fromTheme("document-open", QIcon(":/images/owl.png"));
    QAction *sendOwl = new QAction(sendOwlIcon, tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);
    openAct->setStatusTip(tr("Open an existing file"));
    connect(openAct, &QAction::triggered, this, &MainWindow::setEmailCredentials);
    fileToolBar->addAction(sendOwl);
}

void MainWindow::setEmailCredentials()
{

}

void MainWindow::importEmailsFromCSV()
{

}