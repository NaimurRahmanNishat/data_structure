// Write a program in C to sort the elements of the array in descending order.
// Test Data :
// Input the size of array : 3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 9
// element - 2 : 1
// Expected Output :
// Elements of the array in sorted descending order:
// 9 5 1

#include <iostream>
using namespace std;
int main(){
    int count;
    cout << "Input the array size: ";
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout << "element - " << i << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Elements of the array in sorted descending order: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}