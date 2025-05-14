#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> n >> m;

    int A[n][m], Transpose[m][n];

    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Transpose[j][i] = A[i][j];
        }
    }

    cout << "Matriks Transpose:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

