#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> number = {1,2,3,4};   
    for (int i = 0; i < number.size(); i++)   // added size(method) because there are no size indicate
    {
        cout<< number[i] << " ";
    }
    return 0;
};