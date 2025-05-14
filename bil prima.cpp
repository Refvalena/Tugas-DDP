#include <iostream>
using namespace std;

int main() {
    int N, i = 2, j;
    bool isPrime;

    cout << "Masukkan angka terakhir (N): ";
    cin >> N;

    cout << "Bilangan prima dari 1 hingga " << N << ": " << endl;
    do {
        isPrime = true;
        j = 2;
        do {
            if (i % j == 0 && j < i) {
                isPrime = false;
                break;
            }
            j++;
        } while (j <= i / 2);
        
        if (isPrime)
            cout << i << " ";
        
        i++;
    } while (i <= N);

    cout << endl;
    return 0;
}

