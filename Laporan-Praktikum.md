# Template Laporan Praktikum Struktur Data

## 1. Nama, NIM, Kelas
- **Nama**: Ariel Ahnaf Kusuma
- **NIM**: 103112400050
- **Kelas**: IF-12-05

## 2. Motivasi Belajar Struktur Data
Untuk menambah Ilmu di kehidupan saya, dan dapat berguna di masa depan.
Dan juga saya cukup menyukai mempelajari hal baru.

## 3. Dasar Teori
### Tujuan
 1. Meng-review kembali bebrapa algoritma pada semester semester sebelumnya
 2. Mempelajadi dasar bahasa C++

## APA ITU C++?
C++ adalah bahasa pemrograman komputer yang merupakan evolusi dari keluarga bahasa C yang sudah ada. Sebagai bahasa yang berorientasi pada objek yang memberikan struktur jelas pada program dan memungkinkan kode untuk digunakan ulang, C++ dapat menurunkan biaya pengembangan.

Contoh program C++ bisa ditemukan dalam sistem operasi yang kita kenal sekarang karena C++ adalah pemrograman yang bersifat portabel dan bisa digunakan 
untuk menciptakan berbagai aplikasi yang bisa beradaptasi dengan beragam platform.

## BAGAIMANA CARA KERJANYA?
Dalam konsep pemrograman, ada yang disebut dengan source file atau source code. Ini adalah instruksi yang kita buat di text editor seperti notepad++ yang kemudian akan digunakan oleh komputer untuk membentuk program C++.


## 4. Guided
### 4.1 Guided 1

### Source Code:
#include <iostream>

using namespace std;

int main() {
    double total_pembelian, diskon;
    cout<<"Berapa kamu belanja: Rp.";
    cin >>total_pembelian;
    if(total_pembelian>30000){
        diskon=0.1*total_pembelian;
        cout<<"Kamu dapat diskon sebesar"<<diskon<<"orang kaya lu tong";
    }else {
        cout<<"Kamu belanjanya masih dikit,Tambahin lah, biar gua kaya";
    }
    return 0;
}

### Output
![Output](<Screenshot 2025-10-02 094150.png>)

### Penjelasan:
Fungsi program ini ialah untuk menghitung diskon belanja. Jadi, pertama user diminta masukin total belanjaannya. Kalau total belanjanya lebih dari 30.000, otomatis user akan dapat diskon 10% dari total belanja dan hasilnya bakal ditampilkan dengan pesan khusus. Tapi kalau belanjaannya masih di bawah atau sama dengan 30.000, tidak akan ada diskon, program cuma memberikan pesan kalau belanjanya masih kurang. Singkatnya, program ini mengngecek seberapa besar belanja kamu, lalu menentukan user dapet diskon atau tidak.

### 4.2 Guided 2

### Source Code:
#include <iostream>

using namespace std;

int main() {
    int jumlah;
    cout<<"Tulis berap banyak perulangannya:";
    cin>>jumlah;
    for(int i = 0; i<jumlah; i++){
        cout<<"Saya sangat pintar seperti Manggo Mustard"<<endl;
    }
    return 0;
}


### Output
![Output](<Screenshot 2025-10-02 094234.png>)

### Penjelasan:
Program C++ ini memiliki fungsi buat menampilkan teks berulang sesuai jumlah yang kita masukan. Pertama, user diminta mengetik berapa kali mau mengulang lewat variabel jumlah. Setelah itu, ada perulangan for yang jalan mulai dari i = 0 sampai kurang dari jumlah. Di dalam perulangan itu, program bakal nge-print kalimat "Saya sangat pintar seperti Manggo Mustard" tiap kali loop jalan. Jadi, makin besar angka yang diinput, makin banyak juga teks yang ditampilkan.

### 4.3 Guided 3

### Source Code:
#include<iostream>

using namespace std;
int main(){
    float celcius, fahrenheit;
    cout << "Seberapa dingin lu:";
    cin >> celcius;
    fahrenheit = (9.0/5.0) * celcius + 32;
    cout << "Dingin lu itu setara sama suhu: " << fahrenheit << "derajat fahrenheit" <<endl;
    cout << "Itu dingin banget bjrr";
    return 0;
}

### Output
![Output](<Screenshot 2025-10-02 094309.png>)

### Penjelasan:
program ini dipakai buat mengkonversi suhu dari Celcius ke Fahrenheit. User diminta masukan suhu dalam Celcius lewat variabel celcius. Setelah itu, program menghitung konversinya pakai rumus (9.0/5.0) * celcius + 32 dan hasilnya disimpan dalam variabel fahrenheit. Terus, hasil konversi akan ditampilkan oleh program agar user tahu suhu setara dalam Fahrenheit.

## 5. Unguided
### 5.1 Unguided 1

### Source Code 
#include <iostream> //103112400050
using namespace std;
int main() {
 int x, y;
 cout << "Masukkan dua bilangan bulat: ";
 cin >> x >> y;
 cout << "Hasil penjumlahan: " << x + y << endl;
 cout << "Hasil pengurangan: " << x - y << endl;
 cout << "Hasil perkalian: " << x * y << endl;
 if(y != 0) {
 cout << "Hasil pembagian: " << x / y << endl;
 } else {
 cout << "Pembagian dengan nol tidak valid." << endl;
 }
}

### Output
![Output](<Screenshot 2025-10-02 094328.png>)

### Penjelasan
Program ini berfungsi untuk mengolah dua angka bulat yang dimasukin user. Pertama, user meng-input dua bilangan (x dan y). Setelah itu, program langsung menampilkan hasil dari penjumlahan, pengurangan, dan perkalian antara dua angka tersebut. Lalu untuk pembagian, program memakai kondisi if, jadi kalau y bukan nol, maka hasil pembagiannya bakal muncul, tapi kalau y nol, program bakal menampilkan kalau pembagian tidak valid (soalnya tidak bisa membagi angka dengan nol). 

### 5.2 Unguided 2

### Source Code
#include <iostream> //103112400050
#include <string>
using namespace std;
string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
"enam", "tujuh", "delapan", "sembilan"};
string angka(int n) {
 if (n == 0) {
 return "nol";
 }
 if (n == 100) {
 return "seratus";
 }
 
 if (n >= 10 && n < 20) {
 if (n == 10) return "sepuluh";
 if (n == 11) return "sebelas";
 return satuan[n % 10] + " belas";
 } else if (n >= 20 && n < 100) {
 return satuan[n / 10] + " puluh " + satuan[n % 10];
 } else {
 return satuan[n];
 }
}
int main() {
 int n;
 cout << "Masukkan angka (0-100): ";
 cin >> n;
 if (n < 0 || n > 100) {
 cout << "Angka di luar jangkauan." << endl;
 } else {
 cout << angka(n) << endl;
 }
 return 0;
}

### Output
![Output](<Screenshot 2025-10-02 094349.png>)

### Penjelasan
Program ini berfungsi untuk mengubah angka (0–100) menjadi bentuk tulisan dalam bahasa Indonesia. Pertama, ada array satuan yang menyimpan kata untuk angka 1–9. Lalu ada fungsi angka(int n) yang mengatasi logika konversinya: jadi kalau n itu sama dengan 0 maka hasilnya “nol”, kalau 100 maka hasilnya  “seratus”, kalau di antara 10–19 ditulis pakai format “belas” kalau di antara 20–99 maka akan ditulis menggunakan format “puluh” sedangkan angka biasa tinggal mengambil langsung dari array satuan. Pada bagian main, user diminta input angka. Kalau input di luar 0–100, program akan error, tapi kalau input valid, langsung ditampilkan versi tulisannya.

### 5.3 Unguided 3

### Source Code
#include <iostream>
using namespace std;

int main(){
    int x; 
    cin >> x;

    for(int y=x; y>=1; y--){
        for(int a=0; a<x-y; a++) cout<<"  ";
        for(int z=y; z>=1; z--) cout<<z<<" ";
        cout<<"* ";
        for(int z=1; z<=y; z++) cout<<z<<" ";
        cout<<endl;
    }
    for(int a=0; a<x; a++) cout<<"  ";
    cout<<"*"<<endl;

    return 0;
}

### Output
![Output](<Screenshot 2025-10-02 094418.png>)

### Penjelasan
Fungsi program ini yaitu untuk membuat pola bintang (*) berbentuk segitiga terbalik sesuai angka yang dimasukan. User memasukan sebuah angka x sebagai tinggi segitiga. Lalu ada beberapa for loop yang mengatur spasi dan jumlah bintang agar nanti bentuknya rapi dan tersusun di tengah. Loop luar (y) mengatur baris, sedangkan loop dalam berfungsi mengatur berapa banyak spasi dan bintang yang harus ditampilkan tiap baris. Setelah semua baris selesai, akan ada tambahan baris terakhir dengan satu bintang di bagian bawah.

## 6. Kesimpulan
Praktikum ini kita diajarkan dasar program dan algoritma algritma pada C++, seperti array, perulangan, dll. Praktikum ini juga bertujuan agar mahasiswa dapat mengingat kembali beberapa algoritma pada semester sebelumnya.

## 7. Referensi
https://algorit.ma/blog/apa-itu-c-2022/