#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[4]={1,2,3,4};
    // arr.push(1);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<< arr[i];
    // }
    /*
    This array size is fixed. This array no added index because this array is full array has no empty
    index. So, This syntex is wrong. Right syntex is bellow.
    */
    vector<int> arr = {1,2,3,4};
    arr.push_back(5);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }
    
    return 0;
};