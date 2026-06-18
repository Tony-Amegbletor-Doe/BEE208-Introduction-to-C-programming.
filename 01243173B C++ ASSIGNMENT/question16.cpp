#include <iostream>
using namespace std;

int main() {
    // ── Logical NOT ──────────────────────────────────────
    cout << "=== Logical NOT (!) ===" << endl;

    bool isRaining = true;
    cout << "isRaining:  " << isRaining  << endl;  // 1
    cout << "!isRaining: " << !isRaining << endl;  // 0

    int x = 5;
    cout << "\nx  = " << x  << endl;   // 5
    cout << "!x = " << !x  << endl;   // 0

    int y = 0;
    cout << "\ny  = " << y  << endl;   // 0
    cout << "!y = " << !y  << endl;   // 1

    // ── Bitwise NOT ──────────────────────────────────────
    cout << "\n=== Bitwise NOT (~) ===" << endl;

    unsigned int a = 5;
    cout << "a  = " << a  << endl;    // 5
    cout << "~a = " << ~a << endl;    // 4294967290

    return 0;
}