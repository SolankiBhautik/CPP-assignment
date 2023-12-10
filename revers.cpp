#include <iostream>

using namespace std;

int main() {
    int number, reversedNumber = 0;

    cout << "Enter a two-digit number: ";
    cin >> number;

    if (number >= 10 && number <= 99) {
        int tensDigit = number / 10;
        int onesDigit = number % 10;

        reversedNumber = onesDigit * 10 + tensDigit;

        cout << "Reversed number: " << reversedNumber << endl;
    } else {
        cout << "Invalid input. Please enter a two-digit number." << endl;
    }

    return 0;
}
