#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user for input
    cout << "Enter a positive integer to find its divisors: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer.\n";
    } else {
        cout << "The divisors of " << number << " are: ";
        // Loop to find and display divisors
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) { // Check divisibility
                cout << i << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}