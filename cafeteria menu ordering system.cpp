#include <iostream>
using namespace std;

int main() {
    // Display menu items and their prices
    const int TEA = 2, COFFEE = 3, SANDWICH = 5, BURGER = 7;
    int choice;
    int totalBill = 0;

    cout << "Welcome to the Cafeteria!\n";
    do {
        // Display the menu
        cout << "\nMenu:\n";
        cout << "1. Tea - $2\n";
        cout << "2. Coffee - $3\n";
        cout << "3. Sandwich - $5\n";
        cout << "4. Burger - $7\n";
        cout << "5. Exit\n";
        cout << "Please select an option (1-5): ";
        cin >> choice;

        // Using switch-case to process the choice
        switch (choice) {
            case 1:
                cout << "You ordered Tea.\n";
                totalBill += TEA; // Add price to total bill
                break;
            case 2:
                cout << "You ordered Coffee.\n";
                totalBill += COFFEE;
                break;
            case 3:
                cout << "You ordered Sandwich.\n";
                totalBill += SANDWICH;
                break;
            case 4:
                cout << "You ordered Burger.\n";
                totalBill += BURGER;
                break;
            case 5:
                cout << "Exiting the menu...\n";
                break;
            default:
             cout << "Invalid choice. Please select again.\n";
        }
    } while (choice != 5); // to repeat until the user chooses to exit

    // Display the total bill at the end
    cout << "Your total bill is: $" << totalBill << "\n";
    cout << "Thank you for visiting our Cafeteria!\n";

    return 0;
}