#pragma once

class ProjectileClass
{
public:
    int maxX, maxY;

    int posX = 0;
    int posY = 0;
    int dirX = 0;
    int dirY = 0;
    bool active = false;

    void setLimits(int maxX_, int maxY_)
    {
        maxX = maxX_;
        maxY = maxY_;
    }
    
    void update()
    {
        if (active)
        {
            posX += dirX;
            posY += dirY;

            if (posX < 0 || posX > maxX || posY < 0 || posY > maxY)
            {
                active = false;
            }
        }
    }
};
