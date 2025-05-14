#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Meminta jumlah baris dan kolom array
    cout << "Masukkan jumlah baris: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom: ";
    cin >> cols;

    // Deklarasi array 2 dimensi
    int array[rows][cols];

    // Memasukkan nilai ke dalam array
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Elemen ke-(" << i + 1 << ", " << j + 1 << "): ";
            cin >> array[i][j];
        }
    }

    // Menampilkan isi array
    cout << "Array 2 dimensi:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

