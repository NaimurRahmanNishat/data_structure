#include<iostream>
using namespace std;
int main(){
    int count;
    cout<< "Enter the array size: ";
    cin>> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout<< "Enter the input value " << i + 1 << ": ";
        cin>> arr[i];
    }
    cout<< "Show the output is: ";
    for (int i = 0; i < count; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}