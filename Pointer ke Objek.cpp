#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    MyClass(int val) : x(val) {}

    void display() {
        cout << "Nilai x: " << x << endl;
    }
};

int main() {
    MyClass obj(10);    // Membuat objek
    MyClass* ptr = &obj; // Pointer menunjuk ke objek

    // Mengakses anggota objek melalui pointer
    cout << "Menggunakan pointer untuk mengakses metode dan data objek:" << endl;
    ptr->display(); // Memanggil metode display melalui pointer
    cout << "Nilai x melalui pointer: " << ptr->x << endl;

    return 0;
}

