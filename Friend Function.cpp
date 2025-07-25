
#include <iostream>
using namespace std;

class Secret {
private:
    int number;
public:
    Secret() {
        number = 42;
    }
    friend void reveal(Secret);
};

void reveal(Secret s) {
    cout << "The secret number is: " << s.number << endl;
}

int main() {
    Secret s;
    reveal(s);
}