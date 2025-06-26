#pragma once

#include "utils.hpp"
int movePlayer(bool canMove);
void setLimits(int maxX, int maxY);

class PlayerClass
{
public:
    int posX, posY;
    int directionX, directionY;

    int score;
    double life;

    int maxX;
    int maxY;

    void setLimits(int maxX_, int maxY_)
    {
        maxX = maxX_;
        maxY = maxY_;
    }

    int movePlayer(bool canMove)
    {
        if (canMove)
        {
            if (_kbhit())
            {
                int keyPressed = _getch();

                switch (keyPressed)
                {
                case LEFT_ARROW:
                    if (posX > 1)
                        posX -= 1;
                    break;
                case RIGHT_ARROW:
                    if (posX < maxX - 1)
                        posX += 1;
                    break;
                case UP_ARROW:
                    if (posY > 1)
                        posY -= 1;
                    break;
                case DOWN_ARROW:
                    if (posY < maxY - 1)
                        posY += 1;
                    break;
                default:
                    break;
                }
            }
        }
        return 0;
    }

    int playerShoot()
    {
        
    }
};