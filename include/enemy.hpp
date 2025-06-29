#pragma once

class Enemies
{
public:
    int posX, posY;
    int direction;

    int Move(int direction)
    {
        posX += direction;
        return posX;
    }
};