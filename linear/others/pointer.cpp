#include<iostream>
using namespace std;
int main (){
    int x=10;
    int *px = &x;
    cout<<*px <<endl <<&x;  // *px print the value and &x print the memory location.
    return 0;
}

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
    cout<<x;
}


// pass by reference of pointer.


#include<iostream>
using namespace std;
void change(int *px)
{
    *px=20; 
    cout<<*px <<endl;
}
int main(){
    int x=10;
    change(&x);
    cout<<x;
}