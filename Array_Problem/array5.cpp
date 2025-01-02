// Write a program in C to count the total number of duplicate elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1

#include<iostream>
using namespace std;
int main(){
    int count, ctr = 0;
    cout<< "Input the array size: ";
    cin>> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;
                break;
            }
        }
    }
    cout<< "Total number of duplicate elements found in the array is : " << ctr << endl;
    return 0;
}