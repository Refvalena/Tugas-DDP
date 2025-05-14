#include <iostream>
using namespace std;

const float PI = 3.14159;

float luasLingkaran(float radius) {
    return PI * radius * radius;
}

int main() {
    float r;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    cout << "Luas lingkaran adalah: " << luasLingkaran(r) << endl;
    return 0;
}

