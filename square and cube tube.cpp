#include <iostream>
using namespace std;

int main() {
    int n;

    // asked the user for input
    cout << "Enter a positive integer to generate the table of squares and cubes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        cout << "Number\tSquare\tCube\n";
        // Loop to calculate squares and cubes
        for (int i = 1; i <= n; i++) {
            cout << i << "\t" << (i * i) << "\t" << (i * i * i) << "\n";
        }
    }

    return 0;
}