#include <iostream>

// Define an inline function to calculate the square of a number
inline int square(int num) {
    return num * num;
}

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    int result = square(number);

    std::cout << "The square of " << number << " is " << result << std::endl;

    return 0;
}
