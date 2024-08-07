#include<iostream>
using namespace std;
int main(){
    int x = 5;           // 5 store the x.
    int *p;              // initilize the pointer.
    p = &x;              // x address store the pointer(p).
    cout<< x << endl;    // print the value(5).
    cout<< *p << endl;   // print the value(5).
    cout<< p << endl;    // print the memory address.
    cout<< &x << endl;   // print the memory address.
    return 0;
};


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