#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << x++ << endl;  // Prints 5, THEN adds 1 (post-increment)
    cout << x << endl;    // Now x is 6

    cout << ++x << endl;  // Adds 1 FIRST, then prints (pre-increment) → prints 7


    cout << x-- << endl;  // Prints 7, THEN subtracts 1 (post-decrement)
    cout << x << endl;    // Now x is 6

    cout << --x << endl;  // Subtracts 1 FIRST, then prints (pre-decrement) → prints 5

    return 0;
}