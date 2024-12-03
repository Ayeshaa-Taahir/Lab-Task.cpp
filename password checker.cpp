#include <iostream>
#include <string>
using namespace std;

int main() {
    string predefinedPassword = "1234"; // Predefined password
    string enteredPassword;
    int attempts = 3;

    for (int i = 0; i < attempts; i++) {
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredPassword == predefinedPassword) {
            cout << "Access granted.\n";
            break;
        } else {
            cout << "Incorrect password. ";
            if (i < attempts - 1)
                cout << "Try again.\n";
        }
    }

    if (enteredPassword != predefinedPassword) {
        cout << "Access denied. All attempts used.\n";
    }

    return 0;
}