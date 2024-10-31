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


#include<iostream>
using namespace std;
void mixed(){
    int a, b, sum;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    sum=a+b;
    cout<<sum << endl;

    float x, y, sub;
    cout<<"Enter the first value: ";
    cin>>x;
    cout<<"Enter the second value: ";
    cin>>y;
    sub=x-y;
    cout<<sub << endl;

    string name="Naimur Rahman Nishat";
    cout<<name;
};
int main(){
    mixed();
}


#include<iostream>
using namespace std;
void mixed(){
    int a=5, b=6, sum;
    sum=a+b;
    cout<<sum << endl;

    float x=8.25, y=2.90, sub;
    sub=x-y;
    cout<<sub << endl;

    string name="Naimur Rahman Nishat";
    cout<<name;
};
int main(){
    mixed();
}


#include<iostream>
#include<utility>
using namespace std;

std::pair<int, float> addition(int a, int b){
    int sum = a + b;
    cout << sum << endl;
    float sub=a-b;
    cout<<sub << endl;
    string name = "Naimur Rahman";
    cout<< name << endl;
    return make_pair(sum,sub); // return sum instead of addition
}
int main(){
    int a = 10, b = 5; // Correct the variable declaration
    std::pair<int, float> result = addition(a, b);
    return 0; // Return 0 to indicate successful completion
}

#include<iostream>
using namespace std;
int add(int a, int b){
    int sum=a+b;
    return sum;
}
float sub(float x, float y){
    float sub_result=x-y;
    return sub_result;
}
void result(string name){
    string add=name;
    cout<<add;
}
int main(){
    int a=5,b=7;
    int sum_add =add(a,b);
    cout<<sum_add << endl;
    float x=6.5,y=3.1;
    float sub_function=sub(x,y);
    cout<<sub_function << endl;
    string name = "Naimur Rahman";
    result(name);
}