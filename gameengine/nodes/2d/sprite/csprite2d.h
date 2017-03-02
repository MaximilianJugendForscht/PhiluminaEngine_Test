#ifndef CSPRITE2D_H
#define CSPRITE2D_H

#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"


class CSprite2D: public Ui::MainWindow
{
public:
    CSprite2D();
    ~CSprite2D();
    void compile();
    void setPos(int posX, int posY);
    int getPosX();
    int getPosY();
    QString getName();
    void setName (QString name);
private:
    QString name;
    int posY;
    int posX;
};

#endif // CSPRITE2D_H
