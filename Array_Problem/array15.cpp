// Write a program in C to delete an element at a desired position from an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Input the position where to delete: 3
// Expected Output :
// The new list is : 1 2 4 5


#include<iostream>
using namespace std;
int main(){
    int count, value, position, del;
    cout<< "Input the size of array: ";
    cin>> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }
    
    return 0;
}