#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    float harga;
    int jumlah_stok;
    string kode_barang;
};

int main() {
    Barang b;
    cout << "Masukkan nama barang: ";
    getline(cin, b.nama);
    cout << "Masukkan harga barang: ";
    cin >> b.harga;
    cout << "Masukkan jumlah stok barang: ";
    cin >> b.jumlah_stok;
    cin.ignore();  // Membersihkan buffer input
    cout << "Masukkan kode barang: ";
    getline(cin, b.kode_barang);

    cout << "\nData Barang:\n";
    cout << "Nama: " << b.nama << endl;
    cout << "Harga: " << b.harga << endl;
    cout << "Jumlah Stok: " << b.jumlah_stok << endl;
    cout << "Kode Barang: " << b.kode_barang << endl;

    return 0;
}

