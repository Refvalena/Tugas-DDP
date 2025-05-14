#include <iostream>
using namespace std;

int main() {
    int n, m, target;
    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> n >> m;

    int A[n][m];
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Masukkan elemen yang dicari: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == target) {
                cout << "Elemen " << target << " ditemukan di indeks (" << i << ", " << j << ")\n";
                return 0;
            }
        }
    }

    cout << "Elemen tidak ditemukan.\n";
    return 0;
}
