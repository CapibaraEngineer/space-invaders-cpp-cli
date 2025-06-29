#include "player.hpp"
#include <windows.h>

void PlayerClass::setLimits(int maxX_, int maxY_)
{
    maxX = maxX_ - 1;
    maxY = maxY_ - 1;
}

int PlayerClass::movePlayer(bool canMove)
{
    if (GetAsyncKeyState(VK_SPACE))
    {
        playerShoot();
    }

    if (canMove)
    {
        if (GetAsyncKeyState(VK_LEFT) && posX > 1)
            posX -= 1;
        if (GetAsyncKeyState(VK_RIGHT) && posX < maxX)
            posX += 1;
        if (GetAsyncKeyState(VK_UP) && posY > 1)
            posY -= 1;
        if (GetAsyncKeyState(VK_DOWN) && posY < maxY)
            posY += 1;
    }

    return 0;
}

int PlayerClass::playerShoot()
{
    const int maxProjectiles = 5;

    if (projectiles.size() >= maxProjectiles)
        return 0;

    ProjectileClass p;
    p.posX = posX;
    p.posY = posY;
    p.dirX = 0;
    p.dirY = -1;
    p.active = true;
    p.setLimits(maxX, maxY);
    projectiles.push_back(p);

    return 0;
}

void PlayerClass::updateProjectiles()
{
    for (int i = 0; i < projectiles.size(); i++)
    {
        projectiles[i].update();

        if (projectiles[i].posX < 0 || projectiles[i].posX > maxX ||
            projectiles[i].posY < 0 || projectiles[i].posY > maxY)
        {
            projectiles.erase(projectiles.begin() + i);
            i--;
        }
    }
}
