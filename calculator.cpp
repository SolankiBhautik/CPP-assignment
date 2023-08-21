#include <iostream>

using namespace std;

int main()
{
    char operation;
    double num1, num2, result;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;

        break;
    default:
        cout << "Error: Invalid operation." << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
