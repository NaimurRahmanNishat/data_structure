#include <iostream>
#include<conio.h>
using namespace std;

struct Node {
    int data;
    Node* link;
};

struct Node* head = NULL;

void print() {
    struct Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

void insert_position(int value, int position) {
    struct Node* temp = new Node();
    temp->data = value;
    temp->link = NULL;
    if (position == 1) {
        temp->link = head;
        head = temp;
        return;
    }
    Node* temp1 = head;
    for (int i = 0; i < position - 2; i++) {
        if (temp1 == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }
        temp1 = temp1->link;
    }
    if (temp1 == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    temp->link = temp1->link;
    temp1->link = temp;
}

int main() {
    int count, value, position;
    cout << "Enter the number of elements to insert: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "Input the value and position: ";
        cin >> value >> position;
        insert_position(value, position);
    }
    cout << "Show the output is: ";
    print();
    getch();
}