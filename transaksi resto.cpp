#include <iostream>
#include <string>
using namespace std;

struct Menu {
    string nama_menu;
    float harga;
    int jumlah;
};

int main() {
    Menu m;
    cout << "Masukkan nama menu: ";
    getline(cin, m.nama_menu);
    cout << "Masukkan harga menu: ";
    cin >> m.harga;
    cout << "Masukkan jumlah pesanan: ";
    cin >> m.jumlah;

    float total = m.harga * m.jumlah;
    cout << "\nTotal Pembayaran untuk " << m.jumlah << " " << m.nama_menu << " adalah: " << total << endl;

    return 0;
}

