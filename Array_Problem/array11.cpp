// Write a program in C to sort elements of an array in ascending order.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array :
// element - 0 : 2
// element - 1 : 7
// element - 2 : 4
// element - 3 : 5
// element - 4 : 9
// Expected Output :
// Elements of array in sorted ascending order:
// 2 4 5 7 9

#include<iostream>
using namespace std;
int main(){
    int count;
    cout<< "Input the size of array: ";
    cin>> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }
    // sorting  bubble sort
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    cout << "Elements of array in sorted ascending order: ";
    for (int i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
}