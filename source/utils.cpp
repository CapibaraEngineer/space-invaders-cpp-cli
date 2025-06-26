#include "utils.hpp"

int KeyPressHandler(int &SelectedOption, int maxOptions)
{
    while (true)
    {
        if (_kbhit())
        {
            int key = _getch();

            if (key == ENTER_KEY)
            {
                return ENTER_KEY;
            }

            if (key == ESCAPE_KEY)
            {
                return ESCAPE_KEY;
            }

            switch (key)
            {
            case UP_ARROW:
                if (SelectedOption > 0)
                {
                    SelectedOption--;
                }
                break;
            case DOWN_ARROW:
                if (SelectedOption < (maxOptions - 1))
                {
                    SelectedOption++;
                }
                break;
            }
            break;
        }
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