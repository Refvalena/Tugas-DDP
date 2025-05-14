#include <iostream>
#include <string>
using namespace std;

struct Kendaraan {
    string merk;
    string model;
    string warna;
    int tahun_produksi;
};

int main() {
    Kendaraan k;
    cout << "Masukkan merk kendaraan: ";
    getline(cin, k.merk);
    cout << "Masukkan model kendaraan: ";
    getline(cin, k.model);
    cout << "Masukkan warna kendaraan: ";
    getline(cin, k.warna);
    cout << "Masukkan tahun produksi: ";
    cin >> k.tahun_produksi;

    cout << "\nData Kendaraan:\n";
    cout << "Merk: " << k.merk << endl;
    cout << "Model: " << k.model << endl;
    cout << "Warna: " << k.warna << endl;
    cout << "Tahun Produksi: " << k.tahun_produksi << endl;

    return 0;
}

