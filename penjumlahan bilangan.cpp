#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Masukkan angka terakhir (N): ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Jumlah bilangan dari 1 hingga " << N << " adalah: " << sum << endl;

    return 0;
}

