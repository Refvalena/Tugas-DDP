#include <iostream>
#include <string>
using namespace std;

struct Karyawan {
    string nama;
    string nip;
    string jabatan;
    float gaji;
};

int main() {
    Karyawan k;
    cout << "Masukkan nama karyawan: ";
    getline(cin, k.nama);
    cout << "Masukkan NIP: ";
    getline(cin, k.nip);
    cout << "Masukkan jabatan: ";
    getline(cin, k.jabatan);
    cout << "Masukkan gaji: ";
    cin >> k.gaji;

    cout << "\nData Karyawan:\n";
    cout << "Nama: " << k.nama << endl;
    cout << "NIP: " << k.nip << endl;
    cout << "Jabatan: " << k.jabatan << endl;
    cout << "Gaji: " << k.gaji << endl;

    return 0;
}

