#include<iostream>
#include<stdio.h>
using namespace std;
struct  myStruct            // This is data type. this type name is struct.
{
    string name;
    int age;
    float height;
}; // This is create a new variable. This variable name is myStruct.

int main(){
    struct  myStruct person1;
    struct  myStruct person2;
    person1.name = "Naimur Rahman Nishat";
    person1.age =23;
    person1.height = 5.7;
    cout<< person1.name <<endl << person1.age <<endl << person1.height <<endl;
    return 0;
}