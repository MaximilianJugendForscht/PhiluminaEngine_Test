#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //connects all the objects with the needed slots
    QObject::connect(ui->treeWidget, &QTreeWidget::clicked, this, &QMainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newSprite() {

}

void MainWindow::newNode() {
    ui->treeWidget->collapseAll();
}
