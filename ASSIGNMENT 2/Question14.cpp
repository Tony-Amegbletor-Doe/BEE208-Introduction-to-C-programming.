#include <iostream>
using namespace std;

int main() {
    int arr[] = {14, 3, 27, 8, 1, 19, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Smallest number: " << min << endl;

    return 0;
}