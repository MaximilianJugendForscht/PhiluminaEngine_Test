#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "/home/maximilian/gameengine/nodes/2d/sprite/csprite2d.h"
class CSprite2D;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void newNode();

private:
    Ui::MainWindow *ui;
    void newSprite ();
    std::vector<CSprite2D> spritesArray;
};

#endif // MAINWINDOW_H
