#pragma once

#include <vector>
#include "projectile.hpp"

class PlayerClass
{
public:
    int posX, posY;
    int directionX, directionY;
    int score;
    double life;
    int maxX, maxY;

    std::vector<ProjectileClass> projectiles;

    void setLimits(int maxX_, int maxY_);
    int movePlayer(bool canMove);
    int playerShoot();
    void updateProjectiles();
};