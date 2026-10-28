
#include <iostream>
using namespace std;

int main() {
    int q[5], front = -1, rear = -1;
    int choice, value, i;

    do {
        cout << "\n\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if ((rear + 1) % 5 == front) {
                    cout << "Queue is Full";
                } else {
                    cout << "Enter value: ";
                    cin >> value;

                    if (front == -1)
                        front = 0;

                    rear = (rear + 1) % 5;
                    q[rear] = value;

                    cout << "Inserted: " << value;
                }
                break;

            case 2:
                if (front == -1) {
                    cout << "Queue is Empty";
                } else {
                    cout << "Deleted: " << q[front];

                    if (front == rear) {
                        front = rear = -1;
                    } else {
                        front = (front + 1) % 5;
                    }
                }
                break;

            case 3:
                if (front == -1) {
                    cout << "Queue is Empty";
                } else {
                    cout << "Queue elements: ";
                    i = front;

                    while (true) {
                        cout << q[i] << " ";

                        if (i == rear)
                            break;

                        i = (i + 1) % 5;
                    }
                }
                break;

            case 4:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 4);

    return 0;
}
