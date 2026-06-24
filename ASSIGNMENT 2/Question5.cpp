#include <iostream>
using namespace std;

int main() {
int num;
int sum = 0;

cout <<"Enter a series of numbers, enter a number that is not a multiple of 3 to stop:" << endl;
cin >> num;

// keep reading in numbers until one that is not a multiple of 3 is entered
while(num %3==0) {
sum += num;// add the multiple of 3 tothe sum
cin>> num;
}

cout<<"The sum of all the multiples of 3 enteredis: " << sum << endl;

return 0;

}