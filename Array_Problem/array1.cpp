// Write a program in C to store elements in an array and print them.
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9 

#include<iostream>
using namespace std;
int main(){
    int count;
    cout<< "Input the array size: ";
    cin>> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }
    cout<< "Show the output: ";
    for (int i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
}