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