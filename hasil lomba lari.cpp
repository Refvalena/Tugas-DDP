#include <iostream>
#include <string>
using namespace std;

struct Lomba {
    string nama_peserta;
    float waktu_tempuh;
    int peringkat;
};

int main() {
    Lomba l;
    cout << "Masukkan nama peserta: ";
    getline(cin, l.nama_peserta);
    cout << "Masukkan waktu tempuh (dalam detik): ";
    cin >> l.waktu_tempuh;
    cout << "Masukkan peringkat peserta: ";
    cin >> l.peringkat;

    cout << "\nHasil Lomba Lari:\n";
    cout << "Nama Peserta: " << l.nama_peserta << endl;
    cout << "Waktu Tempuh: " << l.waktu_tempuh << " detik" << endl;
    cout << "Peringkat: " << l.peringkat << endl;

    return 0;
}

