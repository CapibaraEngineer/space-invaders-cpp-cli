#pragma once

using namespace std;

// Define Keys
#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

#define ENTER_KEY 13
#define ESCAPE_KEY 27
#define SPACE_KEY 32

// Function Prototyoes
int KeyPressHandler(int isMenu, int &SelectedOption, int maxOptions);
int menuOptions(int &SelectedOption, int maxOptions, int keyPressed);
void consoleClear();
void setCursorPosition(int x, int y);
void hideCursor();
void showCursor();