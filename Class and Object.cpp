#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void show() {
        cout << "Student Name: " << name << "\nRoll No: " << roll << endl;
    }
};

int main() {
    Student s;
    s.name = "Sabin Ghimire";
    s.roll = 154264525;
    s.show();
    return 0;
}