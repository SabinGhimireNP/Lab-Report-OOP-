#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        cout << "Counter started!\n";
    }
    ~Counter() {
        cout << "Counter stopped.\n";
    }
};

int main() {
    Counter c;
    return 0;
}