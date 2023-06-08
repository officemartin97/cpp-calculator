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
        clearScreen(); // Clear the screen before each calculation

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
        std::cout << "3. Multiply them *" << std::endl;
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
            continue; // Jump back to the beginning of the loop and restart
        }

        std::cout << "The result is: " << result << std::endl;

        do
        {
            std::cout << "Do you want to perform another calculation? (Y/N): ";
            std::cin >> choice;

            if (choice == 'Y' || choice == 'y')
            {
                break; // Exit the inner loop and continue with a new calculation
            }
            else if (choice == 'N' || choice == 'n')
            {
                clearScreen();
                return 0; // Exit the program if the answer is 'N' or 'n'
            }
            else
            {
                std::cout << "Invalid input. Please enter 'Y' or 'N'." << std::endl;
            }
        } while (true);

    } while (true);

    return 0;
}
