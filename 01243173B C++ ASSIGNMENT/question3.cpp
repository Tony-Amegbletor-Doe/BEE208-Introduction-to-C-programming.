#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    //Check if all three numbers are equal
    if (num1 == num2 && num2 == num3) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    } 
    
    return 0;
}