#include <iostream>
using namespace std;

struct PersegiPanjang {
    float panjang;
    float lebar;
};

int main() {
    PersegiPanjang pp;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> pp.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> pp.lebar;

    float luas = pp.panjang * pp.lebar;
    float keliling = 2 * (pp.panjang + pp.lebar);

    cout << "Luas Persegi Panjang: " << luas << endl;
    cout << "Keliling Persegi Panjang: " << keliling << endl;

    return 0;
}

