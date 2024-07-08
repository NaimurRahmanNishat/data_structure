// #include<iostream>
// #include<conio.h>
// using namespace std;

// class Student   // class name first word alwayas capital letter writing other wise this is error show
// {
//     public:    // this is must be initilize other wise this called is error.
//         int id;
//         float cgpa;
// };

// int main(){
//     Student nishat;      // Student is a class and nishat is a variable this is object variable.

//     nishat.id = 33;
//     nishat.cgpa = 3.17;
//     cout<< nishat.id << endl << nishat.cgpa;
//     getch();
// };




// // Many object add system.
// #include<iostream>
// #include<conio.h>
// using namespace std;

// class Student   // class name first word alwayas capital letter writing other wise this is error show
// {
//     public:    // this is must be initilize other wise this called is error.
//         int id;
//         float cgpa;
// };

// int main(){
//     Student nishat;      // Student is a class and nishat is a variable this is object variable.

//     nishat.id = 33;
//     nishat.cgpa = 3.17;
//     cout<< nishat.id << "\t" << nishat.cgpa << endl;

//     Student rahman;
//     rahman.id = 25;
//     rahman.cgpa = 3.55;
//     cout << rahman.id << "\t" << rahman.cgpa;
//     getch();
// };


// Another object writing system.
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
    Student nishat, rahman;      // Student is a class and nishat is a variable this is object variable.

    nishat.id = 33;
    nishat.cgpa = 3.17;
    cout<< nishat.id << "\t" << nishat.cgpa << endl;

    rahman.id = 25;
    rahman.cgpa = 3.55;
    cout << rahman.id << "\t" << rahman.cgpa;
    getch();
};