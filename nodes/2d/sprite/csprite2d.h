#ifndef CSPRITE2D_H
#define CSPRITE2D_H

#include <QString>
#include <QMainWindow>

class CSprite2D
{
public:
    CSprite2D(int number);
    ~CSprite2D();
    void compile();
    void setPos(int posX, int posY);
    int getPosX();
    int getPosY();
    QString getName();
    void setName (QString name);
private:
    QString name;
    int number_sprite;
    int posY;
    int posX;
};

#endif // CSPRITE2D_H
