#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user for input
    cout << "Enter a positive integer for the reverse pattern: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        cout << "Reverse number pattern:\n";
        // Nested loops for the pattern
        for (int i = n; i >= 1; i--) { // Outer loop controls rows
            for (int j = i; j >= 1; j--) { // Inner loop controls numbers in each row
                cout << j << " ";
            }
            cout << "\n"; // Move to the next line after each row
        }
    }

    return 0;
}