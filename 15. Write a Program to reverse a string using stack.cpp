#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
string input;
stack<char> s;
// Input the string to reverse
cout << "Enter a string to reverse: "
cin>>input;
// Push each character of the string onto the stack
for (int i = 0; i < input.length(); i++) {
s.push(input[i]); // Push the character at index i onto the stack
// Pop characters from the stack to get the reversed string
string reversed;
while (!s.empty()) {
reversed += s.top(); // Get the top character from the stack
s.pop(); // Remove the top character from the stack
// Display the reversed string
cout << "Reversed string: " << reversed << endl;
return 0;
}
