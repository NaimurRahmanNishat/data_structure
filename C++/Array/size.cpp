#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int arrsize = sizeof(arr)/ sizeof(arr[0]);
    cout<< arrsize;
    return 0;
}