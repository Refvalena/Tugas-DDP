#include <iostream>
#include <string>
using namespace std;

struct Film {
    string judul;
    string sutradara;
    string genre;
    int tahun_rilis;
};

int main() {
    Film f;
    cout << "Masukkan judul film: ";
    getline(cin, f.judul);
    cout << "Masukkan sutradara film: ";
    getline(cin, f.sutradara);
    cout << "Masukkan genre film: ";
    getline(cin, f.genre);
    cout << "Masukkan tahun rilis film: ";
    cin >> f.tahun_rilis;

    cout << "\nData Film Favorit:\n";
    cout << "Judul: " << f.judul << endl;
    cout << "Sutradara: " << f.sutradara << endl;
    cout << "Genre: " << f.genre << endl;
    cout << "Tahun Rilis: " << f.tahun_rilis << endl;

    return 0;
}

