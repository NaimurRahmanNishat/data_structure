#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    ifstream fin;
    fout.open("file.txt",ios::out);
    fout<< "My name is Naimur Rahman\n";
    fout<< "I am a software engineer\n";
    fout.close();
    fin.open("file.text",ios::in);
    while (!fin.eof())
    {
        char ch = fin.get();
        cout<< ch;
    }
    fin.close();
};