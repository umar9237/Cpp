#include <iostream>
using namespace std;

int searcharr(int arr[][3], int search) {  // Fixed function signature
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == search) {
                cout << "Number found at row " << i << ", column " << j << endl;
                return i;  // Exiting immediately after finding the number
            }
        }
    }
    cout << "Number not found" << endl;
    return -1;  // Return -1 if not found
}

int main() {
    int arr[2][3] = {{13, 11, 17}, {15, 20, 0}};  // Fixed missing element in 2nd row
    int search = 20;
    searcharr(arr, search);

    return 0;
}
