#include <iostream>

using namespace std;
#include "game.hpp"
#include "utils.hpp"
#include "player.hpp"

int inGame()
{
    consoleClear();

    while (true)
    {
        setCursorPosition(0, 0);

        int sizeX = 40,
            sizeY = 20;

        PlayerClass player;
        player.posX = sizeX / 2;
        player.posY = sizeY / 2;

        string MapString = "";

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