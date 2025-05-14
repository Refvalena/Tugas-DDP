#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> n >> m;

    int A[n][m];
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
            if (A[i][j] % 2 != 0) A[i][j] = 0; 
        }
    }

    cout << "Matriks setelah diubah:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

