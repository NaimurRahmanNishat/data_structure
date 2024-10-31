#include<iostream>
using namespace std;
int main(){
    int *p;  // initiliaze the pointer. 
    cout<< p << endl;  // print the memory address.
    int x = 10;
    cout<< &x << endl; // print memory address.
    p = &x;
    cout<< p << endl;  // print memory address.
    return 0;
};