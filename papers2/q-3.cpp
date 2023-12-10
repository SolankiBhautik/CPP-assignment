#include <iostream>

class Class2;
class Class1 {
public:
    int data;

    Class1(int d = 0) {
        data = d;
    }

    friend void addData(Class1, Class2);
};

class Class2 {
public:
    int data;

    Class2(int d = 0) {
        data = d;
    }

    friend void addData(Class1, Class2);
};

void addData(Class1 c1, Class2 c2) {
    int total = c1.data + c2.data;
    std::cout << "Class 1 data = " << c1.data << std::endl;
    std::cout << "Class 2 data = " << c2.data << std::endl;
    std::cout << "Total of both data = " << total << std::endl;
}

int main() {
    Class1 class1(50);
    Class2 class2(60);

    std::cout << "Data 1:" << std::endl;
    addData(class1, class2);

    return 0;
}
