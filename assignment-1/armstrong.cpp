#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int upperLimit;

    cout << "Enter an upper limit: ";
    cin >> upperLimit;

    cout << "Armstrong numbers between 1 and " << upperLimit << ": ";
    for (int i = upperLimit; i >= 10; --i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
