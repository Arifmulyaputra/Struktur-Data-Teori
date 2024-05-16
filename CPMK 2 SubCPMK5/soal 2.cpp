#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;
void deleteNode(int target) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL && curr->data != target) {
        prev = curr;
        curr = curr->next;
    }

    if (curr != NULL && curr->data == target) {
        if (prev != NULL) {
            prev->next = curr->next;
        } else {
            head = curr->next;
        }
        delete curr;
        cout << "Node Dengan Data " << target << " Telah Dihapus." << endl;
        return;
    }

    if (curr == NULL) {
        cout << "Node Dengan Data " << target << " Tidak Ditemukan." << endl;
        return;
    }
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
        if (temp != NULL) {
            cout << " -> ";
        }
    }
    cout << " -> NULL" << endl;
}

int main() {
    // Membuat Single Linked List
    head = new Node;
    head->data = 4;
    head->next = new Node;
    head->next->data = 2;
    head->next->next = new Node;
    head->next->next->data = 9;
    head->next->next->next = new Node;
    head->next->next->next->data = 91;
    head->next->next->next->next = new Node;
    head->next->next->next->next->data = 42;
    head->next->next->next->next->next = NULL;

    cout << "Daftar Sebelum Penghapusan Node : ";
    printList();

    deleteNode(9);

    cout << "Daftar Setelah Penghapusan Node : ";
    printList();

    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}