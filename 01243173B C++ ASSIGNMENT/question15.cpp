#include <iostream>
using namespace std;

int main() {
    float a, b, larger;

    cout << "Enter first number:  ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    larger = (a > b) ? a : b;

    cout << "\nThe larger number is: " << larger << endl;

    return 0;
}