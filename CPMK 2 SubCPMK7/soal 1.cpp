#include <iostream>
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