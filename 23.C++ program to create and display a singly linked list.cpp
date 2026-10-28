
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    // Create three nodes dynamically
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Store data and connect the nodes
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Traverse and display the linked list
    Node* temp = first;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Free dynamically allocated memory
    delete first;
    delete second;
    delete third;

    return 0;
}
