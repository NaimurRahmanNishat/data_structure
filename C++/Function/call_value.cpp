// function call by value.
#include<iostream>
using namespace std;
void display(int x, int y){
    x = 20, y = 10;
};
int main(){
    int a = 10, b = 20;
    display(a,b);
    cout<< a << " " << b;
    return 0;
};