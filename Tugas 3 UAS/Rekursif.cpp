#include <iostream>

using namespace std;

int faktorial(int n) {
    if (n == 0)
        return 1;
    return n * faktorial(n - 1);
}

int main() {
    int angka = 6;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka);
    return 0;
}