#include <iostream>
#include <cmath>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0;
    int position = 0;

    while (binary != 0) {
        int digit = binary % 10;        // Extract the last digit
        decimal += digit * pow(2, position); // Multiply by its place value
        binary /= 10;                   // Remove the last digit
        position++;                     // Move to the next bit position
    }

    return decimal;
}

int main() {
    long long binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Basic validation — check for invalid digits
    long long temp = binary;
    bool isValid = true;
    while (temp != 0) {
        if (temp % 10 > 1) {
            isValid = false;
            break;
        }
        temp /= 10;
    }

    if (!isValid) {
        cout << "Invalid binary number! Only 0s and 1s are allowed." << endl;
    } else {
        cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    }

    return 0;
}