#include <iostream>
#include <windows.h>

#include "utils.hpp"
#include "game.hpp"
#include "player.hpp"
#include "projectile.hpp"

int inGame()
{
    consoleClear();

    const int sizeX = 40;
    const int sizeY = sizeX / 2;

    PlayerClass player;
    ProjectileClass projectile;
    projectile.setLimits(sizeX, sizeY);

    player.posX = sizeX / 2;
    player.posY = sizeY / 1.1;
    player.setLimits(sizeX, sizeY);

    while (true)
    {
        Sleep(50);

        setCursorPosition(0, 0);

        string MapString = "";

        player.movePlayer(true);
        projectile.update();
        player.updateProjectiles();

        // TODO: A malha fica quebrando com os projéteis, ainda é preciso consertar.
        for (int posY = 0; posY <= sizeY; posY++)
        {
            for (int posX = 0; posX <= sizeX; posX++)
            {
                if (posY == 0 || posY == sizeY || posX == 0 || posX == sizeX)
                {
                    MapString += "#";
                }
                else if (posX == player.posX && posY == player.posY)
                {
                    MapString += "W";
                }
                else
                {
                    bool projectileHere = false;
                    for (auto &p : player.projectiles)
                    {
                        if (p.active && posX == p.posX && posY == p.posY)
                        {
                            projectileHere = true;
                            break;
                        }
                    }

                    if (projectileHere)
                    {
                        MapString += "|";
                    }

                    MapString += " ";
                }
            }
            MapString += "\n";
        }

        cout << MapString;
    }

    return 0;
}