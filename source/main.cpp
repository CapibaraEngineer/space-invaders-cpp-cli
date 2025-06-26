#include <iostream>

using namespace std;

#include "game.hpp"
#include "options.hpp"
#include "utils.hpp"

int main()
{
    system("cls || clear");

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

        cout << "Space Invaders\n\n";

        cout << (SelectedOption == 0 ? "-> Start Game" : "   Start Game") << endl;
        cout << (SelectedOption == 1 ? "-> Options" : "   Options") << endl;
        cout << (SelectedOption == 2 ? "-> Quit Game" : "   Quit Game") << endl;

        cout << "\nv" << version << endl;
        cout << "By Ryan Ferreira\n";

        int key = KeyPressHandler(SelectedOption, maxOptions);
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