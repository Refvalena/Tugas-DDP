#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Masukkan jumlah baris matriks: ";
    cin >> row;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> col;

    // Alokasi memori dinamis untuk matriks
    int** matrix = new int*[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }

    // Mengisi matriks
    cout << "Masukkan elemen-elemen matriks:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Menampilkan matriks
    cout << "Matriks yang dimasukkan:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Dealokasi memori matriks
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

