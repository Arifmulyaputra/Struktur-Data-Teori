#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    int data[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack penuh. Penambahan gagal." << endl;
            return;
        }
        data[++top] = value;
        cout << "Data " << value << " ditambahkan ke dalam stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong. Penghapusan gagal." << endl;
            return;
        }
        cout << "Data " << data[top--] << " dihapus dari stack." << endl;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack kosong." << endl;
            return -1;
        }
        return data[top];
    }
};

int main() {
    Stack stack;
    stack.push(5);
    stack.push(10);
    stack.push(15);
    cout << "Top stack: " << stack.peek() << endl;
    stack.pop();
    cout << "Top stack setelah penghapusan: " << stack.peek() << endl;
    return 0;
}