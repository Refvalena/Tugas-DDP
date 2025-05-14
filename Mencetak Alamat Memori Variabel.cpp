#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 3.14;
    char c = 'A';

    int* ptr1 = &a;  // Pointer ke variabel a
    double* ptr2 = &b;  // Pointer ke variabel b
    char* ptr3 = &c;  // Pointer ke variabel c

    cout << "Alamat memori variabel a: " << ptr1 << endl;
    cout << "Alamat memori variabel b: " << ptr2 << endl;
    cout << "Alamat memori variabel c: " << ptr3 << endl;

    return 0;
}

