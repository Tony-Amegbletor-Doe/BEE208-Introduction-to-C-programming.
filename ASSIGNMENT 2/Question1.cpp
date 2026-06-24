#include <iostream>
using namespace std;

int main() {

int sum = 0; // Initialize the sum to 0
int num; // Declare the input variable

// Read in integers from the user until a negative number is entered

cout<<"Enter a series of integers (enter a negativenumber to stop): ";

while(true) {
cin>> num;// Read in the integer

if(num <0)break;// If it's negative, stop theloop
sum += num;// Otherwise, add it to the sum
}

// Print the sum of all the positive numbers

cout<<"The sum of all the positive numbers is: "<< sum <<endl;

return 0;

}