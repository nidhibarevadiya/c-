#include <iostream>
using namespace std;

void printFibonacciUpTo(int Val) {
    int first = 0, second = 1, next;

    cout << "Fibonacci series  " << Val << ": ";
    while (first <= Val) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int Val;

    // Taking user input
    cout << "Enter value: ";
    cin >>Val;

    if (Val < 0) {
        cout << "Please enter a non-negative number!" << endl;
    } else {
        printFibonacciUpTo(Val);
    }

    return 0;
}
