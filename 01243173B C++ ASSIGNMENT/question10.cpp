#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter second number: " << endl;
    cin >> num2;
    
    int larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;
    
    return 0;

}