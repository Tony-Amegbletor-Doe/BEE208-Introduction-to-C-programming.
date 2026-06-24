#include <iostream>
using namespace std;

int main() {
// Declare variables
int num, largest;

// Read in first number
cout<<"Enter a number (0 to exit): ";
cin>> num;

// Set largest to first number
largest = num;

// Read in remaining numbers
while(num !=0) {
cout<<"Enter a number (0 to exit): ";
cin>> num;
if(num > largest) {// If current number is largerthan largest
largest = num;// Update largest
}

}

// Print out largest number
cout<<"Largest number: "<< largest <<endl;
return 0;

}