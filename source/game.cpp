#include <iostream>

using namespace std;
#include "game.h"
#include "utils.h"

int inGame()
{
    system("cls || clear");

    while (true)
    {
        setCursorPosition(0, 0);

        int sizeX = 4,
            sizeY = 8;

        string MapString = "";

        for (int posY = 0; posY <= sizeY; posY++)
        {
            for (int posX = 0; posX <= sizeX; posX++)
            {
                if (posY == 0 || posY == sizeY || posX == 0 || posX == sizeX)
                {
                    MapString += "#";
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