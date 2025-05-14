#include <iostream>
#include <cmath>
using namespace std;

struct Titik {
    float x, y;
};

float hitungJarak(Titik t1, Titik t2) {
    return sqrt(pow(t2.x - t1.x, 2) + pow(t2.y - t1.y, 2));
}

int main() {
    Titik t1, t2;
    cout << "Masukkan koordinat titik 1 (x y): ";
    cin >> t1.x >> t1.y;
    cout << "Masukkan koordinat titik 2 (x y): ";
    cin >> t2.x >> t2.y;

    cout << "Jarak antara kedua titik: " << hitungJarak(t1, t2) << endl;

    return 0;
}

