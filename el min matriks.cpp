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
        }
    }

    int min = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }

    cout << "Elemen Minimum dalam Matriks: " << min << endl;
    return 0;
}

