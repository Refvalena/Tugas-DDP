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

    cout << "Total elemen per baris:\n";
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += A[i][j];
        }
        cout << "Baris " << i + 1 << ": " << sum << endl;
    }

    return 0;
}

