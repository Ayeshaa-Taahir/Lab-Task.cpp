#include <iostream>
using namespace std;

int main() {
    int number, oddCount = 0, evenCount = 0;

    cout << "Enter numbers (0 to stop):\n";
    while (true) {
        cin >> number;
        if (number == 0) break; // Stop when 0 is entered

        if (number % 2 == 0)
            evenCount++; // Increment even no
        else
            oddCount++; // Increment odd no
    }

    // Display results
    cout << "Total odd numbers: " << oddCount << "\n";
    cout << "Total even numbers: " << evenCount << "\n";

    return 0;
}