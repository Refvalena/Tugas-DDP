#include <iostream>
using namespace std;

int main() {
    const int n = 2, m = 2;
    int A[n][m] = {{1, 2}, {3, 4}};
    int B[n][m] = {{5, 6}, {7, 8}};
    int C[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Hasil Penjumlahan Matriks: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

