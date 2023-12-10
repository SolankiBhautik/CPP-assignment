#include <iostream>

using namespace std;

int main() {
    int num;
    int sumOdd = 0;
    int sumEven = 0;

    cout << "Enter numbers (enter 0 to stop):" << endl;

    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            sumEven += num;
        } else {
            sumOdd += num;
        }
    }

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;

    return 0;
}
