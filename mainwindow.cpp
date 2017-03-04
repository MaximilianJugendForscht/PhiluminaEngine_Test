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
    QObject::connect(ui->treeWidget, &QTreeWidget::clicked, this, &MainWindow::newNode);
}

MainWindow::~MainWindow()
{

    for ( auto item : spritesArray ) delete item; //deletes every node

    delete ui;
}

void MainWindow::newNode() {
    QString word = ui->treeWidget->currentItem()->text(ui->treeWidget->currentColumn()); //gets the wanted new Node-type (based on name).

    if (word == "Sprite 2D") { //looks what the current node has to be and checks what to add as node.
        spritesArray.push_back(new CSprite2D);
    }
}

void MainWindow::addNodeInTree(QString i) {

}

