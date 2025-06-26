#include "options.hpp"
#include "game.hpp"
#include "utils.hpp"

int inOptions()
{
    consoleClear();

    int SelectedOption = 0;
    int maxOptions = 2;

    while (true)
    {
        setCursorPosition(0, 0);

        cout << "Config\n\n";

        cout << (SelectedOption == 0 ? "-> Info" : "   Info") << endl;
        cout << (SelectedOption == 1 ? "-> Back" : "   Back") << endl;

        int key = KeyPressHandler(1, SelectedOption, maxOptions);
        if (key == ENTER_KEY)
        {
            switch (SelectedOption)
            {
            case 0:
                cout << "Nothing implemented yet\n"
                     << endl;
                system("pause");
            case 1:
                main();
                break;
            default:
                break;
            }
            break;
        }
    }

    return 0;
}