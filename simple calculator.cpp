#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Simple Calculator\n";
    do {
        // calculator menu
        cout << "\nMenu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            // asked user for two numbers
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                cout << "Result: " << result << "\n";
                break;
            case 2: // Subtraction
                result = num1 - num2;
                cout << "Result: " << result << "\n";
                break;
            case 3: // Multiplication
                result = num1 * num2;
                cout << "Result: " << result << "\n";
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << "\n";
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            case 5: // Exit
                cout << "Exiting the calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5); // Loop until the user exits

    return 0;
}