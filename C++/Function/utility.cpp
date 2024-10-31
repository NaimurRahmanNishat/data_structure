#include<iostream>
#include<utility>
using namespace std;
std::pair<int, float> display(int a, int b){
    int sum = a + b;
    cout << sum << endl;
    float sub=a-b;
    cout<<sub << endl;
    string name = "Naimur Rahman";
    cout<< name << endl;
    return make_pair(sum,sub); // return sum instead of addition
}
int main(){
    int a = 10, b = 5;
    std::pair<int, float> result = display(a, b);
    return 0;
}