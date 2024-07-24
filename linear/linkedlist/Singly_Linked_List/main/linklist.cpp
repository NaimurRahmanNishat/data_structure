#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node  //This is different block (node) create and store value. A node has two part one is data part and other one data/link part.The second node connect the first link part.
{
    int data;  // This is node data.
    struct Node* link;   // This is Node link. This link connect the another node.
};

struct Node* head;   // This is global variable diclare.

void print(){    // create a function. This function name is print.
    struct Node* temp;   // declare a vaiable. This is node type variable and this variable value is temp.
    temp = head;   // head sotre the temp.
    while (temp != NULL)  // check the condition.
    {
        cout<<temp->data << " "; // print temp/head data.
        temp= temp->link;  // This is true again go back the loop and check the condition and print the value.
    }
    
}

int main(){  // main function.
    head=NULL;  // first of all head (null).
    head = (struct Node*) malloc(sizeof(struct Node)); // create a node size and store the value.
    head->data=2;  // A node has tow part one data and another one link. the data value 2.
    head->link = (struct Node*) malloc(sizeof(struct Node)); // conecting the another node.
    head->link->data=5; // This is second node value.
    head->link->link=NULL; // The second node link is null because there has no node.
    print();  // call the function.
    return 0;
}