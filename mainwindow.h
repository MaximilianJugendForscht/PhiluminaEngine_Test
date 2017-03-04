#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "nodes/2d/sprite/csprite2d.h"

class CSprite2D;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void addNodeInTree(QString i);
    ~MainWindow();

public slots:
    void newNode();

private: //private functions
    void newSprite ();

private: //private variables/arrays

    //arrays of nodes
    std::vector<CSprite2D*> spritesArray;


    //others
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
