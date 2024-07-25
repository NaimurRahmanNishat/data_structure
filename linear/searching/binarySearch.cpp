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