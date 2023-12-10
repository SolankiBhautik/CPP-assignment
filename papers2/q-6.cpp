#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Method 1: Overload the unary minus operator as a member function
    Number operator-() {
        return Number(-value);
    }

    // Method 2: Overload the unary minus operator as a friend function
    friend Number operator-(const Number& num);

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

// Method 2: Overloaded unary minus operator as a friend function
Number operator-(const Number& num) {
    return Number(-num.value);
}

int main() {
    Number num1(42);

    std::cout << "Original Number:" << std::endl;
    num1.display();

    // Method 1: Overloading the unary minus operator using member function
    Number result1 = -num1;

    // Method 2: Overloading the unary minus operator using friend function
    Number result2 = -num1;

    std::cout << "Converted to Negative Using Member Function:" << std::endl;
    result1.display();

    std::cout << "Converted to Negative Using Friend Function:" << std::endl;
    result2.display();

    return 0;
}
