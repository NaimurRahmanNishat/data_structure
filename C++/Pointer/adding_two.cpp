// Adding 2 number in pointer.
#include<iostream>
using namespace std;
int main(){
    int x = 5;              // initilize the value of x is 5.
    int y = 7;              // initilize the value of x is 5.
    int *p1, *p2;           // initilize the pointer.
    p1 = &x;                // x address store the pointer(p1). 
    p2 = &y;                // y address store the pointer(p2).
    int sum = *p1 + *p2;    // addition the pointer value. 
    cout<< sum << endl;     // Output is: 12.
};