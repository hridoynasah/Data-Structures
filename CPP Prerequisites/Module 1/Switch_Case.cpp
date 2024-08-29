#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "What's x? ";
    cin >> x;
    cout << "What's y? ";
    cin >> y;

    char operatr;
    cout << "Please choose an operator: +, -, *, /, % : ";
    cin >> operatr;

    switch (operatr)
    {
    case '+':
        cout << x << "+" << y << " = " << (x + y);
        break;
    case '-':
        cout << x << "-" << y << " = " << (x - y);
        break;
    case '*':
        cout << x << "*" << y << " = " << (x * y);
        break;
    case '/':
        if (y != 0)
            cout << x << "/" << y << " = " << (x / y);
        else
            cout << "Error: Division by zero";
        break;
    case '%':
        if (y != 0)
            cout << x << "%" << y << " = " << (x % y);
        else
            cout << "Error: Division by zero";
        break;
    default:
        cout << "Error: Invalid operator";
        break;
    }

    return 0;
}
