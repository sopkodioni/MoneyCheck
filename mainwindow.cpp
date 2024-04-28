#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include "styleshandler.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->walletsPage);
}



void MainWindow::on_walletsButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->walletsPage);
}

void MainWindow::on_revenuesButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->revenuesPage);
}

void MainWindow::on_expenditureButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->expendituresPage);
}


MainWindow::~MainWindow()
{
    delete ui;
}
