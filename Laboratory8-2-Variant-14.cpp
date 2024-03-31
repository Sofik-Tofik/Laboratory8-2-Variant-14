#include <iostream>
using namespace std;

const int n = 20;

int main() {
    double array[n];

    cout << "Enter " << n << " real numbers for the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    double maxNegative = -1;
    int maxNegativeIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0 && (maxNegativeIndex == -1 || array[i] > maxNegative)) {
            maxNegative = array[i];
            maxNegativeIndex = i;
        }
    }
    if (maxNegativeIndex != -1) {
        cout << "Maximum negative element: " << maxNegative << ", at index: " << maxNegativeIndex << endl;
    }
    else {
        cout << "No negative elements found." << endl;
    }

    double sumIntegerParts = 0;
    bool foundNegative = false;
    for (int i = 0; i < n; ++i) {
        if (foundNegative) {
            sumIntegerParts += static_cast<int>(array[i]);
        }
        if (array[i] < 0) {
            foundNegative = true;
        }
    }
    cout << "Sum of integer parts after the last negative element: " << sumIntegerParts << endl;

    return 0;
}