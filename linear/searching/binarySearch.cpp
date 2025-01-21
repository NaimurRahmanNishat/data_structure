// Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int value) {    // Initilize the parameter.
    while (low <= high)                                        // This condition is true doing this loop.
    {
        int mid = low + (high - low) / 2;                      // Initilize the mid and store the value.
        if (arr[mid] == value)                                 // If the arr[mid] == value return mid otherwise check the other condition. 
            return mid;                                        // Condition is true return the value.
        if (arr[mid] < value)                                  // If x greater, ignore left half
            low = mid + 1;
        else
            high = mid - 1;                                    // If x is smaller, ignore right half
    }
    return -1; // If we reach here, then element was not present
};
int main() {
    int arr[] = {2, 4, 0, 1, 9, 8, 5, 7};               // array initilize.
    int value = 8;                              // Searching value is 8.
    int n = sizeof(arr) / sizeof(arr[0]);       // This is array size operation.
    int result = binarySearch(arr, 0, n-1, value);     // call back the linearSearch.
    cout<< ((result == -1)? "Element is not present in array : " : "Element is present at index : ") << result << endl;
    return 0;
};

// Time Complexity: O(log N)
// Auxiliary Space: O(1)


// user input binary search algorithum
#include <iostream>
using namespace std;
int binarySearch(int arr[], int value, int count) {
    int low = 0, high = count - 1;
    while (low <= high) {
        int mid = (low + high) / 2; 
        if (arr[mid] == value) {
            return mid; 
        } else if (arr[mid] < value) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}
int main() {
    int count, value;
    cout << "Input the array size: ";
    cin >> count;
    int arr[count];
    cout << "Input elements in sorted order:\n";
    for (int i = 0; i < count; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }
    cout << "Enter the searching value: ";
    cin >> value;
    int result = binarySearch(arr, value, count);
    if (result != -1) {
        cout << "Value found at index: " << result << endl;
    } else {
        cout << "Value not found in the array." << endl;
    }
    return 0;
}
