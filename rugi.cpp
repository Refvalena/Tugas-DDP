#include <iostream>
using namespace std;

int main() {
    
    double hargaBeli, hargaJual, rugi;

    // Input harga beli
    cout << "Masukkan harga beli: ";
    cin >> hargaBeli;

    // Input harga jual
    cout << "Masukkan harga jual: ";
    cin >> hargaJual;

    // Menghitung rugi jika harga beli lebih besar dari harga jual
    if (hargaBeli > hargaJual) {
        rugi = hargaBeli - hargaJual;
        cout << "Rugi: " << rugi << endl;
    } else if (hargaBeli < hargaJual) {
        cout << "Tidak ada rugi, Anda mendapat untung." << endl;
    } else {
        cout << "Tidak ada untung atau rugi, harga beli sama dengan harga jual." << endl;
    }

    return 0;
}

