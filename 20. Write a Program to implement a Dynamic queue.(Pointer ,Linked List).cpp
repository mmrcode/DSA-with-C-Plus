//rear- Last
//front-first
#include <iostream>
using namespace std;
// Structure for a Node
struct Node {
int data; // Stores the value
Node* next; // Stores the address of the next node
// Front and Rear pointers
Node* front = NULL;
Node* rear = NULL;
// Enqueue operation
void enqueue(int value) {
// Create a new node
Node* newNode = new Node;
// Store the value
newNode->data = value;
newNode->next = NULL;
// If queue is empty
if (rear NULL) {
front = rear = newNode;
else {
// Add new node at the rear
rear->next = newNode;
rear = newNode;
cout << value << " inserted into queue" << endl;
// Dequeue operation
void dequeue() {
// Check if queue is empty
if (front == NULL) {
cout << "Queue is empty" << endl;
return;
// Store the front node temporarily
Node* temp = front;
// Display the value being removed
cout << temp->data << " deleted from queue" << endl;
// Move front to the next node
front = front->next;
// If queue becomes empty
if (front == NULL) {
rear = NULL;
// Delete the old front node
delete temp;
// Display queue
void display() {
// Check if queue is empty
if (front == NULL) {
cout << "Queue is empty" << endl;
return;
Node* temp = front;
cout << "Queue: "
while (temp != NULL) {
cout << temp->data <<
temp = temp->next;
cout << endl;
// Main function
int maino {
// Insert elements
enqueue(10);
enqueue(20);
enqueue(30);
// Display queue
display();
// Delete one element
dequeue();
// Display queue again
display();
return 0;
