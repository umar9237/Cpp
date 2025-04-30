#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest, smallest;

    // Find the largest number
    if (num1 >= num2 && num1 >= num3)
        largest = num1;
    else if (num2 >= num1 && num2 >= num3)
        largest = num2;
    else
        largest = num3;

    // Find the smallest number
    if (num1 <= num2 && num1 <= num3)
        smallest = num1;
    else if (num2 <= num1 && num2 <= num3)
        smallest = num2;
    else
        smallest = num3;

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
