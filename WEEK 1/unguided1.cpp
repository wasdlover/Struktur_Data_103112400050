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