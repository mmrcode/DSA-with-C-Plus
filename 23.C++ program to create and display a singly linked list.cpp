#include <iostream>
using namespace std;
struct Node
{
int data;
Node*next;
};

Every node has two parts: data and next.
• int data-stores an integer such as 10.
• Node* next-stores the address of the next node.
• struct Node- is the design or blueprint for creating nodes.
int main()
Node* first = new Node;
Node* second = new Node;
Node* third = new Node;
These statements create three nodes dynamically in memory.
• new Node -allocates memory for one node.
• first- points to the first node.
• second- points to the second node.
• third- points to the third node.
first->data = 10;
first->next = second;

first->data = 10; stores 10 in the first node.
•first->next = second; connects the first node to the second node.
Here, -> is used to access a member of a structure through a pointer.
  second->data = 20;
second->next= third;
third->data = 30;
third->next = NULL;

• third->data = 30; stores 30 in the third node.
• third->next = NULL; indicates that no node comes after the third node.
NULL marks the end of the linked list.
Node* temp = first;
temp is a pointer used to visit each node.
Initially, temp points to the first node containing 10.
We use temp to display the list without changing first.
while (temp != NULL) Checks whether a node exists
cout << temp->data "
temp = temp->next;
This loop visits each node one by one.
temp -4 IOFirst iteration
Prints 10; moves to the second node.
temp -+ 20 Second iteration
Prints 20; moves to the third node.
temp -+ 30 Third iteration
Prints 30; moves to NULL.
temp NULL
The condition becomes false, so the loop stops.
delete first;
delete second;
delete third;
return O;
}
