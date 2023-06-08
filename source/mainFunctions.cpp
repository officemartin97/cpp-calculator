#include <iostream>
#include "../include//main.h"

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H"; // ANSI escape sequence to clear screen
}