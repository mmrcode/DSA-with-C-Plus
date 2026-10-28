
#include <iostream>
using namespace std;

#define MAX 100

int top = -1;
int stack[MAX];

// Push operation
void push(int value) {
    if (top < MAX - 1) {
        top = top + 1;
        stack[top] = value;
        cout << value << " pushed to stack" << endl;
    } else {
        cout << "Stack Overflow! Cannot push " << value << endl;
    }
}

// Pop operation
int pop() {
    if (top >= 0) {
        int value = stack[top];
        cout << value << " popped from stack" << endl;
        top = top - 1;
        return value;
    } else {
        cout << "Stack Underflow! Cannot pop" << endl;
        return -1;
    }
}

// Peek operation
int peek() {
    if (top >= 0) {
        cout << "Top element is " << stack[top] << endl;
        return stack[top];
    } else {
        cout << "Stack is empty!" << endl;
        return -1;
    }
}

// Check whether stack is empty
int isEmpty() {
    return (top == -1);
}

// Check whether stack is full
int isFull() {
    return (top == MAX - 1);
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);

    peek();
    pop();
    peek();

    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    if (isFull()) {
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not full" << endl;
    }

    return 0;
}
