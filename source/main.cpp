#include <iostream>

#include "utils.hpp"
#include "game.hpp"

int main()
{
    consoleClear();
    hideCursor();

    menu();
    return 0;
}

int menu()
{
    int SelectedOption = 0;
    int maxOptions = 3;
    double version = 0.01;

    while (true)
    {
        setCursorPosition(0, 0);

        cout << "Space Invaders - C++\n\n";

        cout << (SelectedOption == 0 ? "-> Start Game" : "   Start Game") << endl;
        cout << (SelectedOption == 1 ? "-> Options" : "   Options") << endl;
        cout << (SelectedOption == 2 ? "-> Quit Game" : "   Quit Game") << endl;

        cout << "\nv" << version << endl;
        cout << "Made by Ryan Ferreira\n";

        int key = KeyPressHandler(1, SelectedOption, maxOptions);
        if (key == ENTER_KEY)
        {
            switch (SelectedOption)
            {
            case 0:
                inGame();
                return 0;
                break;
            case 1:
                inOptions();
                return 0;
                break;
            case 2:
                return 0;
                break;
            default:
                break;
            }
            break;
        }
    }

    return 0;
}