#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void removeDuplicates(Node* head) {
    if (head == NULL) {
        return;
    }

    Node* current = head;
    while (current != NULL) {
        Node* runner = current;
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                Node* temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void sortLinkedList(Node* head) {
    if (head == NULL) {
        return;
    }

    Node* current = head;
    while (current != NULL) {
        Node* minNode = current;
        Node* runner = current->next;
        while (runner != NULL) {
            if (runner->data < minNode->data) {
                minNode = runner;
            }
            runner = runner->next;
        }
        if (minNode != current) {
            int temp = current->data;
            current->data = minNode->data;
            minNode->data = temp;
        }
        current = current->next;
    }
}

int main() {

    Node* head = new Node();
    head->data = 6;
    head->next = NULL;

    Node* second = new Node();
    second->data = 9;
    second->next = NULL;
    head->next = second;

    Node* third = new Node();
    third->data = 3;
    third->next = NULL;
    second->next = third;

    Node* fourth = new Node();
    fourth->data = 5;
    fourth->next = NULL;
    third->next = fourth;

    Node* fifth = new Node();
    fifth->data = 2;
    fifth->next = NULL;
    fourth->next = fifth;

    removeDuplicates(head);
    sortLinkedList(head);

    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}