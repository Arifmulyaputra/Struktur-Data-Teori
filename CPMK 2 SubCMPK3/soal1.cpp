#include <iostream>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 30;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Elemen " << target << " ditemukan pada indeks: " << result << std::endl;
    } else {
        std::cout << "Elemen " << target << " tidak ditemukan dalam array." << std::endl;
    }

    return 0;
}
