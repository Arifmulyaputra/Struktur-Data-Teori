# <h1 align="center">CPMK 2 - SubCPMK 2</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal

### 1. Terdapat tiga algoritma sorting yang umum digunakan yakni, Bubble Sort, Selection Sort, dan Merge Sort. Berikan penjelasan alur dari masing-masing algoritma tersebut, dan jelaskan runtime dari best case dan worst case masing-masing algoritma!

#### 1. Bubble Sort:

Algoritma ini mengurutkan elemen array dengan cara membandingkan dua elemen yang berdekatan secara berulang. Elemen yang lebih besar ditukar posisinya dengan elemen yang lebih kecil. Proses ini diulang sampai semua elemen berada pada urutan yang benar.

##### Alur Bubble Sort:

1. Iterasi melalui array dari awal hingga akhir.
2. Bandingkan elemen saat ini dengan elemen berikutnya.
3. Jika elemen saat ini lebih besar, tukar posisinya dengan elemen berikutnya.
4. Ulangi langkah 1 dan 2 sampai tidak ada lagi pertukaran yang terjadi.

##### Runtime Bubble Sort:

- Best Case: O(n) - Tercapai ketika array sudah terurut atau hanya ada sedikit elemen yang tidak pada posisinya.
- Worst Case: O(n^2) - Tercapai ketika array terurut terbalik atau elemen acak.

#### 2. Selection Sort:

Algoritma ini menemukan elemen terkecil dalam array dan menukarnya dengan elemen pertama, kemudian menemukan elemen terkecil kedua dan menukarnya dengan elemen kedua, dan seterusnya. Proses ini berulang sampai semua elemen berada pada urutan yang benar.

##### Alur Selection Sort:

1. Temukan elemen terkecil dalam array.
Tukar elemen terkecil dengan elemen pertama.
2. Ulangi langkah 1 dan 2 untuk elemen berikutnya, mulai dari elemen kedua hingga elemen terakhir.

##### Runtime Selection Sort:

- Best Case: O(n) - Tercapai ketika array sudah terurut.
- Worst Case: O(n^2) - Sama seperti Bubble Sort.

#### 3. Merge Sort:

Algoritma ini membagi array menjadi dua subarray secara rekursif sampai subarray hanya memiliki satu elemen. Kemudian, subarray digabungkan kembali dengan cara mengurutkan elemen-elemennya.

##### Alur Merge Sort:

1. Bagi array menjadi dua subarray dengan ukuran yang sama (atau hampir sama).
2. Panggil Merge Sort secara rekursif untuk mengurutkan kedua subarray.
3. Gabungkan kedua subarray yang terurut menjadi satu array yang terurut.

##### Runtime Merge Sort:

- Best Case: O(n log n) - Tercapai ketika array terbagi dengan sama pada setiap pembagian rekursif.
- Worst Case: O(n log n) - Sama seperti Best Case.

###### Masing-masing algoritma sorting memiliki kelebihan dan kekurangannya sendiri. Bubble Sort dan Selection Sort sederhana untuk diimplementasikan, tetapi memiliki runtime yang lambat untuk array yang besar. Merge Sort lebih kompleks untuk diimplementasikan, tetapi memiliki runtime yang lebih cepat dan stabil untuk semua kasus.



### 2. Buatlah fungsi dari salah satu algoritma sorting pada soal nomor 1, dan berikan penjelasan pada program tersebut 

```C++
#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    if (i != minIndex) {
      swap(arr[i], arr[minIndex]);
    }
  }
}

void cetakArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;

  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  if (n <= 0) {
    cout << "Jumlah elemen harus lebih besar dari 0." << endl;
    return 1;
  }

  int *arr = new int[n];

  cout << "Masukkan elemen array (pisahkan dengan spasi): ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Array awal: ";
  cetakArray(arr, n);

  selectionSort(arr, n);

  cout << "Array setelah diurutkan: ";
  cetakArray(arr, n);

  delete[] arr;

  return 0;
}
```





Penjelasan:

Program ini menggunakan algoritma selection sort. Fungsi utama dalam kode ini adalah `selectionSort`, yang mengurutkan array yang diberikan menggunakan algoritma selection sort. Fungsi `cetakArray` digunakan untuk mencetak isi array. Dalam fungsi `main`, program meminta pengguna untuk memasukkan jumlah elemen array dan elemen-elemen array itu sendiri. Setelah menerima input, program mencetak array awal menggunakan fungsi `cetakArray`, menjalankan fungsi `selectionSort` untuk mengurutkan array, dan kemudian mencetak array yang telah diurutkan lagi menggunakan fungsi `cetakArray`. Untuk mencegah kebocoran memori, program menggunakan alokasi memori dinamis untuk array menggunakan operator `new` dan membebaskan memori menggunakan operator `delete[]` setelah selesai menggunakan array.

### 3. Tulislah sebuah fungsi untuk mensorting dan mengecek dua buah array of strings, sehingga menghasilkan “anagram” dan “tidak anagram”

contoh:

Input string1 = “bahu” string2 = “buah”
Output: “anagram”
Input string1 = “makan” string2 = “minum”
Output: “tidak anagram”

```C++
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(const string& str1, const string& str2) {

    string sorted_str1 = str1;
    string sorted_str2 = str2;
    sort(sorted_str1.begin(), sorted_str1.end());
    sort(sorted_str2.begin(), sorted_str2.end());

    return sorted_str1 == sorted_str2;
}

int main() {
    string string1, string2;

    cout << "Masukkan string pertama: ";
    cin >> string1;
    cout << "Masukkan string kedua: ";
    cin >> string2;


    if (isAnagram(string1, string2)) {
        cout << "Output: \"anagram\"" << endl;
    } else {
        cout << "Output: \"tidak anagram\"" << endl;
    }

    return 0;
}
```






### 4. Tulislah sebuah fungsi program dengan asumsi sebagai berikut: Terdapat dua buah sorted array A dan B yang memiliki tipe data sama, dimana array A memiliki indeks yang cukup untuk menampung array B. Gabungkan array B kedalam array A, kemudian urutkan array tersebut!


```C++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeAndSort(int A[], int sizeA, int B[], int sizeB) {
    int mergedSize = sizeA + sizeB;
    int merged[mergedSize];

    for (int i = 0; i < sizeA; ++i) {
        merged[i] = A[i];
    }
    for (int i = 0; i < sizeB; ++i) {
        merged[sizeA + i] = B[i];
    }


    sort(merged, merged + mergedSize);


    for (int i = 0; i < mergedSize; ++i) {
        A[i] = merged[i];
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9};
    int sizeA = sizeof(A) / sizeof(A[0]);

    int B[] = {2, 4, 6, 8, 10};
    int sizeB = sizeof(B) / sizeof(B[0]);

    mergeAndSort(A, sizeA, B, sizeB);

    cout << "Array A setelah digabungkan dan diurutkan: ";
    for (int i = 0; i < sizeA + sizeB; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
```


