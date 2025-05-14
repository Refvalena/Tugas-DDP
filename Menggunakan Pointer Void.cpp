#include <iostream>
using namespace std;

void printValue(void* ptr, char type) {
    if (type == 'i') {
        cout << "Nilai integer: " << *(static_cast<int*>(ptr)) << endl;
    }
    else if (type == 'd') {
        cout << "Nilai double: " << *(static_cast<double*>(ptr)) << endl;
    }
    else if (type == 'c') {
        cout << "Nilai char: " << *(static_cast<char*>(ptr)) << endl;
    }
}

int main() {
    int x = 10;
    double y = 3.14;
    char z = 'A';

    void* ptr;

    // Menggunakan pointer void untuk menunjuk ke tipe data yang berbeda
    ptr = &x;
    printValue(ptr, 'i');  // Menampilkan nilai integer

    ptr = &y;
    printValue(ptr, 'd');  // Menampilkan nilai double

    ptr = &z;
    printValue(ptr, 'c');  // Menampilkan nilai char

    return 0;
}

