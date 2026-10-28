#include <iostream>
using namespace std;
struct Node
int data;
Node* next;
int main()
Node* first = new Node;
first->data = 10
first->next
= NULL;
• new Node creates a node in dynamic memory.
• first->data
= 10; stores 10 in the node.
• first->next = NULL; indicates that there is
no next node yet.
Linked list:
first [10 | NULL]
Node* newNode = new Node;
newNode->data = 20
newNode->next = NULL;
• new Node creates another node.
• newNode->data
= 20; stores 20 in the new
node.
• newNode->next = NULL; indicates that it is
currently the last node.
Now, two separate nodes exist:
[10 | NULL] [20 | NULL]
rhey are not connected yet.
Node* temp = first;
temp points to the first node containing 10.
temp NULL]
while (temp->next != NULL)
temp = temp->next;
temp->next != NULL checks whether the current
node has a next node.
temp = temp->next; moves temp to the next node.
  temp->next = newNode;
This statement connects the first node to the new
node.
Before:
10 NULL 20 NULL
After:
10 20 NULL
Now the insertion at the end is complete.
temp = first;
We set temp back to the first node so that we can
display the complete linked list.
while (temp NULL)
cout << temp->data <<
temp = temp->next;
This loop displays each node's data and moves to the
next node.
  
return 0;
}
