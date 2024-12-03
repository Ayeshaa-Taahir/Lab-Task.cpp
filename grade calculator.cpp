#include <iostream>
using namespace std;

int main() {
    int marks;
    char grade;

    do {
        // Input marks
        cout << "Enter marks (0-100, -1 to stop): ";
        cin >> marks;

        if (marks == -1) break; // Exit if -1 is entered

        // Validate marks and calculate grade
        if (marks < 0 || marks > 100) {
            cout << "Invalid marks. Please enter a value between 0 and 100.\n";
            continue;
        } else if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else if (marks >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Display grade
        cout << "Grade: " << grade << "\n";
    } while (true); // Repeat until user chooses to stop

    return 0;
}