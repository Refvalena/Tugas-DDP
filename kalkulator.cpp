#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float bil1, bil2, hasil;

    cout << "Kalkulator Sederhana" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih operasi (1-4): ";
    cin >> pilihan;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    switch (pilihan) {
        case 1:
            hasil = bil1 + bil2;
            cout << "Hasil penjumlahan: " << hasil << endl;
            break;
        case 2:
            hasil = bil1 - bil2;
            cout << "Hasil pengurangan: " << hasil << endl;
            break;
        case 3:
            hasil = bil1 * bil2;
            cout << "Hasil perkalian: " << hasil << endl;
            break;
        case 4:
            if (bil2 != 0) {
                hasil = bil1 / bil2;
                cout << "Hasil pembagian: " << hasil << endl;
            } else {
                cout << "Error: Pembagian dengan nol!" << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
