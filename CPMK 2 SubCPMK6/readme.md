# <h1 align="center">CPMK 2 - SubCPMK 6</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal

### 1. Tulislah sebuah program dari operasi stack seperti pop, push, isEmpty, isFull, dll(min 5)! 

```C++
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
```





### 2. Tulislah sebuah program untuk mensortir sebuah stack, sehingga item dengan nilai terkecil menjadi top pada stack tersebut! Diperbolehkan menggunakan tambahan temporary stack, namun tidak diperbolehkan untuk menyalin dari struktur data yang lain seperti array.  Program stack yang dibuat dapat menggunakan operasi stack seperti push, pop, peek, dan isEmpty.

```C++
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
```


