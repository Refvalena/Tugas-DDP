#include <iostream>
using namespace std;

int main() {
    int N, i = 1;

    cout << "Masukkan angka terakhir (N): ";
    cin >> N;

    cout << "Deret angka ganjil dari 1 hingga " << N << ": ";
    do {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= N);

    cout << endl;
    return 0;
}

