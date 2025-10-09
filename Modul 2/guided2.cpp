#include <iostream>

using namespace std;

int main() {
    float hargaProduk = 50000.0;
    float* ptrHarga;
    ptrHarga = &hargaProduk;

    cout << "Harga Awal Produk: Rp " << hargaProduk << endl;
    cout << "Alamat Memori Harga: " << ptrHarga << endl;

    cout << "\n...Memberikan diskon 10% melalui pointer..." << endl;
    *ptrHarga = *ptrHarga * 0.9;
    cout << "Harga Setelah Diskon: Rp " << hargaProduk << endl;

    return 0;
}