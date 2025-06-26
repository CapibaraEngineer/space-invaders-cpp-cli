#include <conio.h>
#include <iostream>

using namespace std;

// Define Keys
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

#define ENTER_KEY 13
#define ESCAPE_KEY 27

int KeyPressHandler(int &SelectedOption, int maxOptions);
void setCursorPosition(int x, int y);
void consoleClear();