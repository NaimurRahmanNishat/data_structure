// Write a program in C to insert values in the array (unsorted list).
// Test Data :
// Input the size of array : 4
// Input 4 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 8
// element - 2 : 7
// element - 3 : 10
// Input the value to be inserted : 5
// Input the Position, where the value to be inserted :2
// Expected Output :
// The current list of the array :
// 1 8 7 10
// After Insert the element the new list is :
// 1 5 8 7 10


#include<iostream>
using namespace std;
int main(){
    int count, position, value;

    // Input the size of the array
    cout<< "Input the array size : ";
    cin>> count;

    // Declare the array
    int arr[count];

    // Input array elements
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }

    // Display the current list of the array
    cout<<"The current list of the array : ";
    for (int i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;

    // Input the value to be inserted
    cout << "Input the value to be inserted: ";
    cin >> value;

    // Input the position to insert the value
    cout << "Input the Position, where the value to be inserted: ";
    cin >> position;

    for (int i = count - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    count++;

    // Display the new list of the array
    cout<< "After Insert the element the new list is : ";
    for (int i = 0; i < count; i++)
    {
        cout<< arr[i]<< " ";
    }
    
    return 0;
}