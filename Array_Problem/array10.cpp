// Write a program in C to separate odd and even integers into separate arrays.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 25
// element - 1 : 47
// element - 2 : 42
// element - 3 : 56
// element - 4 : 32
// Expected Output :
// The Even elements are :
// 42 56 32
// The Odd elements are :
// 25 47

#include<iostream>
using namespace std;
int main(){
    int count;
    cout << "Input the array size: ";
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "element - " << i << " : ";
        cin>> arr[i];
    }
    int even[count], odd[count];
    int j = 0, k = 0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;   
        }
        if (arr[i] % 2 != 0)
        {
            odd[k] = arr[i];
            k++;
        }
        
    }
    cout<< "The Even elements are : ";
    for (int i = 0; i < j; i++)
    {
        cout<< even[i] << " ";
    }
    cout<< "\nThe Odd elements are : ";
    for (int i = 0; i < k; i++)
    {
        cout << odd[i] << " ";
    }
    
    return 0;
}