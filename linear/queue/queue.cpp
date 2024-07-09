#include<iostream>
#include<stdlib.h>
using namespace std;
class Queue
{
private:
    int font;
    int rear;
    int arr[5];
public:
    Queue()
    {
        font = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if(font == -1 && rear == -1)
            return true;
        else
            return false;
    };

    bool isFull()
    {
        if(rear == 4)
            return true;
        else
            return false;
    };

    void enqueue(int value)
    {
        if(isFull())
        {
            cout<< "Queue is full" << endl;
            return;
        }
        else if(isEmpty())
        {
            rear = 0;
            font = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    };

    int dequeue()
    {
        int x;
        if(isEmpty())
        {
            cout<< "Queue is Empty" << endl;
            return 0;
        }
        else if(font == rear)
        {
            x = arr[font];
            arr[font] = 0;
            rear = -1;
            font = -1;
            return x;
        }
        else
        {
                        x = arr[font];
            arr[font] = 0;
            font++;
            return x;
        }
    };

    int count()
    {
        return (rear - font +1);
    }

    void display()
    {
        cout<< "All values in the Queue are - "<< endl;
        for (int i = 0; i < 5; i++)
        {
            cout<< arr[i] << endl;
        }
        
    }
};

int main(){
    Queue q1;
    int option, value;
    do
    {
        cout<< "\n \n what operation do you want to perform? select option number. Enter 0 to exit." << endl;
        cout<< "1. enqueue()" << endl;
        cout<< "2. dequeue()" << endl;
        cout<< "3. isEmpty()" << endl;
        cout<< "4. isFull()" << endl;
        cout<< "5. count()" << endl;
        cout<< "6. display()" << endl;
        cout<< "7. Clear Screen" << endl << endl;

        cin>> option;

        switch (option)
        {
        case 0:
            /* code */
            break;

        case 1:
            cout<< "Enqueue operation \n Enter an Item to Enqueue in the Queue : ";
            cin>> value;
            q1.enqueue(value);
            break;

        case 2:
            cout<< "Dequeue Operation \nDequeue value : " << q1.dequeue() << endl; 
            break;

        case 3:
            if (q1.isEmpty())
            {
                cout<< "Queue is Empty" << endl;
            }
            else
            {
                cout<< "Queue is not Empty" << endl;
            }
            
            break;

        case 4:
            if (q1.isFull())
            {
                cout<< "Queue is Full" << endl;
            }
            else
            {
                cout<< "Queue is not Full" << endl;
            }
            break;

        case 5:
            cout<<"Count Operation \nCount of items in Queue : " << q1.count() << endl;
            break;

        case 6:
            cout<< "Display Function called - " << endl;
            q1.display();
            break;

        case 7:
            system("cls");
            break;

        default:
            break;
        }
    } while (option != 0);
    return 0;
};





// Shorts Queue.
#include <iostream>       // This is header file.
using namespace std;      // This is standared libarary.

class Queue {             // This is a class. Class first name always capitailize.
private:                  // A class has two part one is private and another one is public.
    int front, rear, n;   // Initilize a data type.
    int *arr;             // Initilize a pointer. This is memory location.

public:                   // This is public class.
    Queue(int size) {     // This Queue is constructor. int size is constructor parameter.
        n = size;         //  This line assigns the value of the constructor parameter size to the member variable n.    
        arr = new int[n]; // This line dynamically allocates an array of integers of size n on the heap and assigns its address to the pointer arr.
        front = rear = -1;// This line initializes the front and rear member variables to -1. This typically indicates that the queue is initially empty.
    }

void enqueue(int value) {                     // This is a void function named enqueue. It takes one integer parameter called value. This function is a member of the Queue class.
    if (rear == n - 1) {                      // This checks if the rear index has reached the maximum size of the queue (n - 1), indicating that the queue is full.
        cout << "Overflow" << endl;           // If the queue is full, it prints "Overflow" to the console and exits the function.
    } else if (front == -1 && rear == -1) {   // This checks if the queue is empty by verifying that both front and rear are -1.
        front = rear = 0;                     // If the queue is empty, it sets both front and rear to 0, indicating that the queue will now have its first element.
        arr[rear] = value;                    // It assigns the value to the first position in the array (queue).
    } else {                                  // If the queue is not empty and not full:
        rear++;                               // It increments the rear index to point to the next empty position in the queue.
        arr[rear] = value;                    // It assigns the value to the position at the new rear index.
    }
};

int dequeue() {                                   // This is an integer function named dequeue. It returns an integer value. This function is a member of the Queue class.
    if (front == -1 && rear == -1) {              // This checks if both front and rear are -1, indicating that the queue is empty.
        cout << "Queue is Empty" << endl;         // If the queue is empty, it prints "Queue is Empty" to the console.
        return -1;                                // It returns -1 to indicate that the dequeue operation failed because the queue is empty.
    } else if (front == rear) {                   // This checks if front and rear are equal, indicating that the queue has only one element.
        int value = arr[front];                   // It retrieves the value at the front of the queue.
        front = rear = -1;                        // It sets both front and rear to -1, indicating that the queue is now empty after removing the element.
        return value;                             // It returns the retrieved value.
    } else {                                      // If the queue has more than one element:
        return arr[front++];                      // It returns the value at the front of the queue and increments the front index to point to the next element.
    }
};

void display() {                                   // This is a void function named display. It does not return a value. This function is a member of the Queue class.
    if (front == -1 && rear == -1) {               // This checks if both front and rear are -1, indicating that the queue is empty.
        cout << "Queue is Empty" << endl;          // If the queue is empty, it prints "Queue is Empty" to the console.
    } else {                                       // If the queue is not empty:
        cout << "Queue elements: ";                // It prints "Queue elements: " to the console as a header for the list of elements.
        for (int i = front; i <= rear; i++) {      // This is a for loop that starts from the front index and goes up to and including the rear index.
            cout << arr[i] << " ";                 // Inside the loop, it prints the element at the current index i followed by a space.
        }
        cout << endl;                              // After the loop, it prints a newline character to move the cursor to the next line in the console.
    }
};

~Queue() {                          // This is the destructor for the Queue class. It is called when an object of the Queue class is destroyed.
    delete[] arr;                   // This deallocates the memory that was previously allocated for the array arr.
};

};

int main() {
    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;
    Queue q1(size);
    int option, value;

    do {
        cout << "\nWhat operation do you want to perform? Select option number. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. Display()" << endl;

        cin >> option;

        switch (option) {
        case 1:
            cout << "Enqueue operation \nEnter an Item to Enqueue in the Queue: ";
            cin >> value;
            q1.enqueue(value);
            break;

        case 2:
            value = q1.dequeue();
            if (value != -1) {
                cout << "Dequeue Operation\nDequeued value: " << value << endl;
            }
            break;

        case 3:
            cout << "Display Function called - " << endl;
            q1.display();
            break;

        default:
            if (option != 0)
                cout << "Invalid Option! Please select a valid operation." << endl;
            break;
        }
    } while (option != 0);

    return 0;
}