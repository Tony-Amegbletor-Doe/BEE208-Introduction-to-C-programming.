//The switch statement in C++ is used to select one of many possible actions based on the value of a single variable (usually an integer or character). 
//It’s cleaner than using many if...else if statements when you’re checking one variable against fixed values.
 
#include <iostream>
using namespace std;

int main() {
    int dayNumber = 3;

    // The switch statement evaluates the variable 'dayNumber'
    switch (dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break; // Exits the switch block
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        default: // Executed if dayNumber does not match any case above
            cout << "Invalid workday or weekend!" << endl;
            break;
    }

    return 0;
}