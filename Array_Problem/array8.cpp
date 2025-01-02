// Write a program in C to count the frequency of each element of an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 25
// element - 1 : 12
// element - 2 : 43
// Expected Output :
// The frequency of all elements of an array :
// 25 occurs 1 times
// 12 occurs 1 times
// 43 occurs 1 times 

#include<iostream>
using namespace std;
int main(){
    int count,n;
    cout<< "Input the array size: ";
    cin>> count;
    int arr[count], freq[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
        freq[i] = -1;
    }
    for (int i = 0; i < count; i++)
    {
        n = 1;
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                n++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = n;
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (freq[i] != 0)
        {
            cout<< arr[i] << " occurs " << freq[i] << " times" << endl;
        }
    }
    return 0;
}