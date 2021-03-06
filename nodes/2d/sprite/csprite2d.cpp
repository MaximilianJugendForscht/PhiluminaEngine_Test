
#include <QStandardItemModel>
#include <qmessagebox.h>
#include "mainwindow.h"
#include "csprite2d.h"

CSprite2D::CSprite2D(int number) //gets the number of total sprites from MainWindow
{
    number_sprite = number;
    //addNodeInTree("Sprite 2D" + number_sprite);
}

CSprite2D::~CSprite2D() {
    //removes the sprite off the panel
}

void CSprite2D::compile() {
    //puts the (translated) picture and the position/tilting info into the output which gets interpreted
}

void CSprite2D::setPos(int posX, int posY) {
    //sets the position on the openGl Panel (using the this-pointer)
}

int CSprite2D::getPosX () {
   //returns the position of the sprite on the X-Axis (using the this-pointer)
}

int CSprite2D::getPosY () {
    //returns the position of the sprite on the Y-Axis (this-pointer)
}

