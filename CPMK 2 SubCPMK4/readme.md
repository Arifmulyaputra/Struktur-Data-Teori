# <h1 align="center">CPMK 2 - SubCPMK 4</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal

### 1. Berikan penjelasan dari struct dan buatlah sebuah contoh program dari struct!

Struct adalah tipe data yang dapat digunakan untuk mengelompokkan beberapa jenis data yang berbeda ke dalam satu kesatuan. Ini memungkinkan kita untuk membuat tipe data kustom yang terdiri dari beberapa variabel dengan tipe data yang berbeda. Setiap variabel dalam `struct` disebut sebagai "member" atau "field". Kita bisa mengakses dan memanipulasi setiap member dari sebuah `struct`.

```C++
#include <iostream>
#include <string>

struct Mahasiswa {
    std::string nama;
    int umur;
    std::string jurusan;
};

int main() {
    Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Fauzan";
    mahasiswa1.umur = 20;
    mahasiswa1.jurusan = "Sains Data";

    std::cout << "Nama: " << mahasiswa1.nama << std::endl;
    std::cout << "Umur: " << mahasiswa1.umur << std::endl;
    std::cout << "Jurusan: " << mahasiswa1.jurusan << std::endl;

    return 0;
}
```





Penjelasan:

Program sederhana penggunaan struct, kita mendefinisikan sebuah `struct Mahasiswa` yang memiliki tiga member: `nama`, `umur`, dan `jurusan`. Kemudian, kita membuat sebuah objek `mahasiswa1` dari `struct Mahasiswa` dan mengisi data ke dalam objek tersebut. Setelah itu, data dari objek `mahasiswa1` dicetak ke layar. Dengan menggunakan `struct`, kita dapat mengelompokkan informasi terkait tentang seorang mahasiswa ke dalam satu kesatuan yang logis, sehingga memudahkan pengelolaan data dan memperjelas struktur program.