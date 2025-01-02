// user input binary search algorithum
#include <iostream>
#include<algorithm>
using namespace std;
void binarySearch(int arr[], int low, int high, int value) {
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == value)
            return mid;
        if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << ((result == -1) ? "Element is not present in array" : "Element is present at index") << " : " << result << endl;
    // return -1; // Return -1 if the target element is not found
};
int main() {
    int count, value;
    cout<< "Enter the number of elements in the array: ";
    cin>> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "Input the vlaue: ";
        cin>> arr[i];
    }
    cout<< "Enter the value of Search: ";
    cin>> value;
     binarySearch(arr, 0, count - 1, value);
    return 0;
};