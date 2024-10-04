#include <iostream>
using namespace std;

int main() {
    
    int angkaRahasia = 23;
    int tebakan;
    int jumlahTebakan = 0;

    cout << "=== Permainan Tebak Angka ===\n";
    cout << "Saya sudah memilih angka antara 1 - 50.\n";
    cout << "Coba tebak angkanya!\n\n";

    do {
        cout << "Masukkan tebakanmu: ";
        cin >> tebakan;
        jumlahTebakan++;

        if (tebakan > angkaRahasia) {
            cout << "Terlalu tinggi! Coba lagi.\n";
        } else if (tebakan < angkaRahasia) {
            cout << "Terlalu rendah! Coba lagi.\n";
        } else {
            cout << "Selamat! Kamu menebak dengan benar setelah " << jumlahTebakan << " tebakan.\n";
        }
    } while (tebakan != angkaRahasia);

    return 0;
}

