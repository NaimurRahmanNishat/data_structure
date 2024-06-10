#include<iostream>
using namespace std;
int main (){
    int x=10;
    int *px = &x;
    cout<<*px <<endl <<&x;  // *px print the value and &x print the memory location.
    return 0;
}