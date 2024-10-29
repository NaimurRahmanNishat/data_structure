#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<< sizeof(arr);   // sizeof(method)
    return 0;
};

/*
integer has 4 byte but this array size is 5. This array total memory size is 20(4*5=20).
floating number has 4 byte.
long has 8 byte memory size.
double has 8 byte memory size.
short has 1 byte memory size.
std::string has 24 byte memory size.
boolean has 1 byte memory size.
charecter has 1 byte memory size.
*/