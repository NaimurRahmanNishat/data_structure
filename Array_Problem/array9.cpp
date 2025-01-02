// Write a program in C to find the maximum and minimum elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 45
// element - 1 : 25
// element - 2 : 21
// Expected Output :
// Maximum element is : 45
// Minimum element is : 21 

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
    int max = arr[0], min = arr[0];
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    cout<< "Maximum element is : " << max << endl;
    cout<< "Minimum element is : " << min;
    return 0;
}