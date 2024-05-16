# <h1 align="center">CPMK 2 - SubCPMK 3</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal

### 1. Terdapat dua algoritma searching yang umum digunakan yakni, Binary Search dan Linear Search. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!

#### Linear Search:

- Penjelasan Alur: Linear Search adalah metode pencarian yang sederhana. Dimulai dari awal, algoritma ini memeriksa setiap elemen satu per satu hingga menemukan elemen yang dicari atau sampai akhir array.
- Runtime Best Case: Pada kasus terbaik, elemen yang dicari berada di posisi pertama array, sehingga algoritma hanya memerlukan satu langkah, dengan runtime O(1).
- Runtime Worst Case: Dalam kasus terburuk, algoritma harus memeriksa setiap elemen, sehingga memiliki runtime O(n), di mana n adalah jumlah elemen dalam array.

#### Binary Search:

- Penjelasan Alur: Binary Search bekerja pada array yang terurut. Dengan membagi array menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari, algoritma ini mempersempit area pencarian hingga menemukan elemen atau sampai tidak ada lagi elemen yang tersisa.
- Runtime Best Case: Pada kasus terbaik, elemen yang dicari tepat berada di tengah array, sehingga algoritma hanya membutuhkan satu langkah, dengan runtime O(1).
- Runtime Worst Case: Dalam kasus terburuk, algoritma membagi area pencarian menjadi setengah pada setiap langkah, memiliki runtime O(log n), di mana n adalah jumlah elemen dalam array.


### 2. Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut 

```C++
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

```

#### Output:



Penjelasan:

Program menggunakan algoritma pencarian linear. Melakukan pencarian berurutan setiap elemen dalam array hingga elemen yang dicari ditemukan atau sampai seluruh array telah diperiksa. Fungsi `linearSearch` menerima array, ukuran array, dan elemen yang ingin dicari sebagai argumen. Melalui iterasi menggunakan loop, fungsi tersebut memeriksa setiap elemen dalam array untuk mencocokkan dengan elemen yang dicari. Jika elemen ditemukan, fungsi mengembalikan indeksnya; jika tidak, mengembalikan -1. Dalam fungsi `main`, kita mendeklarasikan array yang akan dicari, elemen yang ingin dicari, dan memanggil fungsi `linearSearch` untuk mencari elemen tersebut. Hasil pencarian kemudian dicetak ke layar.

### Tulislah sebuah fungsi program dengan kondisi sebagai berikut:
Terdapat sebuah sorted array of strings yang mana terdapat string kosong diantaranya, carilah lokasi/indeks dari kata yang dicari! (30 Poin)
Input: bola, {“Adi”,””,””, “”, “bermain”, “”, “bola”, “”, “”, “sedang”}
Output: 6


```C++
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

```

#### Output:

Penjelasan:

Program untuk mencari lokasi/indeks dari sebuah kata dalam array of strings yang sudah terurut, dengan memperhitungkan adanya string kosong di antaranya. Fungsi `cariIndeksKata` menggunakan algoritma binary search untuk mencari kata yang diberikan dalam array. Sebelum melakukan perbandingan pada elemen tengah, fungsi ini memeriksa dan mengabaikan elemen yang kosong di sekitar tengah. Setelah ditemukan elemen yang tidak kosong, dilakukan perbandingan dengan kata yang dicari. Dalam `main()`, array of strings dan kata yang ingin dicari didefinisikan, dan kemudian fungsi `cariIndeksKata` dipanggil. Jika kata ditemukan, indeksnya akan dicetak ke layar; jika tidak ditemukan, akan mencetak pesan bahwa kata tidak ditemukan.