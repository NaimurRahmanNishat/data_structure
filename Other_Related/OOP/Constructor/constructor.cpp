#include<iostream>
#include<conio.h>
using namespace std;

class Student 
{
    public:
        int id;
        float cgpa;
    void print()     // create a void type function. This function no return type.
    {
        cout<< id << "\t" << cgpa << endl;
    };
    Student(int x, float y)   // Student is a constructor name.  Constructor is a special type of function that is used to initilize the object.  
    {
        id = x;
        cgpa = y;
    };
    // Student(int a, int b){
    //     id = a;
    //     cgpa = b;
    // }
};

int main(){
    Student nishat(33, 3.17);
    nishat.print();

    Student rahman(25, 3.45);
    rahman.print();

    getch();
};


// // What are the propaties of constructor.
// 1. constructor is a special type of function.
// 2. Constructor has the same name as that of the class it belongs.
// 3. It has no return type not even void.
// 4. It is called automatically.