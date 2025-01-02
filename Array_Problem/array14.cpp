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
    int count, i;
    cout<< "Input the size of array : ";
    cin>> count;
    int arr[count];
    cout<< "Input " << count << " elements in the array in ascending order: " << endl;
    for ( i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin >> arr[i];
    }
    cout<< "The current list of the array : ";
    for ( i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
}