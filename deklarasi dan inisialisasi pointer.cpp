#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x; // Pointer menunjuk ke alamat x
    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << p << endl;
    cout << "Nilai melalui pointer: " << *p << endl;
    return 0;
}

