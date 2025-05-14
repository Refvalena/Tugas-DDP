#include <iostream>
using namespace std;

int main() {
    int kecepatan;

    // Input kecepatan kendaraan
    cout << "Masukkan kecepatan kendaraan (dalam km/jam): ";
    cin >> kecepatan;

    // Cek kondisi kecepatan
    if (kecepatan < 0) {
        cout << "Kecepatan tidak valid!" << endl;
    } 
    else if (kecepatan == 0) {
        cout << "Kendaraan berhenti." << endl;
    } 
    else if (kecepatan > 0 && kecepatan <= 40) {
        cout << "Kecepatan rendah." << endl;
    } 
    else if (kecepatan > 40 && kecepatan <= 80) {
        cout << "Kecepatan sedang." << endl;
    } 
    else if (kecepatan > 80 && kecepatan <= 120) {
        cout << "Kecepatan tinggi." << endl;
    } 
    else {
        cout << "Kecepatan sangat tinggi! Berbahaya." << endl;
    }

    return 0;
}

