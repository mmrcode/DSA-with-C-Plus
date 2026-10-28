#include <iostream>
#include <stack>//stack library,
using namespace std;
// Function to check if the parentheses in the expression are balanced
int Balanced(string expression) {
stack<char> s;
for (int i = 0; i < expression.length(); i++) {
char ch = expression[i];
switch (ch) {
case 'C:
case
case 'C:
s.push(ch); // Push opening brackets onto the stack
break;
case
'(') return false; // Check for matching
if (s.empty() II s.top() !=
opening bracket
s.popO;
break;
case 'Y:
if (s.empty() II s.top() '{') return false; // Check for matching
opening bracket
s.pop();
break;s
case
if (s.empty() II s.top() != '{') return false; // Check for matching
opening bracket
s.pop();
break;
case
if (s.empty() II s.top() != '[' ) return false; // Check for matching
opening bracket
s.pop();
break;
// If the stack is empty, all brackets were matched
return s. empty();
int main() {
string expression;
// Input the expression
cout << "Enter an expression: '
cin>>expression;
// Check if the parentheses are balanced
if (Balanced(expression)) {cout << "Parentheses are balanced." << endl;
} else {
cout << "Parentheses are not balanced." << endl;
return 0;
