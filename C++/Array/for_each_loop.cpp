#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    for (int i : arr)  // for each loop 
    {
        cout<< i << " ";
    }
    return 0;
};