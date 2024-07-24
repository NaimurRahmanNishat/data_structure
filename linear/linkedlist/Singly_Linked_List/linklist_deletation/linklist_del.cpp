// Insert at the end delete of a linked list
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
void insert (int value){
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

void deleteNode(int position){   // Create a deleteNode function and this parameter is position.
    if(position == 1)            // condition is true then follow this statement.
    {
        struct Node* temp;       // Create a new node this node name is temp.
        temp = head;             // Global variable head value store the temp.
        head = head -> link;     // The first node name is (temp/head) and this node memory address name is (head -> link / temp -> link). This fist node (temp) point the next node. I connect the second node then head can't connection the temp node.
        free(temp);              // This free function (temp) remove the temp node. This function not use other wise temp node not delete this temp node store the memory. 
    }
    else                         // Condition is false follow this statement.
    {
        struct Node* temp1;                        // Create a new node this node name is tmep1.
        temp1 = head;                              // Global variable head value store the temp1.
        for(int i = 1; i <= position - 2; i++)     // Initilize the loop i value is 1. This condition start position. if delete is next position then last node connect the before the node. And increase the node.  
        {
            temp1 = temp1 -> link;                 // This temp1->link point the another node this node is temp1. 
        }
        struct Node* temp2;                        // Create a new node this node name is tmep2.
        temp2 = temp1 -> link;                     // This temp1->link point the another node this node is temp2. 
        temp1 -> link = temp2 -> link;             // temp2 -> link point this node and same this node point the temp1 -> link.
        free(temp2);                               // This free function (temp) remove the temp node. This function not use other wise temp node not delete this temp node store the memory. 
    }
};

int main(){
    head=NULL; // At first head is null.
    insert(1); // insert value.
    insert(5); // insert value.
    insert(4); // insert value.
    insert(8); // insert value.
    insert(9); // insert value.
    insert(7); // insert value.
    insert(2); // insert value.
    deleteNode(4);  // call the deleteNode function.
    print();
    return 0;
}





// Insert at the end delete of a linked list using user input
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node  // Define the structure for a Node.
{
    int data;  // Data part of the Node.
    struct Node* link;   // Link part of the Node pointing to the next Node.
};

struct Node* head;   // Global variable 'head' which initially is NULL.

void print() {    // Function to print the linked list.
    struct Node* temp;   // Temporary Node pointer.
    temp = head;   // Start from the head.
    while (temp != NULL) {  // Traverse the list until the end.
        cout << temp->data << " "; // Print the data of the current Node.
        temp = temp->link;  // Move to the next Node.
    }
    cout << endl;
}

void insert(int value) {  // Function to insert a Node at the end.
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));   // Create a new Node.
    temp->data = value;   // Assign data to the Node.
    temp->link = NULL;   // The new Node points to NULL.
    if (head == NULL) {   // If the list is empty, make the new Node the head.
        head = temp;
    } else {
        struct Node* t = head;  // Temporary Node pointer starting from head.
        while (t->link != NULL) {  // Traverse to the end of the list.
            t = t->link;
        }
        t->link = temp;  // Link the last Node to the new Node.
    }
}

void deleteNode(int position) {   // Function to delete a Node from a given position.
    if (position == 1) {  // If the position is the first Node.
        struct Node* temp = head;  // Temporary Node pointer pointing to the head.
        head = head->link;  // Move the head to the next Node.
        free(temp);  // Free the old head Node.
    } else {
        struct Node* temp1 = head;  // Temporary Node pointer starting from head.
        for (int i = 1; i <= position - 2; i++) {  // Traverse to the Node before the one to be deleted.
            temp1 = temp1->link;
        }
        struct Node* temp2 = temp1->link;  // Temporary Node pointer pointing to the Node to be deleted.
        temp1->link = temp2->link;  // Link the previous Node to the next Node.
        free(temp2);  // Free the Node to be deleted.
    }
}

int main() {
    head = NULL; // Initialize head to NULL.
    int n, value, position;
    
    cout << "How many elements do you want to insert? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter value to insert: ";
        cin >> value;
        insert(value);
    }

    cout << "Current List: ";
    print();
    
    cout << "Enter position of the element to delete: ";
    cin >> position;
    deleteNode(position);
    
    cout << "List after deletion: ";
    print();
    
    return 0;
}