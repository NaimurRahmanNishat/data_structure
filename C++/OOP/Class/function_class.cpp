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
};

int main(){
    // Student nishat, rahman;    // another writing system.

    Student nishat;
    nishat.id = 33;
    nishat.cgpa = 3.17;
    nishat.print();

    Student rahman;
    rahman.id = 25;
    rahman.cgpa = 3.47;
    rahman.print();

    getch();
};



// Adding parameterized function to the class.
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
    void setValue(int x, float y)    
    {
        id = x;
        cgpa = y;
    };
};

int main(){
    Student nishat, rahman;

    nishat.setValue(33, 3.17);
    nishat.print();

    rahman.setValue(25, 3.45);
    rahman.print();

    getch();
};