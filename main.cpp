#include <iostream>

#include <iostream>

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H"; // ANSI escape sequence to clear screen
}

int main()
{
    double a, b, result;
    int operation;
    char choice;

    do
    {
        std::cout << "This is a simple calculator!" << std::endl
                  << std::endl;

        std::cout << "First number you want to work with: ";
        std::cin >> a;

        std::cout << "Second number you want to work with: ";
        std::cin >> b;

        std::cout << "The numbers you want to work with are: " << a << " and " << b << "." << std::endl
                  << std::endl;

        std::cout << "These are the options for operations which you can choose from:" << std::endl;
        std::cout << "1. Add together +" << std::endl;
        std::cout << "2. Subtract them -" << std::endl;
        std::cout << "3. Multiplicate them *" << std::endl;
        std::cout << "4. Divide them /" << std::endl;
        std::cin >> operation;

        if (operation == 1)
        {
            result = a + b;
        }
        else if (operation == 2)
        {
            result = a - b;
        }
        else if (operation == 3)
        {
            result = a * b;
        }
        else if (operation == 4)
        {
            result = a / b;
        }
        else
        {
            std::cout << "Exception: Unavailable option!" << std::endl;
            continue; // Ugrás vissza a kezdethez, és újraindítja a ciklust
        }

        std::cout << "The result is: " << result << std::endl;

        std::cout << "Do you want to perform another calculation? (Y/N): ";
        std::cin >> choice;

        if (choice != 'Y' && choice != 'y')
        {
            clearScreen();
            break; // Kilépés a ciklusból, ha a válasz nem 'Y' vagy 'y'
        }

        clearScreen();

    } while (true);

    return 0;
}
