#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter the first element: ";
    cin>> a;
    cout<< "Enter the second element: ";
    cin>> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<< "Input the element: ";
            cin>> arr[i][j];
        }
        
    }
    cout<< "\n\nShow the output is: " << "\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout<< "\n";
    }
    
    return 0;
};