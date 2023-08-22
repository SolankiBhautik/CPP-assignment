#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; ++i) {
        cout << num << " ";
        if (i % 2 != 0)
        {
            num += 4;
        }
        else
        {
            num -= 2;
        }
    }

    cout << endl;

    return 0;
}
