#include <iostream>
using namespace std;

const int n = 25;

int main() {
    int a[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << " array element: ";
        cin >> a[i];
    }

    bool isIncreasing = true;

    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            isIncreasing = false;
            break;
        }
    }

    if (isIncreasing) {
        cout << "The array forms an increasing sequence." << endl;
    }
    else {
        cout << "The array does not form an increasing sequence." << endl;
    }

    return 0;
}