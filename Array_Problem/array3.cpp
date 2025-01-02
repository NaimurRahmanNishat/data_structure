// Write a program in C to find the sum of all elements of the array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 8
// Expected Output :
// Sum of all elements stored in the array is : 15

#include<iostream>
using namespace std;
int main(){
    int count, i, sum = 0;
    cout<< "Input the array size: ";
    cin>> count;
    int arr[count];
    for (i = 0; i < count; i++)
    {
        cout<< "element - " << i << " :";
        cin>> arr[i];
    }
    for (i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    cout<< "Sum of all elements stored in the array is : " << sum << endl;
    return 0;
};



// store another array
#include<iostream>
using namespace std;
int main(){
    int count, i, sum = 0;
    cout<< "Input the array size: ";
    cin>> count;
    int arr[count];
    for (i = 0; i < count; i++)
    {
        cout<< "element - " << i << " :";
        cin>> arr[i];
    }
    for (i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    int arr2[count];
    arr2[count] = sum;
    cout<< "Sum of all elements stored in the array is : " << arr2[count] << endl;
    return 0;
};
