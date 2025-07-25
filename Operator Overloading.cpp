#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    Point operator + (Point const &p) {
        return Point(x + p.x, y + p.y);
    }

    void show() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(3, 4), p2(2, 1), result;
    result = p1 + p2;
    result.show();
}