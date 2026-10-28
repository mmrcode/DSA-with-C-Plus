
#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string exp;
    stack<int> s;

    cout << "Enter postfix expression: ";
    cin >> exp;

    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        // If character is a number
        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            // Get second operand
            int b = s.top();
            s.pop();

            // Get first operand
            int a = s.top();
            s.pop();

            // Perform operation
            if (ch == '+') {
                s.push(a + b);
            } else if (ch == '-') {
                s.push(a - b);
            } else if (ch == '*') {
                s.push(a * b);
            } else if (ch == '/') {
                if (b == 0) {
                    cout << "Error: Division by zero!" << endl;
                    return 1;
                }
                s.push(a / b);
            }
        }
    }

    if (s.size() == 1) {
        cout << "Result = " << s.top() << endl;
    } else {
        cout << "Invalid postfix expression!" << endl;
    }

    return 0;
}
