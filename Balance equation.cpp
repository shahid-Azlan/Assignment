#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string equation) {
    stack<char> charStack;

    for (size_t i = 0; i < equation.length(); ++i) {
        char c = equation[i];
        if (c == '(' || c == '[' || c == '{') {
            charStack.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (charStack.empty()) {
                return false; 
            }

            char top = charStack.top();
            charStack.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false; 
            }
        }
    }

    return charStack.empty(); 
}

int main() {
    string equation;
    cout << "Enter an equation: ";
    cin >> equation;

    if (isBalanced(equation)) {
        cout << "The equation is balanced." << endl;
    } else {
        cout << "The equation is not balanced." << endl;
    }

    return 0;
}

