
#include "furnituredialog.h"
#include "infodialog.h"
#include "mensweardialog.h"
#include "sportdialog.h"
#include "ui_mainwindow.h"
#include "womensweardialog.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_mensButton_clicked()
{
    MenswearDialog mensDialog;
    mensDialog.setModal(true);
    mensDialog.exec();
}


void MainWindow::on_woButton_clicked()
{
    WomenswearDialog woDialog;
    woDialog.setModal(true);
    woDialog.exec();
}


void MainWindow::on_spButton_clicked()
{
    SportDialog spDialog;
    spDialog.setModal(true);
    spDialog.exec();
}


void MainWindow::on_infoButton_clicked()
{
    InfoDialog infoDialog;
    infoDialog.setModal(true);
    infoDialog.exec();
}


void MainWindow::on_furButton_clicked()
{
    FurnitureDialog furDialog;
    furDialog.setModal(true);
    furDialog.exec();
}

