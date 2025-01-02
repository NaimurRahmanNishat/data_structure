// Write a program in C to copy the elements of one array into another array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12 

#include <iostream>
using namespace std;
int main() {
    int count;
    cout<< "Input the array size: ";
    cin>> count;
    int arr1[count], arr2[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr1[i];
    }
    cout<< "The elements stored in the first array are : ";
    for (int i = 0; i < count; i++)
    {
        cout<< arr1[i] << " ";
    }
    cout<< "\nThe elements copied into the second array are : ";
    for (int i = 0; i < count; i++)
    {
        arr2[i] = arr1[i];
        cout<< arr2[i] << " ";
    }
    
    return 0;
}
