#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 42, 50};
    int target = 42;

    for (int i = 0; i < 5; i++) {
        cout << "Checking: " << numbers[i] << endl;

        if (numbers[i] == target) {
            cout << "Target found! Stopping search." << endl;
            break; // Immediately exits the for-loop
        }
    }

    cout << "Loop exited." << endl;
    return 0;
}