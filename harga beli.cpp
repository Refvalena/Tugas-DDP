#include <iostream>
using namespace std;

int main() {
    
    double hargaJual, diskon, hargaBeli;

    // Input harga jual
    cout << "Masukkan harga jual: ";
    cin >> hargaJual;

    // Input persentase diskon
    cout << "Masukkan persentase diskon: ";
    cin >> diskon;

    // Menghitung harga beli setelah diskon
    hargaBeli = hargaJual - (hargaJual * diskon / 100);

    // Output harga beli
    cout << "Harga beli barang setelah diskon adalah: " << hargaBeli << endl;

    return 0;
}

