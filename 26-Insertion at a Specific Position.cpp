Insert 15 at position 2 in the list 10 20 30.
The position is counted starting from I.
#include <iostream>
using namespace std;
struct Node
int data;
Node* next;
int main()
Node* first = new Node;
first->data = 10
Node* second = new Node;
second->data = 20;
Node* third = new Node;
third->data = 30;
first->next = second;
second->next = third;
third->next = NULL;
Node* newNode = new Node;
newNode->data = 15;
Node* temp = first;
temp = temp->next;
newNode->next = temp->next;
temp->next = newNode;
temp = first;
while (temp NULL)
cout << temp->data << "
temp = temp->next;
return O;
