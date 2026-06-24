#include <iostream>
#include <string>
using namespace std;

int main() {

string input;
int count = 0;

// Read in a series of strings from the user
while(true) {
cout<<"Enter a string (enter 'done' to stop): ";
cin>> input;

// Break out of the loop if the user enters "done"
if(input == "done") {
break;
}

// Increment the count for each string entered
count++;
}

// Print out the number of strings entered
cout<<"Number of strings entered: "<< count<< endl;

return 0;

}