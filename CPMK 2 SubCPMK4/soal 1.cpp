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