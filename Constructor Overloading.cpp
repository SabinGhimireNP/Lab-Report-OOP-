#include <iostream>
using namespace std;

class Book {
public:
    string title;
    Book() {
        title = "Untitled";
    }
    Book(string t) {
        title = t;
    }

    void printTitle() {
        cout << "Book Title: " << title << endl;
    }
};

int main() {
    Book b1, b2("Learn C++");
    b1.printTitle();
    b2.printTitle();
}