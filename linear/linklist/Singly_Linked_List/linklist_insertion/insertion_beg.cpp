// Insert at the beginning of a linked list
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

void insert_beginning(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));   // First of all create a node [ malloc(sizeof(struct Node)) ] then type [ (struct Node*) ]. Create a address And then Store the address value. This address name is temp.
    temp -> data = value;   // data is value place name.
    // temp -> link = NULL;   // At first link position is null.  
    temp ->link = head;    // So that At first head and temp is null. So, write this line
    head = temp;  // head pointing the temp.
}

int main(){
    head = NULL;  // At first head is null.
    insert_beginning(1);  // insert value.
    insert_beginning(3);  // insert value.
    insert_beginning(5);  // insert value.
    print();   // call the print function.
    return 0;
}




// User input Insert at the beginning of a linked list
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

void insert_beginning(int value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));   // First of all create a node [ malloc(sizeof(struct Node)) ] then type [ (struct Node*) ]. Create a address And then Store the address value. This address name is temp.
    temp -> data = value;   // data is value place name.
    // temp -> link = NULL;   // At first link position is null.  
    temp ->link = head;    // So that At first head and temp is null. So, write this line
    head = temp;  // head pointing the temp.
}

int main(){
    head = NULL;  // At first head is null.
    int n, value;
    
    cout << "Enter the number of elements you want to insert: ";
    cin >> n;  // Take the number of elements as input from the user.

    for(int i = 0; i < n; i++) {
        cout << "Enter value to insert at the beginning: " << i << " ";
        cin >> value;  // Take the value to be inserted as input from the user.
        insert_beginning(value);  // Insert the value at the beginning of the list.
    }

    cout << "At the beginning of a linked list: ";
    print();   // Call the print function to display the list.

    return 0;
}