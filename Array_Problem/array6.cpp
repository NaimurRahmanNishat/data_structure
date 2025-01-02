// Write a program in C to print all unique elements in an array.
// Test Data :
// Print all unique elements of an array:
// ------------------------------------------
// Input the number of elements to be stored in the array: 4
// Input 4 elements in the array :
// element - 0 : 3
// element - 1 : 2
// element - 2 : 2
// element - 3 : 5
// Expected Output :
// The unique elements found in the array are:
// 3 5

#include <iostream>
using namespace std;
int main() {
    int count;
    cout << "Input the array size : ";
    cin >> count;

    int arr[count];
    for (int i = 0; i < count; i++) {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }

    cout << "The unique elements found in the array are: ";
    for (int i = 0; i < count; i++) {
        bool isUnique = true;
        for (int j = 0; j < count; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}