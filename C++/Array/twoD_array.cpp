// tow dimention array loop has two time continue/run.
#include<iostream>
using namespace std;
int main(){
    int arr[2][2] = {{1,2},{3,4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout<< "\n";
    }
    
    return 0;
};
