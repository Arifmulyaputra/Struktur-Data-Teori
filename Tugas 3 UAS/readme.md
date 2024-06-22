# <h1 align="center">TUGAS 3 UAS</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Soal
Berikan penjelasan dan contoh program(beserta penjelasan alur program) dari masing-masing materi struktur data berikut:
- Priority Queue
- Hash Table
- Rekursif
- Graph & Tree

### A. Priority Queue

#### 1. Pengertian Priority Queue dan Heaps

Antrian prioritas (priority queue) adalah suatu struktur data yang memungkinkan penambahan elemen baru dengan prioritas yang berbeda-beda. Elemen yang memiliki prioritas tertinggi akan pertama diambil. Heaps adalah suatu struktur data yang digunakan untuk implementasi antrian prioritas. Heaps dapat berupa max-heap atau min-heap, tergantung pada prioritas yang ingin diwujudkan. Max-heap mengambil elemen dengan prioritas tertinggi, sedangkan min-heap mengambil elemen dengan prioritas terendah [1].

#### 2. Cara Kerja Priority Queue dan Heaps

Operasi yang dapat dilakukan pada priority queue dan heaps meliputi:

- Insertion: Menambahkan elemen baru ke dalam antrian dengan prioritas yang diberikan. Elemen baru akan ditempatkan di ujung belakang antrian dan kemudian diurutkan untuk mempertahankan properti antrian prioritas.
- Deletion: Menghapus elemen yang memiliki prioritas tertinggi dari antrian. Elemen yang dihapus akan digantikan oleh elemen terakhir di antrian, dan kemudian diurutkan untuk mempertahankan properti antrian prioritas.
- Extract Min-Max: Mengembalikan dan menghapus elemen dengan prioritas tertinggi (max-heap) atau terendah (min-heap) dari antrian. Elemen yang dihapus akan digantikan oleh elemen terakhir di antrian, dan kemudian diurutkan untuk mempertahankan properti antrian prioritas [2] [3].

#### 3. Kelebihan dan Kekurangan Priority Queue dan Heaps

Kelebihan:
- Efisiensi: Operasi insertion dan deletion dapat dilakukan dengan kompleksitas waktu O(log N), membuatnya lebih efisien dibandingkan dengan struktur data lain yang memiliki kompleksitas waktu O(N) [4].
- Pengaturan Antrian: Berguna untuk mengatur dan mengelola antrian tugas atau proses, memastikan bahwa tugas diproses sesuai dengan urutan masuknya [4].
- Implementasi Algoritma: Sering digunakan sebagai bagian dari berbagai algoritma, seperti pencarian Breadth-First Search, pemrosesan data, dan algoritma lain yang membutuhkan struktur data FIFO [4].

Kekurangan:
- Data yang Terakhir Masuk: Data yang terakhir masuk mungkin tidak dilayani jika waktu pelayanan habis [4].
- Implementasi Linked List: Implementasi queue menggunakan linked list memerlukan memori yang lebih banyak dan dapat menjadi lambat karena setiap elemen hanya dapat diakses secara sekuensial [4].

#### 4. Algoritma yang Sering Digunakan dengan Queue

- First In First Out (FIFO): Algoritma ini mengatur urutan elemen dalam queue dengan cara elemen pertama yang dimasukkan akan pertama keluar. Algoritma ini digunakan dalam aplikasi seperti sistem operasi, jaringan, dan aplikasi lain yang memerlukan pengelolaan data secara efisien dan cepat [5].

- Last In First Out (LIFO): Algoritma ini mengatur urutan elemen dalam queue dengan cara elemen terakhir yang dimasukkan akan pertama keluar. Algoritma ini digunakan dalam aplikasi seperti sistem operasi, jaringan, dan aplikasi lain yang memerlukan pengelolaan data secara efisien dan cepat [5].

- Priority Queue: Algoritma ini mengatur urutan elemen dalam queue dengan cara elemen yang memiliki prioritas tertinggi akan diambil terlebih dahulu. Algoritma ini digunakan dalam aplikasi seperti sistem operasi, jaringan, dan aplikasi lain yang memerlukan pengelolaan data secara efisien dan cepat [5].

- Double-ended Queue (Dequeue): Algoritma ini mengatur urutan elemen dalam queue dengan cara elemen dapat ditambahkan atau dihapus dari kedua ujung antrean. Algoritma ini digunakan dalam aplikasi seperti sistem operasi, jaringan, dan aplikasi lain yang memerlukan pengelolaan data secara efisien dan cepat [5].

- Breadth-First Search (BFS): Algoritma ini digunakan dalam aplikasi seperti pencarian dalam struktur data yang kompleks, seperti graf dan treet. Algoritma ini menggunakan queue untuk menemukan elemen yang paling dekat dengan sumber [5].

- Depth-First Search (DFS): Algoritma ini digunakan dalam aplikasi seperti pencarian dalam struktur data yang kompleks, seperti graf dan treet. Algoritma ini menggunakan stack untuk menemukan elemen yang paling dekat dengan sumber [5].

- Topological Sort: Algoritma ini digunakan dalam aplikasi seperti pengelolaan graf dan treet. Algoritma ini menggunakan queue untuk mengatur urutan elemen dalam graf dan treet [5].

- Shortest Path Algorithm: Algoritma ini digunakan dalam aplikasi seperti pengelolaan jaringan dan graf. Algoritma ini menggunakan queue untuk menemukan jalur terpendek antara dua titik dalam graf [5].

- Job Scheduling: Algoritma ini digunakan dalam aplikasi seperti pengelolaan sumber daya dan penjadwalan tugas. Algoritma ini menggunakan queue untuk mengatur urutan tugas yang akan dijalankan [5].

- Network Routing: Algoritma ini digunakan dalam aplikasi seperti pengelolaan jaringan dan routing pesan. Algoritma ini menggunakan queue untuk mengatur urutan pesan yang akan dijalankan [5].

Contoh Program:
```C++
#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> antrianPrioritas;
    antrianPrioritas.push(9);
    antrianPrioritas.push(27);
    antrianPrioritas.push(18);

    while (!antrianPrioritas.empty()) {
        cout << antrianPrioritas.top() << " ";
        antrianPrioritas.pop();
    }
    return 0;
}
```

#### Output:

)

#### Penjelasan Program:

Program diatas menggunakan `priority_queue` untuk mengelola elemen-elemen dengan prioritas tertentu, di mana elemen dengan nilai tertinggi memiliki prioritas tertinggi. Program dimulai dengan meng-include library `iostream` untuk operasi input/output dan queue untuk mengakses `priority_queue`, serta menggunakan namespace `std` untuk mempermudah akses ke fungsi standar. Di dalam fungsi `main`, pertama-tama dideklarasikan sebuah priority queue `antrianPrioritas` yang akan menyimpan elemen bertipe `int`. Selanjutnya, elemen-elemen 9, 27, dan 18 ditambahkan ke dalam `antrianPrioritas` menggunakan fungsi `push`. Dalam loop `while`, program akan terus berjalan selama antrianPrioritas tidak kosong. Pada setiap iterasi, elemen dengan nilai tertinggi (prioritas tertinggi) diambil menggunakan `top` dan dicetak ke layar, kemudian elemen tersebut dihapus dari queue menggunakan `pop`. Proses ini berlanjut hingga semua elemen dikeluarkan dan dicetak dalam urutan menurun (descending order). Program berakhir dengan mengembalikan nilai 0, menandakan eksekusi yang sukses. Output program ini adalah "27 18 9 ", mencerminkan urutan elemen berdasarkan prioritasnya dari yang tertinggi ke terendah.

### B. Hash Table

#### 1. Pengertian Hash Table

Hash table adalah sebuah struktur data yang digunakan untuk menyimpan data secara asosiatif, yang berarti data disimpan dalam format array di mana setiap data memiliki indeks uniknya sendiri. Akses ke data menjadi sangat cepat jika indeks data tersebut diketahui. Menurut Singh, S. dan rekan-rekannya (2022), hash table adalah struktur data yang efektif untuk penyimpanan dan pengambilan data dengan cepat. Hash table bekerja dengan memetakan kunci data ke indeks dalam array, dan indeks ini digunakan untuk menyimpan data dalam array. Pencarian data dalam hash table sangat efisien karena nilai hash dari kunci data dapat dihitung dengan cepat dan digunakan untuk menentukan indeks array tempat data disimpan [7].

#### 2. Fungsi Hash Table

- Penyimpanan Data Asosiatif: Hash table memungkinkan penyimpanan data dengan kunci unik dan pengambilan data dengan cepat berdasarkan kunci tersebut.

- Pencarian Data yang Cepat: Hash table menawarkan waktu pencarian yang sangat cepat, rata-rata O(1), dibandingkan dengan struktur data lain seperti pohon pencarian biner yang memiliki waktu pencarian rata-rata O(log n).

- Penghematan Memori: Hash table dapat menghemat memori dengan menyimpan data secara kompak, terutama jika kunci data pendek.

- Implementasi yang Mudah: Hash table relatif mudah diimplementasikan dan dipahami.

#### 3. Sistem Hash Table

Hash table adalah struktur data yang sangat efisien untuk menyimpan dan mengambil data, menggunakan fungsi hash untuk mengubah kunci menjadi indeks dalam array, yang memungkinkan akses cepat ke nilai terkait. Menurut Chen, J. dan rekan-rekannya (2019), hash table menawarkan waktu pencarian yang cepat dan dapat menyimpan data dalam jumlah besar secara efisien. Namun, hash table bisa mengalami tabrakan, yaitu ketika dua kunci yang berbeda dipetakan ke indeks yang sama dalam array, yang dapat memperlambat kinerja [8].

- Hashing (Menghitung Hash Code)

Fungsi hash mengubah kunci menjadi indeks dalam array. Fungsi hash harus mendistribusikan kunci secara merata untuk menghindari tabrakan.

- Inserting (Memasukkan Data)

Proses memasukkan data ke dalam hash table:
Hashing the Key: Gunakan fungsi hash untuk menghitung hash code dari kunci.
Index Calculation: Gunakan hash code untuk menentukan indeks dalam array.
Handling Collisions: Jika indeks sudah ditempati, gunakan metode penanganan tabrakan seperti chaining atau open addressing.

- Searching (Mencari Data)

Proses pencarian data pada hash table:
Hashing the Key: Hitung hash code dari kunci yang dicari.
Index Calculation: Tentukan indeks dari hash code.
Traversing (Jika Diperlukan): Jika terjadi tabrakan, telusuri entri yang bertabrakan hingga menemukan kunci yang sesuai atau memastikan bahwa kunci tidak ada.

- Deleting (Menghapus Data)

Proses penghapusan data pada hash table:
Hashing the Key: Hitung hash code dari kunci yang akan dihapus.
Index Calculation: Tentukan indeks dari hash code.
Traversing (Jika Diperlukan): Jika terjadi tabrakan, telusuri entri yang bertabrakan hingga menemukan kunci yang sesuai.
Removing Entry: Hapus entri tersebut, dan jika menggunakan open addressing, pastikan untuk menandai slot sebagai dihapus (tergantung pada implementasi).

- Handling Collisions (Menangani Tabrakan)

Metode umum untuk menangani tabrakan:
Chaining: Menggunakan linked list di setiap slot array untuk menyimpan beberapa elemen dengan hash code yang sama.
Open Addressing: Mencari slot kosong berikutnya di array menggunakan metode seperti linear probing, quadratic probing, atau double hashing.

- Resizing (Mengubah Ukuran)

Ketika hash table terlalu penuh, performanya bisa menurun. Oleh karena itu, resizing diperlukan untuk membuat array baru yang lebih besar, menghitung ulang indeks untuk setiap elemen dalam hash table lama, dan memasukkan elemen-elemen tersebut ke dalam array baru.


#### 4. Kelebihan dan Kekuarangan Hash Table

Kelebihan Hash Table:

- Efisiensi Waktu: Hash table memungkinkan akses data yang cepat dan efisien [6].
- Penghematan Ruang Penyimpanan: Hash table menghemat ruang penyimpanan dengan mengubah data menjadi nilai hash yang lebih kecil [6].
- Pengurangan Waktu Pengembangan: Hash table mengurangi waktu pengembangan dengan menyederhanakan kompleksitas kode [6].

Kekurangan Hash Table:

- Collision: Hash table dapat mengalami tabrakan saat dua kunci memiliki nilai hash yang sama [6].
- Penurunan Performa: Hash table bisa mengalami penurunan performa jika tidak digunakan dengan benar [6].
- Pengurangan Keamanan: Hash table bisa mengurangi keamanan jika tidak diterapkan dengan tepat [6].

#### 5. Jenis-Jenis Hash Table:

- Hash Table Statis: Ukuran array pada hash table statis tidak dapat diubah setelah diciptakan.
- Hash Table Dinamis: Ukuran array pada hash table dinamis bisa berubah secara otomatis saat data ditambahkan atau dihapus.
- Hash Table Berantai: Hash table berantai digunakan untuk menangani tabrakan, yaitu ketika dua kunci berbeda dipetakan ke indeks yang sama dalam array.
- Pohon Hash: Pohon hash adalah struktur data gabungan yang mengombinasikan hash table dengan pohon pencarian biner.

```C++
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> tabelHash;
    tabelHash["alpha"] = 1;
    tabelHash["beta"] = 2;

    for (auto& pasangan : tabelHash) {
        cout << pasangan.first << ": " << pasangan.second << endl;
    }
    return 0;
}
```
#### Output:




#### Penjelasan Program:

Program diatas menggunakan `unordered_map` untuk menyimpan pasangan kunci-nilai, di mana kunci bertipe `string` dan nilai bertipe `int`. Program dimulai dengan meng-include library iostream untuk operasi input/output dan `unordered_map` untuk mengakses struktur data `unordered_map`. Namespace `std` digunakan untuk mempermudah akses ke elemen-elemen dalam standar library.

Di dalam fungsi `main`, pertama-tama dideklarasikan sebuah `unordered_map` dengan nama `tabelHash` yang akan menyimpan pasangan kunci-nilai. Dua pasangan kunci-nilai kemudian ditambahkan ke dalam `tabelHash` dengan kunci "alpha" memiliki nilai 1 dan kunci "beta" memiliki nilai 2.

Selanjutnya, program menggunakan loop `for` untuk mengiterasi setiap pasangan kunci-nilai dalam `tabelHash`. Pada setiap iterasi, kunci dan nilai pasangan tersebut dicetak ke layar menggunakan `cout`. Loop `for` menggunakan `auto&` untuk merujuk setiap pasangan kunci-nilai secara efisien, di mana `pasangan.first` merepresentasikan kunci dan `pasangan.second` merepresentasikan nilai.

Program berakhir dengan mengembalikan nilai 0, menandakan eksekusi yang sukses. Output program ini mencetak setiap pasangan kunci-nilai dalam `tabelHash`, tetapi urutannya tidak dijamin karena `unordered_map` tidak menyimpan elemen dalam urutan tertentu.

### C. Rekursif

#### 1. Pengertian Rekursif

Rekursif adalah suatu konsep di mana suatu fungsi memanggil dirinya sendiri secara terus-menerus hingga mencapai suatu kondisi dasar yang ditentukan. Rekursif digunakan untuk menyelesaikan masalah yang kompleks dengan cara membagi masalah menjadi beberapa bagian yang lebih kecil dan menyelesaikan masing-masing bagian secara rekursif [9].

#### 2. Rekursif Langsung dan Tidak Langsung

Perbedaan antara rekursif langsung dan tidak langsung adalah cara fungsi memanggil dirinya sendiri. Rekursif langsung memanggil dirinya sendiri secara langsung, sedangkan rekursif tidak langsung memanggil dirinya sendiri secara tidak langsung melalui fungsi lain. Rekursif langsung lebih mudah dipahami dan digunakan, namun memerlukan stack yang lebih besar untuk menampung variabel lokal dan fungsi yang dipanggil. Rekursif tidak langsung lebih kompleks dan memerlukan lebih banyak kode untuk implementasinya, namun dapat digunakan untuk menghitung nilai yang lebih kompleks [10].

#### 3. Kelebihan dan Kekurangan Rekursif

Kelebihan Rekursif:
- Mudah dalam Implementasi: Rekursif dapat digunakan untuk menyelesaikan masalah yang kompleks dengan cara membagi masalah menjadi beberapa bagian yang lebih kecil dan menyelesaikan masing-masing bagian secara rekursif [4].
- Efisiensi: Rekursif dapat digunakan untuk menyelesaikan masalah yang kompleks dengan cara membagi masalah menjadi beberapa bagian yang lebih kecil dan menyelesaikan masing-masing bagian secara rekursif [4].
- Menghemat Ruang Memori: Rekursif dapat digunakan untuk menyelesaikan masalah yang kompleks dengan cara membagi masalah menjadi beberapa bagian yang lebih kecil dan menyelesaikan masing-masing bagian secara rekursif [4].

Kekurangan Rekursif
- Kemungkinan Overflow: Rekursif dapat menyebabkan overflow jika fungsi memanggil dirinya sendiri secara terus-menerus tanpa batas, sehingga dapat menyebabkan program crash [4].
- Kemungkinan Error: Rekursif dapat menyebabkan error jika fungsi tidak didefinisikan dengan benar atau jika fungsi tidak dapat menyelesaikan masalah yang diberikan [4].
- Kemungkinan Tidak Berhenti: Rekursif dapat menyebabkan fungsi tidak berhenti jika tidak ada kondisi yang membatasi pengulangan, sehingga dapat menyebabkan program tidak berhenti [4].

#### 4. Base Case dan Recursive Case

Base case adalah kondisi yang menentukan kapan rekursi harus berhenti. Jika tidak ada base case, maka akan terjadi infinite loop. Recursive case adalah bagian rekursif, di mana fungsi memanggil dirinya sendiri [10]

#### 5. Demonstrasi Rekursi (recursion) dengan program Faktorial

Untuk mendemonstrasikan sebuah rekursi, kita membuat program untuk menghitung nilai faktorial dari suatu bilangan bulat (integer).
Faktorial dari suatu bilangan biasanya dilambangkan sebagai n!, yang mana n merupakan bilangan tersebut [9].

contoh :
5! = 5 x 4 x 3 x 2 x 1 = 120

#### Contoh Program:
```C++
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
```

#### Output:




#### Penjelasa Program:
Program diatas menghitung dan mencetak nilai faktorial dari sebuah angka menggunakan rekursi. Fungsi faktorial didefinisikan untuk menghitung `faktorial` dari integer `n` secara rekursif. Jika `n` sama dengan 0, fungsi mengembalikan 1 (basis kasus); jika tidak, fungsi memanggil dirinya sendiri dengan argumen `n-1` dan mengalikan hasilnya dengan `n`. Dalam fungsi `main`, variabel `angka` diinisialisasi dengan nilai 5, dan fungsi `faktorial` dipanggil dengan `angka` sebagai argumen. Hasilnya, program mencetak "Faktorial dari 6 adalah 120" ke layar, menandakan bahwa faktorial dari 5 adalah 720.

### D. Graph & Tree

#### 1. Pengertian Graph
Graph adalah struktur data yang tidak berdekatan (non-linier) yang terdiri dari simpul (verteks) dan sisi (edge) untuk merepresentasikan hubungan antar data. Simpul menyimpan data, sedangkan sisi menghubungkan antar simpul. Graph banyak digunakan untuk menyelesaikan masalah dalam kehidupan nyata seperti jaringan sensor nirkabel dan jejaring sosial. Pada jejaring sosial, pengguna diwakili oleh simpul dan hubungan pertemanan diwakili oleh sisi. [11].

#### 2. Jenis Graph

Berdasarkan ada tidaknya gelang (loop) maupun sisi ganda pada suatu graf, maka graf digolongkan menjadi dua jenis yaitu graf sederhana dan graf tidak sederhana.

- Graf sederhana (simple graph) adalah graf yang tidak memiliki gelang dan sisi ganda. Graf tidak sederhana/multigraf (unsimple graph/ multigraph) adalah graf yang memiliki gelang dan atau sisi ganda [12].

Berdasarkan orientasi arah pada sisi, maka secara umum graf dibedakan menjadi graf tak berarah dan graf berarah [12].

- Graf tak-berarah (undirected graph) adalah graf yang sisinya tidak mempunyai orientasi arah. Graf berarah (directed graph atau digraph) adalah graf yang setiap sisinya diberikan orientasi arah [12].

- Graf lengkap (complete graph) adalah graf sederhana dimana setiap pasang simpul yang berbeda terhubung oleh sebuah sisi. Graf lengkap dengan n buah simpul dilambangkan dengan K. 
Jumlah sisi pada graf lengkap yang terdiri dari 1 buah simpul adalah
n(n-1)/2 [12].

- Graf kosong (trivial) adalah graf yang tidak memiliki sisi [12].

- Graf berbobot (weighted graph) adalah graf yang setiap sisinya diberi sebuah harga (bobot) [12].

#### 3. Kelebihan dan Kekurangan Graph

Kelebihan Graph:
- Graph membantu dalam mengatur data.
- Graph digunakan untuk mengimplementasikan algoritma seperti DFS dan BFS.
- Dengan menggunakan graph kita dapat dengan mudah menemukan jalur terpendek dan tetangga dari node.
- Karena strukturnya yang non-linier, membantu dalam memahami masalah yang kompleks dan visualisasinya.

Kekurangan Grap:

- Memiliki kompleksitas memori yang besar.
- Graph menggunakan banyak pointer yang bisa rumit untuk ditangani.
- Jika graph direpresentasikan dengan adjacency matrix maka edge tidak memungkinkan untuk sejajar dan operasi perkalian graph juga sulit dilakukan.

#### Contoh Program:
```C++
#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    vector<Node*> anak;
};

Node* buatNodeBaru(int data) {
    Node* nodeBaru = new Node;
    nodeBaru->data = data;
    return nodeBaru;
}

int main() {
    Node* akar = buatNodeBaru(1);
    akar->anak.push_back(buatNodeBaru(2));
    akar->anak.push_back(buatNodeBaru(3));

    cout << "Akar: " << akar->data << endl;
    for (auto& anak : akar->anak) {
        cout << "Anak: " << anak->data << endl;
    }
    return 0;
}
```
#### Output:



#### Penjelasan Program

rogram diatas membangun dan mencetak struktur pohon sederhana menggunakan struktur data `Node`, yang terdiri dari nilai data integer dan vektor penunjuk ke anak-anaknya. Program dimulai dengan meng-include library `iostream` dan `vector`, serta menggunakan namespace `std`. Struktur `Node` didefinisikan untuk merepresentasikan sebuah simpul dalam pohon, yang terdiri dari integer `data` dan vektor penunjuk `anak` untuk menyimpan penunjuk ke node anak. Fungsi `buatNodeBaru` digunakan untuk membuat node baru dengan mengalokasikan memori, menginisialisasi `data` dengan nilai yang diberikan, dan mengembalikan penunjuk ke node baru tersebut. Dalam fungsi `main`, sebuah node akar dibuat dengan nilai 1, dan dua anak node dengan nilai 2 dan 3 ditambahkan ke vektor `anak` dari node akar. Program kemudian mencetak nilai data dari node akar dan anak-anaknya, menghasilkan output "Akar: 1" diikuti oleh "Anak: 2" dan "Anak: 3".


## Referensi

[1] Andri Heryandi. *Heap dan Operasinya*. Available: https://repository.unikom.ac.id/36115/1/Bab%20XI%20-%20Heap.pdf

[2] Antony Pranata. *Pemrograman Borland C++*. Andi Offset. Yogyakarta

[3] Moh. Sjukani. *Algoritma dan Struktur data dengan C, C++, dan Java*. Mitra Wacana Media. 2005

[4] Dewi. *Pengertian, Jenis-jenis, Contoh, Kelebihan dan Kekurangan Struktur Data*. 2019. Available: https://dewikhrnnsa.blogspot.com/2019/02/pengertian-dan-jenis-jenis-struktur.html

[5] Sianipar. *Struktur Data C++ dengan Pemograman Generik*. Yogyakarta: Andi Yogyakarta. 2015

[6] Joseph Teguh Santoso. *Struktur Data dan Algoritma*. Yayasan Primaagus Teknik. Semarang. 2021

[7] Singh, S., & Kumar, R. *Efficient Hash Table Based Data Structure for IoT Applications*. IEEE Access, 2022.

[8] Chen, J., & Li, Y. *Improved Hash Table Based Data Structure for Network Applications*. IEEE Transactions on Network and Information Systems Management, 2019.

[9] IDCSharp.com. *Rekursif (Recursions) Dalam Algoritma Pemrograman C/C++*. Available:
https://koding123.blogspot.com/2016/03/belajer-bahasa-pemrograman-Recursion-dalam-algoritma.html

[10] Fasilkom UI. *Dasar-Dasar Pemrograman 2*. Available: 
http://elearning.ai-innovation.id/pluginfile.php/77/mod_resource/content/1/DDP2_04_Jumat.pdf


[11] Zaldy Eka Putra. *Pengertian dan Representasi Graph*. 2014. Abailable: 
https://www.slideshare.net/slideshow/makalah-graph-i/42413476

[12] Humas Tel-U Surabaya. *Teori Graf: Sejarah, Manfaat, dan Aplikasinya*. 2023. Available: https://surabaya.telkomuniversity.ac.id/teori-graf-sejarah-manfaat-dan-aplikasinya/