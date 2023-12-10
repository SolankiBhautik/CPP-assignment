#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int factorial = 1;

        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }

        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
