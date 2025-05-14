#include <iostream>
using namespace std;

float rataRata(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Rata-rata: " << rataRata(arr, n) << endl;
    return 0;
}

