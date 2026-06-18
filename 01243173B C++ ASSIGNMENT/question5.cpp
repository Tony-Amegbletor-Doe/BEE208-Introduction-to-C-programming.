#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter first number" << endl;
    cin >> num1;

    cout << "Enter second number" << endl;
    cin >> num2;

    if (num1 > num2) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}