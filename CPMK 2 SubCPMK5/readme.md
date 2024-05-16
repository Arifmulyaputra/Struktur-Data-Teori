# <h1 align="center">CPMK 2 - SubCPMK 5</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal

### 1. Buatlah sebuah fungsi program untuk menghilangkan duplikasi data pada unsorted linked list (single atau double atau circular)

```C++
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
```





### 2. Buatlah sebuah algoritma dan fungsi program untuk menghapus node di tengah single linked list!

```C++
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
```





### 3. Buatlah sebuah program untuk mengecek apakah linked list adalah sebuah palindrom! 

```C++
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

```



