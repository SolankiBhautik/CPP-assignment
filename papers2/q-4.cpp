#include <iostream>
#include <cmath>

class Shapes {
public:
    double calculateArea(double radius) {
        return 3.14159265358979323846 * radius * radius; // Area of a circle
    }

    double calculateArea(double base, double height) {
        return 0.5 * base * height; // Area of a triangle
    }
};

int main() {
    Shapes shapes;

    double circleRadius = 5.0;
    double triangleBase = 4.0;
    double triangleHeight = 6.0;

    double circleArea = shapes.calculateArea(circleRadius);
    double triangleArea = shapes.calculateArea(triangleBase, triangleHeight);

    std::cout << "Area of a circle with radius " << circleRadius << " is " << circleArea << std::endl;
    std::cout << "Area of a triangle with base " << triangleBase << " and height " << triangleHeight << " is " << triangleArea << std::endl;

    return 0;
}
