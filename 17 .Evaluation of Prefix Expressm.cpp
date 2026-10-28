
#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string exp;
    stack<int> s;

    cout << "Enter prefix expression: ";
    cin >> exp;

    // Read from right to left
    for (int i = exp.length() - 1; i >= 0; i--) {
        char ch = exp[i];

        if (isdigit(ch)) {
            s.push(ch - '0');
        } else {
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

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
        cout << "Invalid prefix expression!" << endl;
    }

    return 0;
}
