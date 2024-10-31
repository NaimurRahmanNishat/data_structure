#include<iostream>
using namespace std;
void display(int arr[4]){
    cout<< "Show the output is: ";
    for (int i = 0; i < 4; i++)
    {
        cout<< arr[i] << "\n";
    }
    
}
int main(){
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {5,6,7,8};
    display(arr1);
    display(arr2);
    return 0;
};