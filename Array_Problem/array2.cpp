// Write a program in C to read n number of values in an array and display them in reverse order.
// Test Data :
// Input the number of elements to store in the array :3
// Input 3 number of elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7
// Expected Output :
// The values store into the array are :
// 2 5 7
// The values store into the array in reverse are :
// 7 5 2 

#include <iostream>
using namespace std;
int main(){
    int count,i;
    cout<< "Input the array size: ";
    cin>> count;
    int arr[count];
    for (i = 0; i < count; i++)
    {
        cout<< "element - " << i << " :";
        cin>> arr[i];
    }
    cout<< "The values store into the array are : ";
    for (i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "The values store into the array in reverse are : ";
    for (i = count - 1; i >= 0; i--)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
}