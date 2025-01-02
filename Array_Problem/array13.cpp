// Write a program in C to insert the values in the array (sorted list).
// Test Data :
// Input number of elements you want to insert (max 100): 5
// Input 5 elements in the array in ascending order:
// element - 0 : 2
// element - 1 : 3
// element - 2 : 4
// element - 3 : 7
// element - 4 : 8
// Input the value to be inserted : 5
// The existing array list is :
// 2 3 4 7 8
// After Insert the list is :
// 2 3 4 5 7 8 


#include<iostream>
using namespace std;
int main (){
    int count, i;
    cout<< "Input number of elements you want to insert (max 100): ";
    cin>> count;
    cout<< "Input " << count << " elements in the array in ascending order: " << endl;
    int arr[count];
    for (i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }
    cout<< "The existing array list is : ";
    for (i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;
    // n position insert the value
    int pos;
    int value;
    cout<< "Input the insert value: ";
    cin>> value;
    for (i = 0; i < count; i++)
    {
        if (arr[i] > value)
        {
            break;
        }
    }
    pos = i;
    for ( i = count; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    count++;
    cout<< "After Insert the list is : ";
    for ( i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
}