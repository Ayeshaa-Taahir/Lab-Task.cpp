#include <iostream>
using namespace std;

int main() {
    int balance = 1000; // Initial balance
    int choice, amount;

    cout << "Welcome to the ATM!\n";
    do {
        // Display ATM menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: // Check Balance
                cout << "Your current balance is: $" << balance << "\n";
                break;
            case 2: // Withdraw Money
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully. New  balance: $" << balance << "\n";
                }
                break;
            case 3: // Deposit Money
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "$" << amount << " deposited successfully. New balance: $" << balance << "\n";
                break;
            case 4: // Exit
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4); // Continue until user exits

    return 0;
}