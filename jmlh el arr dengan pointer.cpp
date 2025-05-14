#include <iostream>
using namespace std;

int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = sumArray(arr, n);
    cout << "Jumlah semua elemen dalam array adalah: " << total << endl;

    return 0;
}

