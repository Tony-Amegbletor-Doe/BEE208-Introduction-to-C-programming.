#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\n--- Left Shift (<<) ---" << endl;
    cout << num << " << 1 = " << (num << 1) << "  (x2)" << endl;
    cout << num << " << 2 = " << (num << 2) << "  (x4)" << endl;
    cout << num << " << 3 = " << (num << 3) << "  (x8)" << endl;

    cout << "\n--- Right Shift (>>) ---" << endl;
    cout << num << " >> 1 = " << (num >> 1) << "  (÷2)" << endl;
    cout << num << " >> 2 = " << (num >> 2) << "  (÷4)" << endl;
    cout << num << " >> 3 = " << (num >> 3) << "  (÷8)" << endl;

    return 0;
}