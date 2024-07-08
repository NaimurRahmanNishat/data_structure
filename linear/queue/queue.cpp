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
#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, n;
    int *arr;

public:
    Queue(int size) {
        n = size;
        arr = new int[n];
        front = rear = -1;
    }

    void enqueue(int value) {
        if (rear == n - 1) {
            cout << "Overflow" << endl;
        } else if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = value;
        } else {
            rear++;
            arr[rear] = value;
        }
    }

    int dequeue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is Empty" << endl;
            return -1; // Return a value indicating the queue is empty
        } else if (front == rear) {
            int value = arr[front];
            front = rear = -1;
            return value;
        } else {
            return arr[front++];
        }
    }

    void display() {
        if (front == -1 && rear == -1) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    ~Queue() {
        delete[] arr;
    }
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