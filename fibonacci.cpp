#include <iostream>

using namespace std;

class Fibonacci {
public:
    int calculate(int n) {
        if (n <= 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }

        int prev = 0;
        int current = 1;
        int result;

        for (int i = 2; i <= n; ++i) {
            result = prev + current;
            prev = current;
            current = result;
        }

        return result;
    }

    void printSequence(int count) {
        for (int i = 0; i < count; ++i) {
            cout << calculate(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fibonacci;

    int count;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> count;

    cout << "Fibonacci sequence: ";
    fibonacci.printSequence(count);

    return 0;
}
#include <iostream>

using namespace std;

class Fibonacci {
public:
    int calculate(int n) {
        if (n <= 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }

        int prev = 0;
        int current = 1;
        int result;

        for (int i = 2; i <= n; ++i) {
            result = prev + current;
            prev = current;
            current = result;
        }

        return result;
    }

    void printSequence(int count) {
        for (int i = 0; i < count; ++i) {
            cout << calculate(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    Fibonacci fibonacci;

    int count;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> count;

    cout << "Fibonacci sequence: ";
    fibonacci.printSequence(count);

    return 0;
}
