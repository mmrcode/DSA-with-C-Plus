
#include <iostream>
using namespace std;

int queue[5];
int front = 0;
int rear = -1;
int count = 0;

// Insert element into Queue
void enqueue(int value) {
    if (count == 5) {
        cout << "Queue is Full" << endl;
    } else {
        rear++;
        queue[rear] = value;
        count++;
        cout << value << " inserted" << endl;
    }
}

// Delete element from Queue
void dequeue() {
    if (count == 0) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << queue[front] << " deleted" << endl;
        front++;
        count--;
    }
}

// View the first element
void peek() {
    if (count == 0) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

// Display Queue
void display() {
    if (count == 0) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

// Display number of elements
void displayCount() {
    cout << "Number of elements: " << count << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    displayCount();

    dequeue();
    peek();

    display();
    displayCount();

    return 0;
}
