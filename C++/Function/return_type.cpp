#include<iostream>
using namespace std;
int display(int x, int y){     // This is formal parameters.
    int sum;
    sum = x + y;
    return sum;
};
int main(){
    int a,b;
    cout<< "Enter the input first element: ";
    cin>> a;
    cout<< "Enter the input second element: ";
    cin>> b;
    int result = display(a,b);  // This is actual parameters
    cout<< "Show the output is: " << result;
    return 0;
};