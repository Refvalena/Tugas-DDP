#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Angka yang Anda masukkan adalah bilangan positif." << endl;

        if (angka % 2 == 0) {
            cout << "Angka tersebut juga merupakan bilangan genap." << endl;
        } else {
            cout << "Angka tersebut merupakan bilangan ganjil." << endl;
        }
    } 
    else if (angka < 0) {
        cout << "Angka yang Anda masukkan adalah bilangan negatif." << endl;

        if (angka % 2 == 0) {
            cout << "Angka tersebut juga merupakan bilangan genap." << endl;
        } else {
            cout << "Angka tersebut merupakan bilangan ganjil." << endl;
        }
    } 
    else {
        cout << "Anda memasukkan angka nol, yang bukan bilangan positif atau negatif." << endl;
    }

    return 0;
}

