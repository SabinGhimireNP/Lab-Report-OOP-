#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle\n";
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;
    s->draw();
}