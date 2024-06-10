// This is function recall systems.

// #include<iostream>
// using namespace std;
// void add(int a, int b)   // This is formal parameters.
// {
//     int sum=a+b;
//     cout<<sum;
// }
// int main(){
//     int m,n;
//     add(m,n);  // This is actual parameters
// }


// This is call by value systems.
#include<iostream>
using namespace std;
void add(int x, int y)  
{
    x=20, y=10;
}
int main(){
    int x=10, y=20;
    add(x,y); 
    cout<<x << " " << y;
}