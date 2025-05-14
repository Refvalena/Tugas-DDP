#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0;
    cout << "Masukkan jumlah baris dan kolom matriks: ";
    cin >> n >> m;

    int A[n][m];
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
            sum += A[i][j];
        }
    }

    cout << "Rata-rata elemen: " << (double)sum / (n * m) << endl;
    return 0;
}

