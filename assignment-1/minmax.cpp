#include <iostream>

using namespace std;

int main() {
    const int arraySize = 5; 
    int arr[arraySize];

    // Input array elements
    cout << "Enter " << arraySize << " integer elements:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Find minimum and maximum
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < arraySize; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Display results
    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}
