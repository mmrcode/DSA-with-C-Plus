// Logic: create a new node, connct it to the first node, and make it the new first node.
#include <iostream>
using namespace std;

struct node
{
    int data;
    Node*next;
};

// Every node contains two part:
Every node contains two parts:
• data stores the value.
• next stores the address of the next node.

int main()
Node* first = new Node;
first->data = 20
first->next= = NULL;

new Node creates a node in dynamic memory.
first->data = 20; stores 20 in the node.
first->next = NULL; indicates that no next node exists yet.

Node* newNode = new Node;
newNode->data = 10;

• new Node creates another node.
• newNode->data = 10; stores 10 in the new node.

Now there are Ovo nodes, but they are not connected yet.

newNode->next = first; This statement makes the new node containing 10 point
to the existing node containing 20.

first = newNode; Now first points to the node containing 10. Therefore, 10
becomes the first node.

The final linked list is:
10 —+ 20-9 NULL

Node* temp = first; temp is used to visit the nodes one by one.
Initially, temp points to the first node containing 10.

while (temp != NULL)
{
cout << temp->data << " displays the current node's data.
temp = temp->next; moves to the next node.
}
Step I-Displays 10, moves to 20.
2-Disp1ays 20,moves to NULL.
4-Stops because temp != NULL is false.

return 0;
}
