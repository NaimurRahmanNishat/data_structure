#include <iostream>
using namespace std;
struct Node {              // Define the Node structure
    int data;              // Data stored in the node
    Node *next;            // Pointer to the next node in the list
    Node *prev;            // Pointer to the previous node in the list
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}      // Constructor to initialize Node with data
};
void forwardTraversal(Node *head) {   // Function to traverse the doubly linked list in forward direction
    Node* current = head;             // Start traversal from the head of the list
    while (current != nullptr) {      // Continue until current node is not null (end of list)
        cout << current->data << " "; // Output data of the current node
        current = current->next;      // Move to the next node
    }
    cout << endl;                     // Print newline after traversal
}
void backwardTraversal(Node *tail) {  // Function to traverse the doubly linked list in backward direction
    Node *current = tail;             // Start traversal from the tail of the list
    while (current != nullptr) {      // Continue until current node is not null (end of list)
        cout << current->data << " "; // Output data of the current node
        current = current->prev;      // Move to the previous node
    }
    cout << endl;                     // Print newline after traversal
}

int main() {
    Node *head = new Node(1);         // Sample usage of the doubly linked list and traversal functions
    Node *second = new Node(2);
    Node *third = new Node(3);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    cout << "Forward Traversal:" << endl;
    forwardTraversal(head);
    cout << "Backward Traversal:" << endl;
    backwardTraversal(third);
    delete head;                      // Free memory allocated for nodes
    delete second;
    delete third;
    return 0;
}