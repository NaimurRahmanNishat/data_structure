// Insert at the end of a linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node  //This is different block (node) create and store value. A node has two part one is data part and other one data/link part.The second node connect the first link part.
{
    int data;  // This is node data.
    struct Node* link;   // This is Node link. This link connect the another node.
};

struct Node* head;   // This is global variable diclare. This head is null.

void print(){    // create a function. This function name is print.
    struct Node* temp;   // declare a vaiable. This is node type variable and this variable value is temp.
    temp = head;   // head sotre the temp.
    while (temp != NULL)  // check the condition.
    {
        cout<<temp->data << " "; // print temp/head data.
        temp= temp->link;  // This is true again go back the loop and check the condition and print the value.
    }
    
}
void insert_end (int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));   // First of all create a node [ malloc(sizeof(struct Node)) ] then type [ (struct Node*) ]. Create a address And then Store the address value. This address name is temp.
    temp -> data = value;   // data is value place name.
    temp -> link = NULL;   // At first link position is null.
    if(head == NULL){   // If head is equal to null head connect the temp.
        head = temp;    // head connect the temp is equal.
    }    // This if condition only first time print.
    else{
        struct Node* t;  // That's head not null. So,create a Node pointer this name t. 
        t=head;    // This t pointing head. And t pointing the first node.
        while (t->link != NULL)  // check condition
        {
            t = t->link;
        }
        t ->link = temp;  // This t->link point the another node this node is temp.
    }
}
int main(){
    head=NULL; // At first head is null.
    insert_end(1); // insert value.
    insert_end(5); // insert value.
    insert_end(4); // insert value.
    print();    // call the print function.
    return 0;
}




// User input Insert at the end of a linked list
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* link;
};

struct Node* head;

void print() {
    struct Node* temp;
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

void insert_end(int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); // Create a node
    temp->data = value;
    temp->link = NULL;
    if (head == NULL) {
        head = temp;
    } else {
        struct Node* t;
        t = head;
        while (t->link != NULL) {
            t = t->link;
        }
        t->link = temp;
    }
}

int main() {
    head = NULL;
    int n, value;

    cout << "Enter the number of elements you want to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        insert_end(value);
    }

    cout << "The linked list is: ";
    print();

    return 0;
}