#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input panjang sisi-sisi segitiga
    cout << "Masukkan panjang sisi pertama: ";
    cin >> a;
    cout << "Masukkan panjang sisi kedua: ";
    cin >> b;
    cout << "Masukkan panjang sisi ketiga: ";
    cin >> c;

    // Cek apakah ketiga sisi bisa membentuk segitiga
    if (a + b > c && a + c > b && b + c > a) {
        // Cek jenis segitiga
        if (a == b && b == c) {
            cout << "Segitiga ini adalah segitiga sama sisi." << endl;
        } 
        else if (a == b || b == c || a == c) {
            cout << "Segitiga ini adalah segitiga sama kaki." << endl;
        } 
        else {
            cout << "Segitiga ini adalah segitiga sembarang." << endl;
        }
    } 
    else {
        cout << "Ketiga sisi tersebut tidak dapat membentuk segitiga." << endl;
    }

    return 0;
}

