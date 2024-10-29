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
    Student()
    {
        cout<< "default constructor" << endl;
    };
};

int main(){
    Student ob;
    Student nishat(33, 3.17);
    nishat.print();

    Student rahman(25, 3.45);
    rahman.print();

    getch();
};


// There are two types of constructor. (i) default (ii) parameterized .