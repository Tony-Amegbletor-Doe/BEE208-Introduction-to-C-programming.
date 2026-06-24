#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // If the number is even, skip the print statement
        if (i % 2 == 0) {
            continue; // Jumps directly to the next loop iteration (i++)
        }

        cout << "Odd number: " << i << endl;
    }

    cout << "Loop finished." << endl;
    return 0;
}