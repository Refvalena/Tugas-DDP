#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun_terbit;
    string isbn;
};

int main() {
    Buku b;
    cout << "Masukkan judul buku: ";
    getline(cin, b.judul);
    cout << "Masukkan penulis buku: ";
    getline(cin, b.penulis);
    cout << "Masukkan tahun terbit: ";
    cin >> b.tahun_terbit;
    cin.ignore();  // Membersihkan buffer input
    cout << "Masukkan ISBN: ";
    getline(cin, b.isbn);

    cout << "\nData Buku:\n";
    cout << "Judul: " << b.judul << endl;
    cout << "Penulis: " << b.penulis << endl;
    cout << "Tahun Terbit: " << b.tahun_terbit << endl;
    cout << "ISBN: " << b.isbn << endl;

    return 0;
}

