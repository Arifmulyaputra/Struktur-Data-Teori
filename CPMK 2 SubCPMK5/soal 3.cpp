#include <iostream>
#include <stack>

struct Node {
    char data;
    Node* next;
};

bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) return true;

    std::stack<char> s;
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        s.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != nullptr) slow = slow->next;

    while (slow != nullptr) {
        if (slow->data != s.top()) return false;
        s.pop();
        slow = slow->next;
    }

    return true;
}
