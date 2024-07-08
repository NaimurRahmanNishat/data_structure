#include<iostream>
#include<conio.h>
using namespace std;

class Student   // class name first word alwayas capital letter writing other wise this is error show
{
    public:    // this is must be initilize other wise this called is error.
        int id;
        float cgpa;
};

int main(){
    Student nishat;      // Student is a class and nishat is a variable this is object variable.

    nishat.id = 33;
    nishat.cgpa = 3.17;
    cout<< nishat.id << endl << nishat.cgpa;
    getch();
};