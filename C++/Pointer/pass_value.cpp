// pass by value of pointer.
#include<iostream>
using namespace std;
void change(int x)
{
    x=20; 
    cout<<x <<endl;
}
int main(){
    int x=10;
    change(x);
}