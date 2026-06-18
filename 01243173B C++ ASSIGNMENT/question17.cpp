#include <iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    // A power of 2 is always positive and has exactly one bit set.
    // For example: 8 = 1000, so 8 & 7 = 1000 & 0111 = 0000
    // If n & (n - 1) equals 0, then n is a power of 2.
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is NOT a power of 2." << endl;
    }

    return 0;
}