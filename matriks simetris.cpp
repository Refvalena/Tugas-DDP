#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran matriks (n x n): ";
    cin >> n;

    int A[n][n];
    cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    bool simetris = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                simetris = false;
                break;
            }
        }
    }

    cout << "Matriks " << (simetris ? "Simetris" : "Tidak Simetris") << endl;
    return 0;
}

