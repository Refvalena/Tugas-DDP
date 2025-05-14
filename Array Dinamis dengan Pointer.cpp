#include <iostream>
using namespace std;

int main() {
    int* arr;
    int size;

    cout << "Masukkan jumlah elemen array: ";
    cin >> size;

    // Alokasi memori dinamis untuk array
    arr = new int[size];

    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Mengisi array menggunakan pointer
    }

    cout << "Array yang dimasukkan: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Menampilkan elemen array
    }
    cout << endl;

    // Dealokasi memori setelah digunakan
    delete[] arr;

    return 0;
}

