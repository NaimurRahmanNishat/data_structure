#include<iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[5];
public:
    Stack() {
        top = -1;
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 4;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack is overflow" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is underflow" << endl;
            return 0;
        } else {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    int count() {
        return top + 1;
    }

    int peek(int position) {
        if (isEmpty()) {
            cout << "Stack is underflow" << endl;
            return 0;
        } else if (position < 0 || position > top) {
            cout << "Invalid position" << endl;
            return 0;
        } else {
            return arr[position];
        }
    }

    void change(int position, int value) {
        if (position < 0 || position > top) {
            cout << "Invalid position" << endl;
        } else {
            arr[position] = value;
            cout << "Value changed at location " << position << endl;
        }
    }

    void display() {
        cout << "All values in the stack are: " << endl;
        for (int i = 4; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack s1;
    int option, position, value;
    do {
        cout << "What operation do you want to perform? Select option number. Enter 0 to exit." << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. Clear Screen()" << endl << endl;

        cin >> option;
        switch (option) {
        case 1:
            cout << "Enter an item to push in the stack: ";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop function called - popped value: " << s1.pop() << endl;
            break;
        case 3:
            cout << (s1.isEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;
            break;
        case 4:
            cout << (s1.isFull() ? "Stack is Full" : "Stack is not Full") << endl;
            break;
        case 5:
            cout << "Enter the position of item you want to peek: ";
            cin >> position;
            cout << "Peek function called - value at position " << position << " is " << s1.peek(position) << endl;
            break;
        case 6:
            cout << "Count function called - Number of items in the stack: " << s1.count() << endl;
            break;
        case 7:
            cout << "Change function called - " << endl;
            cout << "Enter position of item you want to change: ";
            cin >> position;
            cout << "Enter value of item you want to change: ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Display function called - " << endl;
            s1.display();
            break;
        case 9:
            system("cls"); // Use system("clear") for Unix-based systems.
            break;
        default:
            cout << "Enter proper option number" << endl;
        }
    } while (option != 0);
    return 0;
}






// // Another Stack system.
#include<iostream>
using namespace std;
const int MAX = 1000;
int stack[MAX];
int top = -1;
bool isFull(){
    return top == MAX -1;
};
bool isEmpty(){
    return top == -1;
};
void push(int value){
    if (isFull())
    {
        cout<< "Stack is Underflow"<< endl;
        return;
    }
    stack[++top] = value;
};
int pop(){
    if (isEmpty())
    {
        cout<< "Stack is Underflow"<< endl;
        return -1;
    }
    return stack[top--];
};
int peek(){
    if (isEmpty())
    {
        cout<< "Stack is Empty"<< endl;
        return -1;
    }
    return stack[top];
};
void display(){
    if (isEmpty())
    {
        cout<< "Stack is Empty"<< endl;
        return;
    }
    else
    {
        cout<< "Stack element: ";
        for (int i = 0; i <= top; i++)
        {
            cout<< stack[i]<< " ";
        }
        cout<< endl;
    }
};
int main(){
    int choice, value;
    while (true)
    {
        cout<< "\nStack Menu\n";
        cout<< "1. isFull\n";
        cout<< "2. isEmpty\n";
        cout<< "3. push\n";
        cout<< "4. pop\n";
        cout<< "5. peek\n";
        cout<< "6. display\n";
        cout<< "7. exit\n";
        cout<< "Enter the choice menu: ";
        cin>> choice;
        switch (choice)
        {
        case 1:
            cout<< (isFull()? "Stack is Full" : "Stack is not Full");
            break;
        case 2:
            cout<< (isEmpty()? "Stack is Empty" : "Stack is not Empty");
            break;
        case 3:
            cout<< "Enter the choice menu: ";
            cin>> value;
            push(value);
            break;
        case 4:
            cout<< "Enter the pop value: " << pop() << endl;
            break;
        case 5:
            cout<< "Enter the value: " <<peek() << endl;
            break;
        case 6:
            display();
            break;
        case 7:
            cout<< "Exiting...";
            return 0;
        default:
            cout<< "Invalid choice. Please try again.";
            break;
        }
    }
    return 0;
};