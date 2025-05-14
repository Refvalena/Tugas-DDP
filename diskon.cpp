#include <iostream>
using namespace std;

int main() {
    double totalPembelian, diskon, totalBayar;

    // Input total pembelian
    cout << "Masukkan total pembelian: Rp ";
    cin >> totalPembelian;

    // Kondisi untuk menentukan besaran diskon
    if (totalPembelian > 1000000) {
        diskon = 0.20;  // Diskon 20%
        cout << "Anda mendapatkan diskon 20%" << endl;
    } 
    else if (totalPembelian > 500000) {
        diskon = 0.10;  // Diskon 10%
        cout << "Anda mendapatkan diskon 10%" << endl;
    } 
    else if (totalPembelian > 200000) {
        diskon = 0.05;  // Diskon 5%
        cout << "Anda mendapatkan diskon 5%" << endl;
    } 
    else {
        diskon = 0.0;   // Tidak ada diskon
        cout << "Anda tidak mendapatkan diskon." << endl;
    }

    // Hitung total yang harus dibayar
    totalBayar = totalPembelian - (totalPembelian * diskon);
    cout << "Total yang harus dibayar: Rp " << totalBayar << endl;

    return 0;
}

