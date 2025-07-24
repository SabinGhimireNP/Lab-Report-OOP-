#include <iostream>
using namespace std;

class Vehicle {
public:
    void baseInfo() {
        cout << "This is a generic vehicle.\n";
    }
};

class Car : public Vehicle {
public:
    void carInfo() {
        cout << "This is a high-performance car.\n";
    }
};

class Ferrari : public Car {
public:
    void ferrariInfo() {
        cout << "Brand: Ferrari F8 Tributo\nTop Speed: 340 km/h\nHorsepower: 710 HP\n";
    }
};

int main() {
    Ferrari f;
    f.baseInfo();
    f.carInfo();
    f.ferrariInfo();
}