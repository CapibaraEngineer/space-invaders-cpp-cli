#include "utils.hpp"

int KeyPressHandler(int isMenu, int &SelectedOption, int maxOptions)
{
    while (true)
    {
        if (_kbhit())
        {
            int keyPressed = _getch();

            if (isMenu == 1)
            {
                menuOptions(SelectedOption, maxOptions, keyPressed);
            }

            return keyPressed;
        }
    }
    return 0;
}

int menuOptions(int &SelectedOption, int maxOptions, int keyPressed)
{
    switch (keyPressed)
    {
    case UP_ARROW:
        if (SelectedOption > 0)
            SelectedOption--;
        break;
    case DOWN_ARROW:
        if (SelectedOption < (maxOptions - 1))
            SelectedOption++;
        break;
    }
    return 0;
}

void setCursorPosition(int x, int y)
{
    cout << "\033[" << y << ";" << x << "H";
}

void consoleClear()
{
    cout << "\033[2J";
}