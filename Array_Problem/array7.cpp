// Write a program in C to merge two arrays of the same size sorted in descending order.
// Test Data :
// Input the number of elements to be stored in the first array :3
// Input 3 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// Input the number of elements to be stored in the second array :3
// Input 3 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// Expected Output :
// The merged array in decending order is :
// 3 3 2 2 1 1 

#include<iostream>
using namespace std;
int main(){
    int count,i;
    cout<< "Input the array size: ";
    cin>> count;
    int arr1[count], arr2[count], arr3[count * 2];
    for ( i = 0; i < count; i++)
    {
        cout<< "element arr1 - " << i << " : ";
        cin>> arr1[i];
        cout<< "element arr2 - " << i << " : ";
        cin>> arr2[i];
    } 
    for (int i = 0; i < count; i++)
    {
        arr3[i] = arr1[i];
        arr3[count + i] = arr2[i];
    }
    for (int i = 0; i < count * 2 - 1; i++)
    {
        for (int j = 0; j < count * 2 - 1; j++)
        {
            if (arr3[j] < arr3[j+1])
            {
                int temp = arr3[j+1];
                arr3[j+1] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    cout<< "Show the output is: ";
    for (int i = 0; i < count * 2; i++)
    {
        cout<< arr3[i] << " ";
    }
    cout<< endl;
    return 0;
}