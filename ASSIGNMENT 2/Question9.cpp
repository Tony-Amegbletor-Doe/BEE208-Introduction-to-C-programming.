 #include <iostream>
using namespace std;

int main() {

    // ─── WHILE LOOP ───────────────────────────────
    // Checks condition FIRST — may never run
    int a = 10;
    cout << "=== while loop ===" << endl;
    while (a < 5) {
        cout << "a = " << a << endl; // never prints
        a++;
    }
    cout << "Loop skipped entirely (a was already 10)" << endl;

    cout << endl;

    // ─── DO-WHILE LOOP ────────────────────────────
    // Runs FIRST, checks condition after — always runs at least once
    int b = 10;
    cout << "=== do-while loop ===" << endl;
    do {
        cout << "b = " << b << endl; // prints once even though b > 5
        b++;
    } while (b < 5);
    cout << "Ran once even though b was already 10" << endl;

    return 0;
}   