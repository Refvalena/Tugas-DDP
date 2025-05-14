#include <iostream>
using namespace std;

int main() {
    int usia;

    cout << "Masukkan usia Anda: ";
    cin >> usia;

    if (usia >= 0 && usia <= 12) {
        cout << "Anda masih anak-anak." << endl;
    } 
    else if (usia >= 13 && usia <= 17) {
        cout << "Anda seorang remaja." << endl;
    } 
    else if (usia >= 18 && usia <= 59) {
        cout << "Anda seorang dewasa." << endl;
    } 
    else if (usia >= 60) {
        cout << "Anda sudah lanjut usia." << endl;
    } 
    else {
        cout << "Usia yang Anda masukkan tidak valid!" << endl;
    }

    return 0;
}

