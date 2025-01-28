#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->countEdit->setText(QString::number(counter));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    counter += 1;
    updateCounter();
}


void MainWindow::on_resetButton_clicked()
{
    counter = 0;
    updateCounter();
}

void MainWindow::updateCounter()
{
    ui->countEdit->setText(QString::number(counter));
}
