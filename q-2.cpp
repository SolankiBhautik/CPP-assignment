#include <iostream>

class Distance {
public:
    int meters;

    Distance(int m = 0) {
        meters = m;
    }

    void addMeters(int m) {
        meters += m;
    }

    void display() {
        std::cout << "Meter = " << meters << std::endl;
    }

    void convertToKilometers() {
        int totalKilometers = meters / 1000;
        int remainingMeters = meters % 1000;
        std::cout << "Total kilometers = " << totalKilometers << std::endl;
        std::cout << "Remaining meters = " << remainingMeters << std::endl;
    }
};

int main() {
    Distance distance1(4000);
    Distance distance2(5500);

    std::cout << "Data 1:" << std::endl;
    distance1.display();
    std::cout << "Data 2:" << std::endl;
    distance2.display();

    distance1.addMeters(distance2.meters);

    std::cout << "Total Kilometers and Remaining Meters:" << std::endl;
    distance1.convertToKilometers();

    return 0;
}
