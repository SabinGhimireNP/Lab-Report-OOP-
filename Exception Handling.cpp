#include <iostream>
using namespace std;

int main() {
    int balance = 50, withdraw;
    try {
        withdraw = 100;
        cout << "Attempting to withdraw: " << withdraw << endl;
        if (withdraw > balance)
            throw "Insufficient Balance!";
        else
            cout << "Withdrawal Successful. Remaining: " << balance - withdraw << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
}