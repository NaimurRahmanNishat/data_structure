// only void keword use in there are no return type.
#include<iostream>
using namespace std;
void display(int x, int y){
    int sum;
    sum = x + y;
    cout<< "Show the output is: " << sum;
};
int main(){
    int a,b;
    cout<< "Enter the input first element: ";
    cin>> a;
    cout<< "Enter the input second element: ";
    cin>> b;
    display(a,b);
    return 0;
};