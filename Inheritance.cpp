
#include <iostream>
using namespace std;

class Device {
public:
    void type() {
        cout << "This is an electronic device.\n";
    }
};

class Laptop : public Device {
public:
    void brand() {
        cout << "Brand: Acer Nitro\n";
    }
};

int main() {
    Laptop obj;
    obj.type();
    obj.brand();
}

