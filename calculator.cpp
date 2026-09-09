#include <iostream>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        // Displaying the menu
        cout << "\n========== Calculator Menu ==========\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exit\n";
        cout << "=====================================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Ask for input only if the user chooses a valid math operation
        if (choice >= 1 && choice <= 4) {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }

        // Perform the chosen operation
        switch (choice) {
            case 1:
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case 4:
                // Handling division by zero
                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select an option between 1 and 5." << endl;
        }

    } while (choice != 5); // Continue looping until the user chooses to exit

    return 0;
}
