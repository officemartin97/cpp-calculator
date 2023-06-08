#include <iostream>
using namespace ::std;

/* Calculator */

int main()
{
    double a, b, result;
    int operation;

    cout << "This is a simple calculator!";
    cout << endl;
    cout << endl;
    cout << "First number you want to work with: ";
    cin >> a;
    cout << endl
         << "Second number you want to work with: ";
    cin >> b;
    cout << endl
         << "The numbers you want to work with are: " << a << " and " << b
         << "." << endl;
    cout << endl;
    cout << "These are the options for operations which you can choose from:" << endl;
    cout << "1. Add together +" << endl;
    cout << "2. Subtract them -" << endl;
    cout << "3. Multiplicate them *" << endl;
    cout << "4. Divide them /" << endl;
    cin >> operation;

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
        cout << "Exception: Unavailable option!";
    }

    cout << "The result is: " << result << endl;
}