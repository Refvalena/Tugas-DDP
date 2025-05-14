#include <iostream>
using namespace std;

int main() {
    const int n = 2, m = 2, p = 2;
    int A[n][m] = {{1, 2}, {3, 4}};
    int B[m][p] = {{5, 6}, {7, 8}};
    int C[n][p] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Hasil Perkalian Matriks: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

