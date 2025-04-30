#include <iostream>
#include <vector>  // Include the vector library
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};  // Initialize vector with values

    // Print all elements using a loop
    cout << "Vector elements: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Add elements at the end
    nums.push_back(60);
    nums.push_back(70);
    cout << "After push_back(): ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Remove last element
    nums.pop_back();
    cout << "After pop_back(): ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Access specific element (like an array)
    cout << "Element at index 2: " << nums[2] << endl;

    // Get vector size
    cout << "Vector size: " << nums.size() << endl;

    // Insert an element at a specific position
    nums.insert(nums.begin() + 2, 25);  // Insert 25 at index 2
    cout << "After inserting 25 at index 2: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Remove element at a specific position
    nums.erase(nums.begin() + 3);  // Remove element at index 3
    cout << "After erasing element at index 3: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Clear all elements
    nums.clear();
    cout << "After clear(), vector size: " << nums.size() << endl;

    return 0;
}
