#include <iostream>
#include <vector>
#include <string>

int cariIndeksKata(const std::vector<std::string>& arr, const std::string& kata) {
    int kiri = 0;
    int kanan = arr.size() - 1;

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        while (arr[tengah] == "" && tengah >= kiri) {
            tengah--;
        }

        if (tengah < kiri) {
            return -1;
        }

        int hasilPerbandingan = kata.compare(arr[tengah]);

        if (hasilPerbandingan == 0) {
            return tengah;
        } else if (hasilPerbandingan < 0) {
            kanan = tengah - 1;
        } else {
            kiri = tengah + 1;
        }
    }

    return -1;
}

int main() {
    std::vector<std::string> arr = {"Adi", "", "", "", "bermain", "", "bola", "", "", "sedang"};
    std::string kata = "bola";

    int indeks = cariIndeksKata(arr, kata);

    if (indeks != -1) {
        std::cout << "Output: " << indeks << std::endl;
    } else {
        std::cout << "Kata tidak ditemukan dalam array." << std::endl;
    }

    return 0;
}
