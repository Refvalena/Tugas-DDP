#include <iostream>
using namespace std;

int main() {
    
    double hargaBeli, hargaJual, untung;

    // Input harga beli
    cout << "Masukkan harga beli: ";
    cin >> hargaBeli;

    // Input harga jual
    cout << "Masukkan harga jual: ";
    cin >> hargaJual;

    // Menghitung keuntungan
    untung = hargaJual - hargaBeli;

    // Mengecek apakah untung atau rugi
    if (untung > 0) {
        cout << "Keuntungan: " << untung << endl;
    } else if (untung < 0) {
        cout << "Rugi: " << -untung << endl;
    } else {
        cout << "Tidak ada untung atau rugi." << endl;
    }

    return 0;
}

