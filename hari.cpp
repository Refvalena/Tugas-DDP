#include <iostream>
using namespace std;

int main() {
    int hari;

    // Input nomor hari
    cout << "Masukkan nomor hari (1-7): ";
    cin >> hari;

    // Cek nomor hari
    if (hari == 1) {
        cout << "Hari ini adalah Senin." << endl;
    } 
    else if (hari == 2) {
        cout << "Hari ini adalah Selasa." << endl;
    } 
    else if (hari == 3) {
        cout << "Hari ini adalah Rabu." << endl;
    } 
    else if (hari == 4) {
        cout << "Hari ini adalah Kamis." << endl;
    } 
    else if (hari == 5) {
        cout << "Hari ini adalah Jumat." << endl;
    } 
    else if (hari == 6) {
        cout << "Hari ini adalah Sabtu." << endl;
    } 
    else if (hari == 7) {
        cout << "Hari ini adalah Minggu." << endl;
    } 
    else {
        cout << "Nomor hari tidak valid! Masukkan angka antara 1 sampai 7." << endl;
    }

    return 0;
}

