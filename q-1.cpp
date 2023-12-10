#include <iostream>

class Money {
public:
    int rupees;
    int paisa;

    Money(int r = 0, int p = 0) {
        rupees = r;
        paisa = p;
    }

    void addPaisa(Money p) {
        paisa += p.paisa;
        rupees += p.rupees;
        rupees += paisa / 100;
        paisa = paisa % 100;
    }

    void display() {
        std::cout << "Rupees = " << rupees << ", Paisa = " << paisa << std::endl;
    }
};

int main() {
    Money money1(30, 80);
    Money money2(40, 44);

    std::cout << "Data 1:" << std::endl;
    money1.display();
    std::cout << "Data 2:" << std::endl;
    money2.display();S

    money1.addPaisa(money2);

    std::cout << "Total Rupees = " << money1.rupees << ", Paisa = " << money1.paisa << std::endl;

    return 0;
}
