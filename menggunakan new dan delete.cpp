#include <iostream>
using namespace std;

int main() {
    int* ptr;
    int size;

    cout << "Masukkan jumlah elemen array: ";
    cin >> size;

    // Alokasi memori dinamis untuk array
    ptr = new int[size];

    cout << "Masukkan " << size << " elemen array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> ptr[i]; // Mengisi array menggunakan pointer
    }

    cout << "Array yang dimasukkan: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Dealokasi memori
    delete[] ptr;

    return 0;
}

