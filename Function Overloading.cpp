#include <iostream>
using namespace std;

class Area {
public:
    int calculate(int side) {
        return side * side;
    }

    double calculate(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;
    cout << "Square Area: " << a.calculate(5) << endl;
    cout << "Circle Area: " << a.calculate(2.5) << endl;
}