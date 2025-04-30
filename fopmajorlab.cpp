#include <iostream>
using namespace std;
int main()
{
    // Variable Declaration
    int choice;
    double num1, num2, result;

    do
    {
        // Display the menu
        cout << endl << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Find Maximum" << endl;
        cout << "6. Find Minimum" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 7)
        {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        // Get input numbers
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Perform the chosen operation
        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;
        case 5:
                result = (num1 > num2) ? num1 : num2;
                cout << "Maximum: " << result << endl;
                break;
            case 6:
                result = (num1 < num2) ? num1 : num2;
                cout << "Minimum: " << result << endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (true);

    return 0;
}
