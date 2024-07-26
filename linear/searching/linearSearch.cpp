// Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.

#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
};
int main() {
    int arr[] = {2, 4, 0, 1, 9};               // array initilize.
    int n = sizeof(arr) / sizeof(arr[0]);       // This is array size operation.
    int target = 9;      // This 9 is searching value.
    int result = linearSearch(arr, n, target);     // call back the linearSearch.
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
};