#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int>& s) {
    stack<int> tempStack;

    while (!s.empty()) {
        int temp = s.top();
        s.pop();

        while (!tempStack.empty() && tempStack.top() > temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(3);
    s.push(8);
    s.push(1);

    cout << "Stack sebelum diurutkan: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    s.push(5);
    s.push(10);
    s.push(3);
    s.push(8);
    s.push(1);

    sortStack(s);

    cout << "\nStack setelah diurutkan: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}