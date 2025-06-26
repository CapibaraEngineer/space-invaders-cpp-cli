#include <iostream>

using namespace std;
#include "game.hpp"
#include "utils.hpp"
#include "player.hpp"

int inGame()
{
    consoleClear();

    const int sizeX = 40;
    const int sizeY = 20;

    PlayerClass player;
    player.posX = sizeX / 2;
    player.posY = sizeY / 1.2;
    player.setLimits(sizeX, sizeY);

    while (true)
    {
        setCursorPosition(0, 0);

        string MapString = "";

        player.movePlayer(true);

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
                    MapString += " ";
                }
            }
            MapString += "\n";
        }

        cout << MapString;
    }

    return 0;
}