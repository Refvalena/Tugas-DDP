#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaIkan, habitat, deskripsi;

    cout << "Masukkan nama ikan: ";
    cin>> namaIkan;
    cout << "Masukkan habitat ikan: ";
    cin>> habitat;
    cout << "Masukkan deskripsi ikan: ";
    cin>> deskripsi;

    cout << "\nInformasi ikan yang Anda masukkan:\n";
    cout << "Nama Ikan: " << namaIkan << endl;
    cout << "Habitat: " << habitat << endl;
    cout << "Deskripsi: " << deskripsi << endl;

    return 0;
}


