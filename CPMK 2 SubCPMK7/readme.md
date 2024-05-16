# <h1 align="center">CPMK 2 - SubCPMK 7</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal

### 1. Tulislah sebuah program dari operasi queue seperti enqueue/add, dequeue/remove, isEmpty, isFull, dll(min 5)!

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
    stack.#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int front, rear, size;
    int data[MAX_SIZE];

public:
    Queue() {
        front = rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Antrian penuh. Penambahan gagal." << endl;
            return;
        }

        rear = (rear + 1) % MAX_SIZE;
        data[rear] = value;
        size++;
        cout << "Data " << value << " ditambahkan ke dalam antrian." << endl;
        if (front == -1) {
            front = rear;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong. Penghapusan gagal." << endl;
            return;
        }

        cout << "Data " << data[front] << " dihapus dari antrian." << endl;
        front = (front + 1) % MAX_SIZE;
        size--;
        if (isEmpty()) {
            front = rear = -1;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Antrian kosong." << endl;
            return -1;
        }
        return data[front];
    }
};

int main() {
    Queue queue;
    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);
    cout << "Front queue: " << queue.peek() << endl;
    queue.dequeue();
    cout << "Front queue setelah penghapusan: " << queue.peek() << endl;
    return 0;
}
push(5);
    stack.push(10);
    stack.push(15);
    cout << "Top stack: " << stack.peek() << endl;
    stack.pop();
    cout << "Top stack setelah penghapusan: " << stack.peek() << endl;
    return 0;
}
```





### 2. Sebuah selter hewan terlantar, yang mana hanya menerima kucing dan anjing, menerapkan konsep “first in, first out” dalam proses adopsi. Orang-orang yang hendak mengadopsi harus mengikuti aturan berikut: 1) mengadopsi hewan yang paling “tua” (berdasarkan waktu masuk ke selter) dan tidak dapat memilih kucing atau anjing; 2) memilih antara kucing atau anjing, namun akan menerima yang paling tua. Buatlah data struktur untuk mengimplementasikan kondisi tersebut, silahkan menggunakan beberapa operasi queue seperti enquee, dequeueAny, dequeueDog, dan dequeueCat.

```C++
#include <iostream>
#include <queue>
using namespace std;

class AnimalShelter {
private:
    queue<pair<string, int>> dogs;
    queue<pair<string, int>> cats;
    int order;

public:
    AnimalShelter() {
        order = 0;
    }

    void enqueue(string animalType) {
        if (animalType == "dog") {
            dogs.push(make_pair(animalType, order++));
        } else if (animalType == "cat") {
            cats.push(make_pair(animalType, order++));
        } else {
            cout << "Hanya menerima kucing atau anjing." << endl;
        }
    }

    void dequeueAny() {
        if (dogs.empty() && cats.empty()) {
            cout << "Tidak ada hewan di shelter." << endl;
            return;
        }
        
        if (dogs.empty()) {
            cout << "Adopsi " << cats.front().first << endl;
            cats.pop();
        } else if (cats.empty()) {
            cout << "Adopsi " << dogs.front().first << endl;
            dogs.pop();
        } else {
            if (dogs.front().second < cats.front().second) {
                cout << "Adopsi " << dogs.front().first << endl;
                dogs.pop();
            } else {
                cout << "Adopsi " << cats.front().first << endl;
                cats.pop();
            }
        }
    }

    void dequeueDog() {
        if (dogs.empty()) {
            cout << "Tidak ada anjing di shelter." << endl;
            return;
        }
        cout << "Adopsi anjing" << endl;
        dogs.pop();
    }

    void dequeueCat() {
        if (cats.empty()) {
            cout << "Tidak ada kucing di shelter." << endl;
            return;
        }
        cout << "Adopsi kucing" << endl;
        cats.pop();
    }
};

int main() {
    AnimalShelter shelter;
    int choice;
    string animalType;

    do {
        cout << "Menu: " << endl;
        cout << "1. Enqueue (Tambah hewan)" << endl;
        cout << "2. DequeueAny (Adopsi hewan tertua)" << endl;
        cout << "3. DequeueDog (Adopsi anjing)" << endl;
        cout << "4. DequeueCat (Adopsi kucing)" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan jenis hewan (dog/cat): ";
                cin >> animalType;
                shelter.enqueue(animalType);
                break;
            case 2:
                shelter.dequeueAny();
                break;
            case 3:
                shelter.dequeueDog();
                break;
            case 4:
                shelter.dequeueCat();
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Opsi tidak valid." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
```


