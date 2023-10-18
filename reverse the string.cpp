#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(string input) {
    stack<char> charStack;
    string reversed;

    for (size_t i = 0; i < input.length(); ++i) {
        charStack.push(input[i]);
    }

    while (!charStack.empty()) {
        reversed += charStack.top();
        charStack.pop();
    }

    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed String: " << reversed << endl;

    return 0;
}

